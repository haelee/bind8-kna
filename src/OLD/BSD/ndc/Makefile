# $Id: Makefile,v 1.2 1999/08/08 17:13:23 vixie Exp $

.PATH:	${.CURDIR}/../BIND/named \
	${.CURDIR}/../BIND/man

BINDIR= ${DESTSBIN}
FINSTALL?= install -c -o ${BINOWN} -g ${BINGRP}
CLEANFILES+= ndc
MAN8=	ndc.0

all:	ndc ${MAN8}

install:: maninstall
	${FINSTALL} -m 755 ndc ${DESTDIR}${BINDIR}/ndc

ndc: ndc.sh Makefile ${.CURDIR}/../Makefile.inc
	sed -e "s|%INDOT%|${INDOT}|" \
	    -e "s|%PS%|${PS}|" \
	    -e "s|%DESTSBIN%|${DESTSBIN}|" \
	    -e "s|%IOT%|${IOT}|" \
	    < ${.CURDIR}/../BIND/named/ndc.sh > ndc
	chmod +x ndc

.include <bsd.prog.mk>
.include "${.CURDIR}/../Makefile.maninc"
