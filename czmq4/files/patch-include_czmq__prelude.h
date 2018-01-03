--- include/czmq_prelude.h.FCS	2017-12-31 23:43:10.000000000 +0900
+++ include/czmq_prelude.h	2018-01-03 12:47:12.802684000 +0900
@@ -683,6 +683,9 @@
 #if defined (__UTYPE_OSX) && !defined (HAVE_UUID)
 #   define HAVE_UUID 1
 #endif
+#if defined (__UTYPE_FREEBSD) && !defined (HAVE_UUID)
+#   define HAVE_UUID 1
+#endif
 #if defined (HAVE_UUID)
 #   if defined (__UTYPE_FREEBSD) || defined (__UTYPE_NETBSD) || defined(__UTYPE_OPENBSD)
 #       include <uuid.h>
