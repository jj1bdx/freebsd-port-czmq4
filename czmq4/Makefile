# Created by: Kenji Rikitake
# Not registered in FreeBSD Ports library yet

PORTNAME=	czmq4
DISTVERSIONPREFIX=	v
DISTVERSION=	4.0.2
CATEGORIES=	net

USE_GITHUB=	yes
GH_ACCOUNT=	zeromq
GH_PROJECT=	czmq

MAINTAINER=	kenji@k2r.org
COMMENT=	High-level C Binding for ZeroMQ Version 4

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libzmq.so:net/libzmq4

MANPAGES_BUILD_DEPENDS=	xmlto:textproc/xmlto \
						asciidoc:textproc/asciidoc

USES=		autoreconf libtool pkgconfig
USE_LDCONFIG=	yes

USES+=		shebangfix
SHEBANG_FILES=	mkdoc model/rename_class doc/mkmans \
				doc/mkman model/chkopts.pl

CONFLICTS_BUILD=	net/czmq

GNU_CONFIGURE=	yes
# uuid_CFLAGS and uuid_LIBS required
# to avoid conflicts with misc/e2fsprogs-libuuid 
CONFIGURE_ARGS= uuid_CFLAGS="-I/usr/include ${CFLAGS}" \
		uuid_LIBS="-lc" \
		--with-libzmq=${LOCALBASE} \
		--with-pkgconfigdir=${LOCALBASE}/libdata/pkgconfig

INSTALL_TARGET=	install-strip
TEST_TARGET=	check

MAKE_ENV=	V=1
CPPFLAGS+=	-Wno-error

.include <bsd.port.mk>
