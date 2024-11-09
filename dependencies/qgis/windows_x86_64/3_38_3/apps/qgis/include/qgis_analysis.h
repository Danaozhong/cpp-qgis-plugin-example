
#ifndef ANALYSIS_EXPORT_H
#define ANALYSIS_EXPORT_H

#ifdef ANALYSIS_STATIC_DEFINE
#  define ANALYSIS_EXPORT
#  define ANALYSIS_NO_EXPORT
#else
#  ifndef ANALYSIS_EXPORT
#    ifdef qgis_analysis_EXPORTS
        /* We are building this library */
#      define ANALYSIS_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define ANALYSIS_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef ANALYSIS_NO_EXPORT
#    define ANALYSIS_NO_EXPORT 
#  endif
#endif

#ifndef ANALYSIS_DEPRECATED
#  define ANALYSIS_DEPRECATED __declspec(deprecated)
#endif

#ifndef ANALYSIS_DEPRECATED_EXPORT
#  define ANALYSIS_DEPRECATED_EXPORT ANALYSIS_EXPORT ANALYSIS_DEPRECATED
#endif

#ifndef ANALYSIS_DEPRECATED_NO_EXPORT
#  define ANALYSIS_DEPRECATED_NO_EXPORT ANALYSIS_NO_EXPORT ANALYSIS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef ANALYSIS_NO_DEPRECATED
#    define ANALYSIS_NO_DEPRECATED
#  endif
#endif

#endif /* ANALYSIS_EXPORT_H */
