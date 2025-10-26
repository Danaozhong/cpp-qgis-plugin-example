
#ifndef TEST_EXPORT_H
#define TEST_EXPORT_H

#ifdef TEST_STATIC_DEFINE
#  define TEST_EXPORT
#  define TEST_NO_EXPORT
#else
#  ifndef TEST_EXPORT
#    ifdef qgis_test_EXPORTS
        /* We are building this library */
#      define TEST_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define TEST_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef TEST_NO_EXPORT
#    define TEST_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef TEST_DEPRECATED
#  define TEST_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef TEST_DEPRECATED_EXPORT
#  define TEST_DEPRECATED_EXPORT TEST_EXPORT TEST_DEPRECATED
#endif

#ifndef TEST_DEPRECATED_NO_EXPORT
#  define TEST_DEPRECATED_NO_EXPORT TEST_NO_EXPORT TEST_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef TEST_NO_DEPRECATED
#    define TEST_NO_DEPRECATED
#  endif
#endif

#endif /* TEST_EXPORT_H */
