
#ifndef GUI_EXPORT_H
#define GUI_EXPORT_H

#ifdef GUI_STATIC_DEFINE
#  define GUI_EXPORT
#  define GUI_NO_EXPORT
#else
#  ifndef GUI_EXPORT
#    ifdef qgis_gui_EXPORTS
        /* We are building this library */
#      define GUI_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define GUI_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef GUI_NO_EXPORT
#    define GUI_NO_EXPORT 
#  endif
#endif

#ifndef GUI_DEPRECATED
#  define GUI_DEPRECATED __declspec(deprecated)
#endif

#ifndef GUI_DEPRECATED_EXPORT
#  define GUI_DEPRECATED_EXPORT GUI_EXPORT GUI_DEPRECATED
#endif

#ifndef GUI_DEPRECATED_NO_EXPORT
#  define GUI_DEPRECATED_NO_EXPORT GUI_NO_EXPORT GUI_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef GUI_NO_DEPRECATED
#    define GUI_NO_DEPRECATED
#  endif
#endif

#endif /* GUI_EXPORT_H */
