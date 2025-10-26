
#ifndef _3D_EXPORT_H
#define _3D_EXPORT_H

#ifdef _3D_STATIC_DEFINE
#  define _3D_EXPORT
#  define _3D_NO_EXPORT
#else
#  ifndef _3D_EXPORT
#    ifdef qgis_3d_EXPORTS
        /* We are building this library */
#      define _3D_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define _3D_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef _3D_NO_EXPORT
#    define _3D_NO_EXPORT 
#  endif
#endif

#ifndef _3D_DEPRECATED
#  define _3D_DEPRECATED __declspec(deprecated)
#endif

#ifndef _3D_DEPRECATED_EXPORT
#  define _3D_DEPRECATED_EXPORT _3D_EXPORT _3D_DEPRECATED
#endif

#ifndef _3D_DEPRECATED_NO_EXPORT
#  define _3D_DEPRECATED_NO_EXPORT _3D_NO_EXPORT _3D_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef _3D_NO_DEPRECATED
#    define _3D_NO_DEPRECATED
#  endif
#endif

#endif /* _3D_EXPORT_H */
