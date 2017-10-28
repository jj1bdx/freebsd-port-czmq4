# FreeBSD port of ZeroMQ CZMQ version 4

* Based on https://github.com/zeromq/czmq
* Current code: v4.0.2

## Known caveats

* Conflicts with Port `net/czmq` (CZMQ 3.0.2)

## Known issues

* The following error was caused by libmap.conf config for gcc6, fixed after removal <del>`czmq_selftest` crashes for `zbeacon` on amd64 11.1-STABLE #r324708</del>

## See also

<https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=223188>
