#!/bin/sh

CGEN="../cgen/cgen"
GUILE="guile"
SED="sed"

${GUILE} -l "${CGEN}/guile.scm" -s "${CGEN}/cgen-idp.scm" -s "${CGEN}" -a "${CGEN}/../cpu/fr30.cpu" -b -i fr30 -m fr30 -f with-scache -A ana.cpp -E emu.cpp -R reg.cpp -I ins.cpp -J ins.hpp -O out.cpp -H fr30.hpp
${SED} -i.sedbak -e "s/@ARCH@/CRIS/g" -e "s/@arch@/fr30/g" -e "s/@prefix@/fr30/g" -e "s/@PREFIX@/CRIS/g" ana.cpp
${SED} -i.sedbak -e "s/@ARCH@/CRIS/g" -e "s/@arch@/fr30/g" -e "s/@prefix@/fr30/g" -e "s/@PREFIX@/CRIS/g" emu.cpp
${SED} -i.sedbak -e "s/@ARCH@/CRIS/g" -e "s/@arch@/fr30/g" -e "s/@prefix@/fr30/g" -e "s/@PREFIX@/CRIS/g" ins.cpp
${SED} -i.sedbak -e "s/@ARCH@/CRIS/g" -e "s/@arch@/fr30/g" -e "s/@prefix@/fr30/g" -e "s/@PREFIX@/CRIS/g" ins.hpp
${SED} -i.sedbak -e "s/@ARCH@/CRIS/g" -e "s/@arch@/fr30/g" -e "s/@prefix@/fr30/g" -e "s/@PREFIX@/CRIS/g" fr30.hpp
${SED} -i.sedbak -e "s/@ARCH@/CRIS/g" -e "s/@arch@/fr30/g" -e "s/@prefix@/fr30/g" -e "s/@PREFIX@/CRIS/g" out.cpp
${SED} -i.sedbak -e "s/@ARCH@/CRIS/g" -e "s/@arch@/fr30/g" -e "s/@prefix@/fr30/g" -e "s/@PREFIX@/CRIS/g" reg.cpp
rm *.sedbak
