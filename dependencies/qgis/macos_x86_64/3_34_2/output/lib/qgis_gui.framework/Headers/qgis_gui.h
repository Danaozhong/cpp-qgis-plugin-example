
#ifndef GUI_EXPORT_H
#define GUI_EXPORT_H

#ifdef GUI_STATIC_DEFINE
#  define GUI_EXPORT
#  define GUI_NO_EXPORT
#else
#  ifndef GUI_EXPORT
#    ifdef qgis_gui_EXPORTS
        /* We are building this library */
#      define GUI_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define GUI_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef GUI_NO_EXPORT
#    define GUI_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef GUI_DEPRECATED
#  define GUI_DEPRECATED __attribute__ ((__deprecated__))
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
