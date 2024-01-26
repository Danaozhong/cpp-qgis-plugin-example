
#ifndef CORE_EXPORT_H
#define CORE_EXPORT_H

#ifdef CORE_STATIC_DEFINE
#  define CORE_EXPORT
#  define CORE_NO_EXPORT
#else
#  ifndef CORE_EXPORT
#    ifdef qgis_core_EXPORTS
        /* We are building this library */
#      define CORE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define CORE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef CORE_NO_EXPORT
#    define CORE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef CORE_DEPRECATED
#  define CORE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef CORE_DEPRECATED_EXPORT
#  define CORE_DEPRECATED_EXPORT CORE_EXPORT CORE_DEPRECATED
#endif

#ifndef CORE_DEPRECATED_NO_EXPORT
#  define CORE_DEPRECATED_NO_EXPORT CORE_NO_EXPORT CORE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef CORE_NO_DEPRECATED
#    define CORE_NO_DEPRECATED
#  endif
#endif

#endif /* CORE_EXPORT_H */
