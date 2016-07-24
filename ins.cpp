/* CRIS IDP instructions

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996-2010 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#include "cris.hpp"

instruc_t Instructions[] = {
  { "", 0 }, // unknown
  { "--invalid--",    0 }, //--invalid--
  { "add",    CF_USE1|CF_USE2|CF_CHG2 }, //add $Rj,$Ri
  { "add",    CF_USE1|CF_USE2|CF_CHG2 }, //add $u4,$Ri
  { "add2",    CF_USE1|CF_USE2|CF_CHG2 }, //add2 $m4,$Ri
  { "addc",    CF_USE1|CF_USE2|CF_CHG2 }, //addc $Rj,$Ri
  { "addn",    CF_USE1|CF_USE2|CF_CHG2 }, //addn $Rj,$Ri
  { "addn",    CF_USE1|CF_USE2|CF_CHG2 }, //addn $u4,$Ri
  { "addn2",    CF_USE1|CF_USE2|CF_CHG2 }, //addn2 $m4,$Ri
  { "sub",    CF_USE1|CF_USE2|CF_CHG2 }, //sub $Rj,$Ri
  { "subc",    CF_USE1|CF_USE2|CF_CHG2 }, //subc $Rj,$Ri
  { "subn",    CF_USE1|CF_USE2|CF_CHG2 }, //subn $Rj,$Ri
  { "cmp",    CF_USE1|CF_USE2 }, //cmp $Rj,$Ri
  { "cmp",    CF_USE1|CF_USE2 }, //cmp $u4,$Ri
  { "cmp2",    CF_USE1|CF_USE2 }, //cmp2 $m4,$Ri
  { "and",    CF_USE1|CF_USE2|CF_CHG2 }, //and $Rj,$Ri
  { "or",    CF_USE1|CF_USE2|CF_CHG2 }, //or $Rj,$Ri
  { "eor",    CF_USE1|CF_USE2|CF_CHG2 }, //eor $Rj,$Ri
  { "and",    CF_USE1|CF_USE2 }, //and $Rj,@$Ri
  { "andh",    CF_USE1|CF_USE2 }, //andh $Rj,@$Ri
  { "andb",    CF_USE1|CF_USE2 }, //andb $Rj,@$Ri
  { "or",    CF_USE1|CF_USE2 }, //or $Rj,@$Ri
  { "orh",    CF_USE1|CF_USE2 }, //orh $Rj,@$Ri
  { "orb",    CF_USE1|CF_USE2 }, //orb $Rj,@$Ri
  { "eor",    CF_USE1|CF_USE2 }, //eor $Rj,@$Ri
  { "eorh",    CF_USE1|CF_USE2 }, //eorh $Rj,@$Ri
  { "eorb",    CF_USE1|CF_USE2 }, //eorb $Rj,@$Ri
  { "bandl",    CF_USE1|CF_USE2 }, //bandl $u4,@$Ri
  { "borl",    CF_USE1|CF_USE2 }, //borl $u4,@$Ri
  { "beorl",    CF_USE1|CF_USE2 }, //beorl $u4,@$Ri
  { "bandh",    CF_USE1|CF_USE2 }, //bandh $u4,@$Ri
  { "borh",    CF_USE1|CF_USE2 }, //borh $u4,@$Ri
  { "beorh",    CF_USE1|CF_USE2 }, //beorh $u4,@$Ri
  { "btstl",    CF_USE1|CF_USE2 }, //btstl $u4,@$Ri
  { "btsth",    CF_USE1|CF_USE2 }, //btsth $u4,@$Ri
  { "mul",    CF_USE1|CF_USE2 }, //mul $Rj,$Ri
  { "mulu",    CF_USE1|CF_USE2 }, //mulu $Rj,$Ri
  { "mulh",    CF_USE1|CF_USE2 }, //mulh $Rj,$Ri
  { "muluh",    CF_USE1|CF_USE2 }, //muluh $Rj,$Ri
  { "div0s",    CF_USE1 }, //div0s $Ri
  { "div0u",    0 }, //div0u $Ri
  { "div1",    CF_USE1 }, //div1 $Ri
  { "div2",    CF_USE1 }, //div2 $Ri
  { "div3",    0 }, //div3
  { "div4s",    0 }, //div4s
  { "lsl",    CF_USE1|CF_USE2|CF_CHG2 }, //lsl $Rj,$Ri
  { "lsl",    CF_USE1|CF_USE2|CF_CHG2 }, //lsl $u4,$Ri
  { "lsl2",    CF_USE1|CF_USE2|CF_CHG2 }, //lsl2 $u4,$Ri
  { "lsr",    CF_USE1|CF_USE2|CF_CHG2 }, //lsr $Rj,$Ri
  { "lsr",    CF_USE1|CF_USE2|CF_CHG2 }, //lsr $u4,$Ri
  { "lsr2",    CF_USE1|CF_USE2|CF_CHG2 }, //lsr2 $u4,$Ri
  { "asr",    CF_USE1|CF_USE2|CF_CHG2 }, //asr $Rj,$Ri
  { "asr",    CF_USE1|CF_USE2|CF_CHG2 }, //asr $u4,$Ri
  { "asr2",    CF_USE1|CF_USE2|CF_CHG2 }, //asr2 $u4,$Ri
  { "ldi:8",    CF_USE1|CF_CHG2 }, //ldi:8 $i8,$Ri
  { "ldi:20",    CF_USE1|CF_CHG2 }, //ldi:20 $i20,$Ri
  { "ldi:32",    CF_USE1|CF_CHG2 }, //ldi:32 $i32,$Ri
  { "ld",    CF_USE1|CF_CHG2 }, //ld @$Rj,$Ri
  { "lduh",    CF_USE1|CF_CHG2 }, //lduh @$Rj,$Ri
  { "ldub",    CF_USE1|CF_CHG2 }, //ldub @$Rj,$Ri
  { "ld",    CF_USE2|CF_CHG3 }, //ld @($R13,$Rj),$Ri
  { "lduh",    CF_USE2|CF_CHG3 }, //lduh @($R13,$Rj),$Ri
  { "ldub",    CF_USE2|CF_CHG3 }, //ldub @($R13,$Rj),$Ri
  { "ld",    CF_USE2|CF_CHG3 }, //ld @($R14,$disp10),$Ri
  { "lduh",    CF_USE2|CF_CHG3 }, //lduh @($R14,$disp9),$Ri
  { "ldub",    CF_USE2|CF_CHG3 }, //ldub @($R14,$disp8),$Ri
  { "ld",    CF_USE2|CF_CHG3 }, //ld @($R15,$udisp6),$Ri
  { "ld",    CF_CHG2 }, //ld @$R15+,$Ri
  { "ld",    CF_CHG2 }, //ld @$R15+,$Rs2
  { "ld",    0 }, //ld @$R15+,$ps
  { "st",    CF_USE1|CF_USE2 }, //st $Ri,@$Rj
  { "sth",    CF_USE1|CF_USE2 }, //sth $Ri,@$Rj
  { "stb",    CF_USE1|CF_USE2 }, //stb $Ri,@$Rj
  { "st",    CF_USE1|CF_USE3 }, //st $Ri,@($R13,$Rj)
  { "sth",    CF_USE1|CF_USE3 }, //sth $Ri,@($R13,$Rj)
  { "stb",    CF_USE1|CF_USE3 }, //stb $Ri,@($R13,$Rj)
  { "st",    CF_USE1|CF_USE3 }, //st $Ri,@($R14,$disp10)
  { "sth",    CF_USE1|CF_USE3 }, //sth $Ri,@($R14,$disp9)
  { "stb",    CF_USE1|CF_USE3 }, //stb $Ri,@($R14,$disp8)
  { "st",    CF_USE3|CF_USE1 }, //st $Ri,@($R15,$udisp6)
  { "st",    CF_USE1 }, //st $Ri,@-$R15
  { "st",    CF_USE1 }, //st $Rs2,@-$R15
  { "st",    0 }, //st $ps,@-$R15
  { "mov",    CF_USE1|CF_CHG2 }, //mov $Rj,$Ri
  { "mov",    CF_USE1|CF_CHG2 }, //mov $Rs1,$Ri
  { "mov",    CF_CHG2 }, //mov $ps,$Ri
  { "mov",    CF_USE1|CF_CHG2 }, //mov $Ri,$Rs1
  { "mov",    CF_USE1 }, //mov $Ri,$ps
  { "jmp",    CF_USE1 }, //jmp @$Ri
  { "jmp:d",    CF_USE1 }, //jmp:d @$Ri
  { "call",    CF_USE1 }, //call @$Ri
  { "call:d",    CF_USE1 }, //call:d @$Ri
  { "call",    CF_USE1 }, //call $label12
  { "call:d",    CF_USE1 }, //call:d $label12
  { "ret",    0 }, //ret
  { "ret:d",    0 }, //ret:d
  { "int",    CF_USE1 }, //int $u8
  { "inte",    0 }, //inte
  { "reti",    0 }, //reti
  { "bra:d",    CF_USE1 }, //bra:d $label9
  { "bra",    CF_USE1 }, //bra $label9
  { "bno:d",    0 }, //bno:d $label9
  { "bno",    0 }, //bno $label9
  { "beq:d",    CF_USE1 }, //beq:d $label9
  { "beq",    CF_USE1 }, //beq $label9
  { "bne:d",    CF_USE1 }, //bne:d $label9
  { "bne",    CF_USE1 }, //bne $label9
  { "bc:d",    CF_USE1 }, //bc:d $label9
  { "bc",    CF_USE1 }, //bc $label9
  { "bnc:d",    CF_USE1 }, //bnc:d $label9
  { "bnc",    CF_USE1 }, //bnc $label9
  { "bn:d",    CF_USE1 }, //bn:d $label9
  { "bn",    CF_USE1 }, //bn $label9
  { "bp:d",    CF_USE1 }, //bp:d $label9
  { "bp",    CF_USE1 }, //bp $label9
  { "bv:d",    CF_USE1 }, //bv:d $label9
  { "bv",    CF_USE1 }, //bv $label9
  { "bnv:d",    CF_USE1 }, //bnv:d $label9
  { "bnv",    CF_USE1 }, //bnv $label9
  { "blt:d",    CF_USE1 }, //blt:d $label9
  { "blt",    CF_USE1 }, //blt $label9
  { "bge:d",    CF_USE1 }, //bge:d $label9
  { "bge",    CF_USE1 }, //bge $label9
  { "ble:d",    CF_USE1 }, //ble:d $label9
  { "ble",    CF_USE1 }, //ble $label9
  { "bgt:d",    CF_USE1 }, //bgt:d $label9
  { "bgt",    CF_USE1 }, //bgt $label9
  { "bls:d",    CF_USE1 }, //bls:d $label9
  { "bls",    CF_USE1 }, //bls $label9
  { "bhi:d",    CF_USE1 }, //bhi:d $label9
  { "bhi",    CF_USE1 }, //bhi $label9
  { "dmov",    CF_USE2 }, //dmov $R13,@$dir10
  { "dmovh",    CF_USE2 }, //dmovh $R13,@$dir9
  { "dmovb",    CF_USE2 }, //dmovb $R13,@$dir8
  { "dmov",    CF_USE2 }, //dmov @$R13+,@$dir10
  { "dmovh",    CF_USE2 }, //dmovh @$R13+,@$dir9
  { "dmovb",    CF_USE2 }, //dmovb @$R13+,@$dir8
  { "dmov",    CF_USE2 }, //dmov @$R15+,@$dir10
  { "dmov",    CF_USE1 }, //dmov @$dir10,$R13
  { "dmovh",    CF_USE1 }, //dmovh @$dir9,$R13
  { "dmovb",    CF_USE1 }, //dmovb @$dir8,$R13
  { "dmov",    CF_USE1 }, //dmov @$dir10,@$R13+
  { "dmovh",    CF_USE1 }, //dmovh @$dir9,@$R13+
  { "dmovb",    CF_USE1 }, //dmovb @$dir8,@$R13+
  { "dmov",    CF_USE1 }, //dmov @$dir10,@-$R15
  { "ldres",    CF_USE1|CF_CHG1 }, //ldres @$Ri+,$u4
  { "stres",    CF_USE2|CF_CHG2 }, //stres $u4,@$Ri+
  { "copop",    0 }, //copop $u4c,$ccc,$CRj,$CRi
  { "copld",    0 }, //copld $u4c,$ccc,$Rjc,$CRi
  { "copst",    0 }, //copst $u4c,$ccc,$CRj,$Ric
  { "copsv",    0 }, //copsv $u4c,$ccc,$CRj,$Ric
  { "nop",    0 }, //nop
  { "andccr",    CF_USE1 }, //andccr $u8
  { "orccr",    CF_USE1 }, //orccr $u8
  { "stilm",    CF_USE1 }, //stilm $u8
  { "addsp",    CF_USE1 }, //addsp $s10
  { "extsb",    CF_USE1|CF_CHG1 }, //extsb $Ri
  { "extub",    CF_USE1|CF_CHG1 }, //extub $Ri
  { "extsh",    CF_USE1|CF_CHG1 }, //extsh $Ri
  { "extuh",    CF_USE1|CF_CHG1 }, //extuh $Ri
  { "ldm0",    CF_USE1 }, //ldm0 ($reglist_low_ld)
  { "ldm1",    CF_USE1 }, //ldm1 ($reglist_hi_ld)
  { "stm0",    CF_USE1 }, //stm0 ($reglist_low_st)
  { "stm1",    CF_USE1 }, //stm1 ($reglist_hi_st)
  { "enter",    CF_USE1 }, //enter $u10
  { "leave",    0 }, //leave
  { "xchb",    CF_USE1|CF_USE2|CF_CHG2 }, //xchb @$Rj,$Ri
};
