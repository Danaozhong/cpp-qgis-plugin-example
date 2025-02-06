
#ifndef NATIVE_EXPORT_H
#define NATIVE_EXPORT_H

#ifdef NATIVE_STATIC_DEFINE
#  define NATIVE_EXPORT
#  define NATIVE_NO_EXPORT
#else
#  ifndef NATIVE_EXPORT
#    ifdef qgis_native_EXPORTS
        /* We are building this library */
#      define NATIVE_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define NATIVE_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef NATIVE_NO_EXPORT
#    define NATIVE_NO_EXPORT 
#  endif
#endif

#ifndef NATIVE_DEPRECATED
#  define NATIVE_DEPRECATED __declspec(deprecated)
#endif

#ifndef NATIVE_DEPRECATED_EXPORT
#  define NATIVE_DEPRECATED_EXPORT NATIVE_EXPORT NATIVE_DEPRECATED
#endif

#ifndef NATIVE_DEPRECATED_NO_EXPORT
#  define NATIVE_DEPRECATED_NO_EXPORT NATIVE_NO_EXPORT NATIVE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef NATIVE_NO_DEPRECATED
#    define NATIVE_NO_DEPRECATED
#  endif
#endif

#endif /* NATIVE_EXPORT_H */
