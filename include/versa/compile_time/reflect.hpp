#pragma once

#include "string.hpp"
#include "meta.hpp"

namespace versa::ct {
   struct none_t {};

   template <auto S, auto MP>
   struct mapping {

   };

   template <typename Derived, typename Parent=none_t>
   struct reflectable {
      using parent_type = Parent;
      constexpr static inline bool is_reflectable = !std::is_same_v<Derived, none_t>;
      constexpr static inline bool has_parent     = !std::is_same_v<Parent, none_t>;
      constexpr static inline std::string_view get_name() noexcept {
         constexpr auto name = ct::nameof<Derived>();
         return name;
      }
      constexpr static inline std::string_view get_parent_name() noexcept {
         return (has_parent) ? ct::nameof<Parent>() : "none_t";
      }
      constexpr inline auto get_reflected_name() noexcept {
         return static_cast<Derived*>(this)->reflected_names();
      }
   };

   template <typename Derived>
   struct reflectable<Derived, none_t> {
      using parent_type = none_t;
      constexpr static inline bool is_reflectable = !std::is_same_v<Derived, none_t>;
      constexpr static inline bool has_parent     = false;
      constexpr static inline std::string_view get_name() noexcept {
         constexpr auto name = ct::nameof<Derived>();
         return name;
      }
      constexpr static inline std::string_view get_parent_name() noexcept {
         return "none_t";
      }
   };

   template <typename T>
   struct meta_object {
      constexpr static inline std::string_view name = ct::nameof<T>();
   };

} // namespace versa::ct

#define VERSA_DECL(ignore, FIELD) decltype(FIELD)
#define VERSA_REF(ignore, FIELD) (void*)&FIELD
#define VERSA_FWD(ignore, FIELD) std::string_view{#FIELD}

#define VERSA_REFL(...)                                                      \
   public:                                                                   \
      constexpr static inline auto reflected_names() noexcept {              \
         return std::array{VERSA_FOREACH(VERSA_FWD, "ignore", __VA_ARGS__)}; \
      }                                                                      \
      constexpr inline auto reflected_addrs() noexcept {                     \
         return std::array{VERSA_FOREACH(VERSA_REF, "ignore", __VA_ARGS__)}; \
      }                                                                      \
      using reflected_member_types = std::tuple<VERSA_FOREACH(VERSA_DECL, "ignore", __VA_ARGS__)>;
