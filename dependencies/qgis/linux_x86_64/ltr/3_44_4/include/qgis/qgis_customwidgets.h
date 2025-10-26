
#ifndef CUSTOMWIDGETS_EXPORT_H
#define CUSTOMWIDGETS_EXPORT_H

#ifdef CUSTOMWIDGETS_STATIC_DEFINE
#  define CUSTOMWIDGETS_EXPORT
#  define CUSTOMWIDGETS_NO_EXPORT
#else
#  ifndef CUSTOMWIDGETS_EXPORT
#    ifdef qgis_customwidgets_EXPORTS
        /* We are building this library */
#      define CUSTOMWIDGETS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define CUSTOMWIDGETS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef CUSTOMWIDGETS_NO_EXPORT
#    define CUSTOMWIDGETS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef CUSTOMWIDGETS_DEPRECATED
#  define CUSTOMWIDGETS_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef CUSTOMWIDGETS_DEPRECATED_EXPORT
#  define CUSTOMWIDGETS_DEPRECATED_EXPORT CUSTOMWIDGETS_EXPORT CUSTOMWIDGETS_DEPRECATED
#endif

#ifndef CUSTOMWIDGETS_DEPRECATED_NO_EXPORT
#  define CUSTOMWIDGETS_DEPRECATED_NO_EXPORT CUSTOMWIDGETS_NO_EXPORT CUSTOMWIDGETS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef CUSTOMWIDGETS_NO_DEPRECATED
#    define CUSTOMWIDGETS_NO_DEPRECATED
#  endif
#endif

#endif /* CUSTOMWIDGETS_EXPORT_H */
