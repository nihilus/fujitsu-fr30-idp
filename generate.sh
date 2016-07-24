#!/bin/sh

CGEN="../cgen/cgen"
GUILE="guile"
SED="sed"

${GUILE} -l "${CGEN}/guile.scm" -s "${CGEN}/cgen-idp.scm" -s "${CGEN}" -a "${CGEN}/../cpu/fr30.cpu" -b -i fr30 -m fr30 -f with-scache -A ana.cpp -E emu.cpp -R reg.cpp -I ins.cpp -J ins.hpp -O out.cpp -H fr30.hpp
${SED} -i.sedbak -e "s/@ARCH@/FR30/g" -e "s/@arch@/fr30/g" -e "s/@prefix@/fr30/g" -e "s/@PREFIX@/FR30/g" ana.cpp
${SED} -i.sedbak -e "s/@ARCH@/FR30/g" -e "s/@arch@/fr30/g" -e "s/@prefix@/fr30/g" -e "s/@PREFIX@/FR30/g" emu.cpp
${SED} -i.sedbak -e "s/@ARCH@/FR30/g" -e "s/@arch@/fr30/g" -e "s/@prefix@/fr30/g" -e "s/@PREFIX@/FR30/g" ins.cpp
${SED} -i.sedbak -e "s/@ARCH@/FR30/g" -e "s/@arch@/fr30/g" -e "s/@prefix@/fr30/g" -e "s/@PREFIX@/FR30/g" ins.hpp
${SED} -i.sedbak -e "s/@ARCH@/FR30/g" -e "s/@arch@/fr30/g" -e "s/@prefix@/fr30/g" -e "s/@PREFIX@/FR30/g" fr30.hpp
${SED} -i.sedbak -e "s/@ARCH@/FR30/g" -e "s/@arch@/fr30/g" -e "s/@prefix@/fr30/g" -e "s/@PREFIX@/FR30/g" out.cpp
${SED} -i.sedbak -e "s/@ARCH@/FR30/g" -e "s/@arch@/fr30/g" -e "s/@prefix@/fr30/g" -e "s/@PREFIX@/FR30/g" reg.cpp
rm *.sedbak
