--- src/zuuid.c.FCS	2017-12-31 23:43:10.000000000 +0900
+++ src/zuuid.c	2018-01-03 12:57:25.185271000 +0900
@@ -47,7 +47,7 @@
     assert (sizeof (uuid) == ZUUID_LEN);
     UuidCreate (&uuid);
     zuuid_set (self, (byte *) &uuid);
-#elif defined (HAVE_UUID)
+#elif defined (HAVE_UUID) && !defined (__UTYPE_FREEBSD)
     uuid_t uuid;
     assert (sizeof (uuid) == ZUUID_LEN);
     uuid_generate (uuid);
