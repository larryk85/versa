#pragma once

#if ASTRO_OS == ASTRO_WINDOWS_BUILD
   #include "win/handler_impl.hpp"
#else
   #include "unix/handler_impl.hpp"
#endif