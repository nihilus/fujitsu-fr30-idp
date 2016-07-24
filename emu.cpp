/* IDP emulator for fr30.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 2000-2010 Red Hat, Inc.

This file is part of the Red Hat simulators.


*/


#include "fr30.hpp"

// ********** x-invalid: --invalid--

static int
fr30_emu_x_invalid (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

  {
    return 0;
  }

  return 0;
}

// ********** add: add $Rj,$Ri

static int
fr30_emu_add (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDOFSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), 0);
ADDCFSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), 0);
ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
{
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
}
}

  return 2;
}

// ********** addi: add $u4,$Ri

static int
fr30_emu_addi (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDOFSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr, 0);
ADDCFSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr, 0);
ADDSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
{
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
}
}

  return 2;
}

// ********** add2: add2 $m4,$Ri

static int
fr30_emu_add2 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDOFSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr, 0);
ADDCFSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr, 0);
ADDSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
{
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
}
}

  return 2;
}

// ********** addc: addc $Rj,$Ri

static int
fr30_emu_addc (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = ADDCSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
ADDOFSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
ADDCFSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
tmp_tmp;
{
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
}
}

  return 2;
}

// ********** addn: addn $Rj,$Ri

static int
fr30_emu_addn (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());

  return 2;
}

// ********** addni: addn $u4,$Ri

static int
fr30_emu_addni (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ADDSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);

  return 2;
}

// ********** addn2: addn2 $m4,$Ri

static int
fr30_emu_addn2 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ADDSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);

  return 2;
}

// ********** sub: sub $Rj,$Ri

static int
fr30_emu_sub (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
SUBOFSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), 0);
SUBCFSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), 0);
SUBSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
{
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
}
}

  return 2;
}

// ********** subc: subc $Rj,$Ri

static int
fr30_emu_subc (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = SUBCSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
SUBOFSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
SUBCFSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
tmp_tmp;
{
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
}
}

  return 2;
}

// ********** subn: subn $Rj,$Ri

static int
fr30_emu_subn (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

SUBSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());

  return 2;
}

// ********** cmp: cmp $Rj,$Ri

static int
fr30_emu_cmp (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp1;
SUBOFSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), 0);
SUBCFSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), 0);
  tmp_tmp1 = SUBSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
{
EQSI (tmp_tmp1, 0);
LTSI (tmp_tmp1, 0);
}
}

  return 2;
}

// ********** cmpi: cmp $u4,$Ri

static int
fr30_emu_cmpi (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp1;
SUBOFSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr, 0);
SUBCFSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr, 0);
  tmp_tmp1 = SUBSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
{
EQSI (tmp_tmp1, 0);
LTSI (tmp_tmp1, 0);
}
}

  return 2;
}

// ********** cmp2: cmp2 $m4,$Ri

static int
fr30_emu_cmp2 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp1;
SUBOFSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr, 0);
SUBCFSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr, 0);
  tmp_tmp1 = SUBSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
{
EQSI (tmp_tmp1, 0);
LTSI (tmp_tmp1, 0);
}
}

  return 2;
}

// ********** and: and $Rj,$Ri

static int
fr30_emu_and (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ANDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
{
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
}
}

  return 2;
}

// ********** or: or $Rj,$Ri

static int
fr30_emu_or (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ORSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
{
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
}
}

  return 2;
}

// ********** eor: eor $Rj,$Ri

static int
fr30_emu_eor (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
XORSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
{
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
}
}

  return 2;
}

// ********** andm: and $Rj,@$Ri

static int
fr30_emu_andm (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = ANDSI ([&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
, [&valid](){ valid = 0; return 0; }());
{
EQSI (tmp_tmp, 0);
LTSI (tmp_tmp, 0);
}
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}

  return 2;
}

// ********** andh: andh $Rj,@$Ri

static int
fr30_emu_andh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmp;
  tmp_tmp = ANDHI ([&valid](){ HI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
, [&valid](){ valid = 0; return 0; }());
{
EQHI (tmp_tmp, 0);
LTHI (tmp_tmp, 0);
}
{ HI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}

  return 2;
}

// ********** andb: andb $Rj,@$Ri

static int
fr30_emu_andb (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmp;
  tmp_tmp = ANDQI ([&valid](){ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
, [&valid](){ valid = 0; return 0; }());
{
EQQI (tmp_tmp, 0);
LTQI (tmp_tmp, 0);
}
{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}

  return 2;
}

// ********** orm: or $Rj,@$Ri

static int
fr30_emu_orm (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = ORSI ([&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
, [&valid](){ valid = 0; return 0; }());
{
EQSI (tmp_tmp, 0);
LTSI (tmp_tmp, 0);
}
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}

  return 2;
}

// ********** orh: orh $Rj,@$Ri

static int
fr30_emu_orh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmp;
  tmp_tmp = ORHI ([&valid](){ HI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
, [&valid](){ valid = 0; return 0; }());
{
EQHI (tmp_tmp, 0);
LTHI (tmp_tmp, 0);
}
{ HI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}

  return 2;
}

// ********** orb: orb $Rj,@$Ri

static int
fr30_emu_orb (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmp;
  tmp_tmp = ORQI ([&valid](){ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
, [&valid](){ valid = 0; return 0; }());
{
EQQI (tmp_tmp, 0);
LTQI (tmp_tmp, 0);
}
{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}

  return 2;
}

// ********** eorm: eor $Rj,@$Ri

static int
fr30_emu_eorm (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = XORSI ([&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
, [&valid](){ valid = 0; return 0; }());
{
EQSI (tmp_tmp, 0);
LTSI (tmp_tmp, 0);
}
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}

  return 2;
}

// ********** eorh: eorh $Rj,@$Ri

static int
fr30_emu_eorh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmp;
  tmp_tmp = XORHI ([&valid](){ HI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
, [&valid](){ valid = 0; return 0; }());
{
EQHI (tmp_tmp, 0);
LTHI (tmp_tmp, 0);
}
{ HI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}

  return 2;
}

// ********** eorb: eorb $Rj,@$Ri

static int
fr30_emu_eorb (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmp;
  tmp_tmp = XORQI ([&valid](){ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
, [&valid](){ valid = 0; return 0; }());
{
EQQI (tmp_tmp, 0);
LTQI (tmp_tmp, 0);
}
{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}

  return 2;
}

// ********** bandl: bandl $u4,@$Ri

static int
fr30_emu_bandl (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** borl: borl $u4,@$Ri

static int
fr30_emu_borl (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** beorl: beorl $u4,@$Ri

static int
fr30_emu_beorl (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** bandh: bandh $u4,@$Ri

static int
fr30_emu_bandh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** borh: borh $u4,@$Ri

static int
fr30_emu_borh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** beorh: beorh $u4,@$Ri

static int
fr30_emu_beorh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** btstl: btstl $u4,@$Ri

static int
fr30_emu_btstl (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmp;
  tmp_tmp = ANDQI (cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr, [&valid](){ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
);
EQQI (tmp_tmp, 0);
0;
}

  return 2;
}

// ********** btsth: btsth $u4,@$Ri

static int
fr30_emu_btsth (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmp;
  tmp_tmp = ANDQI (SLLQI (cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr, 4), [&valid](){ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
);
EQQI (tmp_tmp, 0);
LTQI (tmp_tmp, 0);
}

  return 2;
}

// ********** mul: mul $Rj,$Ri

static int
fr30_emu_mul (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  DI tmp_tmp;
  tmp_tmp = MULDI (EXTSIDI ([&valid](){ valid = 0; return 0; }()), EXTSIDI ([&valid](){ valid = 0; return 0; }()));
TRUNCDISI (tmp_tmp);
TRUNCDISI (SRLDI (tmp_tmp, 32));
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
EQDI (tmp_tmp, MAKEDI (0, 0));
ORIF (GTDI (tmp_tmp, MAKEDI (0, 2147483647)), LTDI (tmp_tmp, NEGDI (MAKEDI (0, 0x80000000))));
}

  return 2;
}

// ********** mulu: mulu $Rj,$Ri

static int
fr30_emu_mulu (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  DI tmp_tmp;
  tmp_tmp = MULDI (ZEXTSIDI ([&valid](){ valid = 0; return 0; }()), ZEXTSIDI ([&valid](){ valid = 0; return 0; }()));
TRUNCDISI (tmp_tmp);
TRUNCDISI (SRLDI (tmp_tmp, 32));
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
NESI ([&valid](){ valid = 0; return 0; }(), 0);
}

  return 2;
}

// ********** mulh: mulh $Rj,$Ri

static int
fr30_emu_mulh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
MULHI (TRUNCSIHI ([&valid](){ valid = 0; return 0; }()), TRUNCSIHI ([&valid](){ valid = 0; return 0; }()));
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
GESI ([&valid](){ valid = 0; return 0; }(), 0);
}

  return 2;
}

// ********** muluh: muluh $Rj,$Ri

static int
fr30_emu_muluh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
MULSI (ANDSI ([&valid](){ valid = 0; return 0; }(), 65535), ANDSI ([&valid](){ valid = 0; return 0; }(), 65535));
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
GESI ([&valid](){ valid = 0; return 0; }(), 0);
}

  return 2;
}

// ********** div0s: div0s $Ri

static int
fr30_emu_div0s (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
XORBI ([&valid](){ valid = 0; return 0; }(), LTSI ([&valid](){ valid = 0; return 0; }(), 0));
{
0xffffffff;
0;
}
}

  return 2;
}

// ********** div0u: div0u $Ri

static int
fr30_emu_div0u (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
0;
0;
0;
}

  return 2;
}

// ********** div1: div1 $Ri

static int
fr30_emu_div1 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
SLLSI ([&valid](){ valid = 0; return 0; }(), 1);
{
ADDSI ([&valid](){ valid = 0; return 0; }(), 1);
}
SLLSI ([&valid](){ valid = 0; return 0; }(), 1);
{
{
  tmp_tmp = ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
ADDCFSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), 0);
}
{
  tmp_tmp = SUBSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
SUBCFSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), 0);
}
}
{
{
tmp_tmp;
ORSI ([&valid](){ valid = 0; return 0; }(), 1);
}
}
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
}

  return 2;
}

// ********** div2: div2 $Ri

static int
fr30_emu_div2 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
{
{
  tmp_tmp = ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
ADDCFSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), 0);
}
{
  tmp_tmp = SUBSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
SUBCFSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }(), 0);
}
}
{
{
1;
0;
}
0;
}
}

  return 2;
}

// ********** div3: div3

static int
fr30_emu_div3 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDSI ([&valid](){ valid = 0; return 0; }(), 1);
}

  return 2;
}

// ********** div4s: div4s

static int
fr30_emu_div4s (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
NEGSI ([&valid](){ valid = 0; return 0; }());
}

  return 2;
}

// ********** lsl: lsl $Rj,$Ri

static int
fr30_emu_lsl (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_shift;
  tmp_shift = ANDSI ([&valid](){ valid = 0; return 0; }(), 31);
{
{
NESI (ANDSI ([&valid](){ valid = 0; return 0; }(), SLLSI (1, ((32) - (tmp_shift)))), 0);
SLLSI ([&valid](){ valid = 0; return 0; }(), tmp_shift);
}
0;
}
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
}

  return 2;
}

// ********** lsli: lsl $u4,$Ri

static int
fr30_emu_lsli (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_shift;
  tmp_shift = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
{
NESI (ANDSI ([&valid](){ valid = 0; return 0; }(), SLLSI (1, ((32) - (tmp_shift)))), 0);
SLLSI ([&valid](){ valid = 0; return 0; }(), tmp_shift);
}
0;
}
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
}

  return 2;
}

// ********** lsl2: lsl2 $u4,$Ri

static int
fr30_emu_lsl2 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_shift;
  tmp_shift = ((cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr) + (16));
{
{
NESI (ANDSI ([&valid](){ valid = 0; return 0; }(), SLLSI (1, ((32) - (tmp_shift)))), 0);
SLLSI ([&valid](){ valid = 0; return 0; }(), tmp_shift);
}
0;
}
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
}

  return 2;
}

// ********** lsr: lsr $Rj,$Ri

static int
fr30_emu_lsr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_shift;
  tmp_shift = ANDSI ([&valid](){ valid = 0; return 0; }(), 31);
{
{
NESI (ANDSI ([&valid](){ valid = 0; return 0; }(), SLLSI (1, SUBSI (tmp_shift, 1))), 0);
SRLSI ([&valid](){ valid = 0; return 0; }(), tmp_shift);
}
0;
}
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
}

  return 2;
}

// ********** lsri: lsr $u4,$Ri

static int
fr30_emu_lsri (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_shift;
  tmp_shift = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
{
NESI (ANDSI ([&valid](){ valid = 0; return 0; }(), SLLSI (1, SUBSI (tmp_shift, 1))), 0);
SRLSI ([&valid](){ valid = 0; return 0; }(), tmp_shift);
}
0;
}
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
}

  return 2;
}

// ********** lsr2: lsr2 $u4,$Ri

static int
fr30_emu_lsr2 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_shift;
  tmp_shift = ((cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr) + (16));
{
{
NESI (ANDSI ([&valid](){ valid = 0; return 0; }(), SLLSI (1, SUBSI (tmp_shift, 1))), 0);
SRLSI ([&valid](){ valid = 0; return 0; }(), tmp_shift);
}
0;
}
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
}

  return 2;
}

// ********** asr: asr $Rj,$Ri

static int
fr30_emu_asr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_shift;
  tmp_shift = ANDSI ([&valid](){ valid = 0; return 0; }(), 31);
{
{
NESI (ANDSI ([&valid](){ valid = 0; return 0; }(), SLLSI (1, SUBSI (tmp_shift, 1))), 0);
SRASI ([&valid](){ valid = 0; return 0; }(), tmp_shift);
}
0;
}
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
}

  return 2;
}

// ********** asri: asr $u4,$Ri

static int
fr30_emu_asri (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_shift;
  tmp_shift = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
{
NESI (ANDSI ([&valid](){ valid = 0; return 0; }(), SLLSI (1, SUBSI (tmp_shift, 1))), 0);
SRASI ([&valid](){ valid = 0; return 0; }(), tmp_shift);
}
0;
}
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
}

  return 2;
}

// ********** asr2: asr2 $u4,$Ri

static int
fr30_emu_asr2 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_shift;
  tmp_shift = ((cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr) + (16));
{
{
NESI (ANDSI ([&valid](){ valid = 0; return 0; }(), SLLSI (1, SUBSI (tmp_shift, 1))), 0);
SRASI ([&valid](){ valid = 0; return 0; }(), tmp_shift);
}
0;
}
LTSI ([&valid](){ valid = 0; return 0; }(), 0);
EQSI ([&valid](){ valid = 0; return 0; }(), 0);
}

  return 2;
}

// ********** ldi8: ldi:8 $i8,$Ri

static int
fr30_emu_ldi8 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;

  return 2;
}

// ********** ldi20: ldi:20 $i20,$Ri

static int
fr30_emu_ldi20 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;

  return 4;
}

// ********** ldi32: ldi:32 $i32,$Ri

static int
fr30_emu_ldi32 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;

  return 6;
}

// ********** ld: ld @$Rj,$Ri

static int
fr30_emu_ld (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** lduh: lduh @$Rj,$Ri

static int
fr30_emu_lduh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ UHI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldub: ldub @$Rj,$Ri

static int
fr30_emu_ldub (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ UQI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr13: ld @($R13,$Rj),$Ri

static int
fr30_emu_ldr13 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ SI val = ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr13uh: lduh @($R13,$Rj),$Ri

static int
fr30_emu_ldr13uh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ UHI val = ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr13ub: ldub @($R13,$Rj),$Ri

static int
fr30_emu_ldr13ub (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ UQI val = ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr14: ld @($R14,$disp10),$Ri

static int
fr30_emu_ldr14 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ SI val = ((cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr) + ([&valid](){ valid = 0; return 0; }())); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr14uh: lduh @($R14,$disp9),$Ri

static int
fr30_emu_ldr14uh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ UHI val = ((cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr) + ([&valid](){ valid = 0; return 0; }())); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr14ub: ldub @($R14,$disp8),$Ri

static int
fr30_emu_ldr14ub (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ UQI val = ((cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr) + ([&valid](){ valid = 0; return 0; }())); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr15: ld @($R15,$udisp6),$Ri

static int
fr30_emu_ldr15 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ SI val = ((cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr) + ([&valid](){ valid = 0; return 0; }())); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr15gr: ld @$R15+,$Ri

static int
fr30_emu_ldr15gr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
{
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}

  return 2;
}

// ********** ldr15dr: ld @$R15+,$Rs2

static int
fr30_emu_ldr15dr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
tmp_tmp;
}

  return 2;
}

// ********** ldr15ps: ld @$R15+,$ps

static int
fr30_emu_ldr15ps (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}

  return 2;
}

// ********** st: st $Ri,@$Rj

static int
fr30_emu_st (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** sth: sth $Ri,@$Rj

static int
fr30_emu_sth (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ HI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** stb: stb $Ri,@$Rj

static int
fr30_emu_stb (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str13: st $Ri,@($R13,$Rj)

static int
fr30_emu_str13 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ SI val = ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str13h: sth $Ri,@($R13,$Rj)

static int
fr30_emu_str13h (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ HI val = ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str13b: stb $Ri,@($R13,$Rj)

static int
fr30_emu_str13b (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str14: st $Ri,@($R14,$disp10)

static int
fr30_emu_str14 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ SI val = ((cmd.Op3.type == o_imm ? cmd.Op3.value : cmd.Op3.addr) + ([&valid](){ valid = 0; return 0; }())); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str14h: sth $Ri,@($R14,$disp9)

static int
fr30_emu_str14h (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ HI val = ((cmd.Op3.type == o_imm ? cmd.Op3.value : cmd.Op3.addr) + ([&valid](){ valid = 0; return 0; }())); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str14b: stb $Ri,@($R14,$disp8)

static int
fr30_emu_str14b (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = ((cmd.Op3.type == o_imm ? cmd.Op3.value : cmd.Op3.addr) + ([&valid](){ valid = 0; return 0; }())); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str15: st $Ri,@($R15,$udisp6)

static int
fr30_emu_str15 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ SI val = ADDSI ([&valid](){ valid = 0; return 0; }(), cmd.Op3.type == o_imm ? cmd.Op3.value : cmd.Op3.addr); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str15gr: st $Ri,@-$R15

static int
fr30_emu_str15gr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}

  return 2;
}

// ********** str15dr: st $Rs2,@-$R15

static int
fr30_emu_str15dr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}

  return 2;
}

// ********** str15ps: st $ps,@-$R15

static int
fr30_emu_str15ps (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}

  return 2;
}

// ********** mov: mov $Rj,$Ri

static int
fr30_emu_mov (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ valid = 0; return 0; }();

  return 2;
}

// ********** movdr: mov $Rs1,$Ri

static int
fr30_emu_movdr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ valid = 0; return 0; }();

  return 2;
}

// ********** movps: mov $ps,$Ri

static int
fr30_emu_movps (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ valid = 0; return 0; }();

  return 2;
}

// ********** mov2dr: mov $Ri,$Rs1

static int
fr30_emu_mov2dr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ valid = 0; return 0; }();

  return 2;
}

// ********** mov2ps: mov $Ri,$ps

static int
fr30_emu_mov2ps (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ valid = 0; return 0; }();

  return 2;
}

// ********** jmp: jmp @$Ri

static int
fr30_emu_jmp (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }

  return 2;
}

// ********** jmpd: jmp:d @$Ri

static int
fr30_emu_jmpd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** callr: call @$Ri

static int
fr30_emu_callr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDSI (pc, 2);
{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** callrd: call:d @$Ri

static int
fr30_emu_callrd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
ADDSI (pc, 4);
{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** call: call $label12

static int
fr30_emu_call (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDSI (pc, 2);
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** calld: call:d $label12

static int
fr30_emu_calld (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
ADDSI (pc, 4);
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** ret: ret

static int
fr30_emu_ret (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }

  return 2;
}

// ********** ret:d: ret:d

static int
fr30_emu_ret_d (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** int: int $u8

static int
fr30_emu_int (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
; /*clobber*/
; /*clobber*/
; /*clobber*/
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** inte: inte

static int
fr30_emu_inte (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
; /*clobber*/
; /*clobber*/
; /*clobber*/
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** reti: reti

static int
fr30_emu_reti (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{ USI val = [&valid](){ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
[&valid](){ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
{
{ USI val = [&valid](){ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
[&valid](){ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}

  return 2;
}

// ********** brad: bra:d $label9

static int
fr30_emu_brad (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** bra: bra $label9

static int
fr30_emu_bra (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }

  return 2;
}

// ********** bnod: bno:d $label9

static int
fr30_emu_bnod (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
((void) 0); /*nop*/
}

  return 2;
}

// ********** bno: bno $label9

static int
fr30_emu_bno (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

((void) 0); /*nop*/

  return 2;
}

// ********** beqd: beq:d $label9

static int
fr30_emu_beqd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** beq: beq $label9

static int
fr30_emu_beq (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** bned: bne:d $label9

static int
fr30_emu_bned (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** bne: bne $label9

static int
fr30_emu_bne (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** bcd: bc:d $label9

static int
fr30_emu_bcd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** bc: bc $label9

static int
fr30_emu_bc (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** bncd: bnc:d $label9

static int
fr30_emu_bncd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** bnc: bnc $label9

static int
fr30_emu_bnc (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** bnd: bn:d $label9

static int
fr30_emu_bnd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** bn: bn $label9

static int
fr30_emu_bn (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** bpd: bp:d $label9

static int
fr30_emu_bpd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** bp: bp $label9

static int
fr30_emu_bp (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** bvd: bv:d $label9

static int
fr30_emu_bvd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** bv: bv $label9

static int
fr30_emu_bv (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** bnvd: bnv:d $label9

static int
fr30_emu_bnvd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** bnv: bnv $label9

static int
fr30_emu_bnv (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** bltd: blt:d $label9

static int
fr30_emu_bltd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** blt: blt $label9

static int
fr30_emu_blt (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** bged: bge:d $label9

static int
fr30_emu_bged (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** bge: bge $label9

static int
fr30_emu_bge (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** bled: ble:d $label9

static int
fr30_emu_bled (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** ble: ble $label9

static int
fr30_emu_ble (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** bgtd: bgt:d $label9

static int
fr30_emu_bgtd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** bgt: bgt $label9

static int
fr30_emu_bgt (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** blsd: bls:d $label9

static int
fr30_emu_blsd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** bls: bls $label9

static int
fr30_emu_bls (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** bhid: bhi:d $label9

static int
fr30_emu_bhid (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** bhi: bhi $label9

static int
fr30_emu_bhi (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** dmovr13: dmov $R13,@$dir10

static int
fr30_emu_dmovr13 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ SI val = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr; if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** dmovr13h: dmovh $R13,@$dir9

static int
fr30_emu_dmovr13h (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ HI val = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr; if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** dmovr13b: dmovb $R13,@$dir8

static int
fr30_emu_dmovr13b (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr; if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** dmovr13pi: dmov @$R13+,@$dir10

static int
fr30_emu_dmovr13pi (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ SI val = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr; if (valid) ua_add_dref(0, val, dr_W); }
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}

  return 2;
}

// ********** dmovr13pih: dmovh @$R13+,@$dir9

static int
fr30_emu_dmovr13pih (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ HI val = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr; if (valid) ua_add_dref(0, val, dr_W); }
ADDSI ([&valid](){ valid = 0; return 0; }(), 2);
}

  return 2;
}

// ********** dmovr13pib: dmovb @$R13+,@$dir8

static int
fr30_emu_dmovr13pib (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ QI val = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr; if (valid) ua_add_dref(0, val, dr_W); }
ADDSI ([&valid](){ valid = 0; return 0; }(), 1);
}

  return 2;
}

// ********** dmovr15pi: dmov @$R15+,@$dir10

static int
fr30_emu_dmovr15pi (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ SI val = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr; if (valid) ua_add_dref(0, val, dr_W); }
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}

  return 2;
}

// ********** dmov2r13: dmov @$dir10,$R13

static int
fr30_emu_dmov2r13 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ SI val = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** dmov2r13h: dmovh @$dir9,$R13

static int
fr30_emu_dmov2r13h (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ HI val = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** dmov2r13b: dmovb @$dir8,$R13

static int
fr30_emu_dmov2r13b (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ QI val = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** dmov2r13pi: dmov @$dir10,@$R13+

static int
fr30_emu_dmov2r13pi (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}

  return 2;
}

// ********** dmov2r13pih: dmovh @$dir9,@$R13+

static int
fr30_emu_dmov2r13pih (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ HI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
ADDSI ([&valid](){ valid = 0; return 0; }(), 2);
}

  return 2;
}

// ********** dmov2r13pib: dmovb @$dir8,@$R13+

static int
fr30_emu_dmov2r13pib (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
ADDSI ([&valid](){ valid = 0; return 0; }(), 1);
}

  return 2;
}

// ********** dmov2r15pd: dmov @$dir10,@-$R15

static int
fr30_emu_dmov2r15pd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}

  return 2;
}

// ********** ldres: ldres @$Ri+,$u4

static int
fr30_emu_ldres (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ADDSI ([&valid](){ valid = 0; return 0; }(), 4);

  return 2;
}

// ********** stres: stres $u4,@$Ri+

static int
fr30_emu_stres (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ADDSI ([&valid](){ valid = 0; return 0; }(), 4);

  return 2;
}

// ********** copop: copop $u4c,$ccc,$CRj,$CRi

static int
fr30_emu_copop (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

((void) 0); /*nop*/

  return 4;
}

// ********** copld: copld $u4c,$ccc,$Rjc,$CRi

static int
fr30_emu_copld (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

((void) 0); /*nop*/

  return 4;
}

// ********** copst: copst $u4c,$ccc,$CRj,$Ric

static int
fr30_emu_copst (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

((void) 0); /*nop*/

  return 4;
}

// ********** copsv: copsv $u4c,$ccc,$CRj,$Ric

static int
fr30_emu_copsv (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

((void) 0); /*nop*/

  return 4;
}

// ********** nop: nop

static int
fr30_emu_nop (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

((void) 0); /*nop*/

  return 2;
}

// ********** andccr: andccr $u8

static int
fr30_emu_andccr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ANDQI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);

  return 2;
}

// ********** orccr: orccr $u8

static int
fr30_emu_orccr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ORQI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);

  return 2;
}

// ********** stilm: stilm $u8

static int
fr30_emu_stilm (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

((cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr) & (31));

  return 2;
}

// ********** addsp: addsp $s10

static int
fr30_emu_addsp (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ADDSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);

  return 2;
}

// ********** extsb: extsb $Ri

static int
fr30_emu_extsb (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

EXTQISI (ANDQI ([&valid](){ valid = 0; return 0; }(), 255));

  return 2;
}

// ********** extub: extub $Ri

static int
fr30_emu_extub (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ZEXTQISI (ANDQI ([&valid](){ valid = 0; return 0; }(), 255));

  return 2;
}

// ********** extsh: extsh $Ri

static int
fr30_emu_extsh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

EXTHISI (ANDHI ([&valid](){ valid = 0; return 0; }(), 65535));

  return 2;
}

// ********** extuh: extuh $Ri

static int
fr30_emu_extuh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ZEXTHISI (ANDHI ([&valid](){ valid = 0; return 0; }(), 65535));

  return 2;
}

// ********** ldm0: ldm0 ($reglist_low_ld)

static int
fr30_emu_ldm0 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}
{
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}
{
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}
{
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}
{
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}
{
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}
{
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}
{
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}
}

  return 2;
}

// ********** ldm1: ldm1 ($reglist_hi_ld)

static int
fr30_emu_ldm1 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}
{
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}
{
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}
{
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}
{
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}
{
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}
{
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
}
}
{
[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
}
}

  return 2;
}

// ********** stm0: stm0 ($reglist_low_st)

static int
fr30_emu_stm0 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
{
{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
{
{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
{
{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
{
{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
{
{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
{
{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
{
{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
}

  return 2;
}

// ********** stm1: stm1 ($reglist_hi_st)

static int
fr30_emu_stm1 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
{
  SI tmp_save_r15;
  tmp_save_r15 = [&valid](){ valid = 0; return 0; }();
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
{
{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
{
{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
{
{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
{
{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
{
{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
{
{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
{
{
SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}
}
}

  return 2;
}

// ********** enter: enter $u10

static int
fr30_emu_enter (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = SUBSI ([&valid](){ valid = 0; return 0; }(), 4);
{ SI val = tmp_tmp; if (valid) ua_add_dref(0, val, dr_W); }
tmp_tmp;
SUBSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
}

  return 2;
}

// ********** leave: leave

static int
fr30_emu_leave (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDSI ([&valid](){ valid = 0; return 0; }(), 4);
[&valid](){ SI val = SUBSI ([&valid](){ valid = 0; return 0; }(), 4); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
}

  return 2;
}

// ********** xchb: xchb @$Rj,$Ri

static int
fr30_emu_xchb (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
[&valid](){ UQI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
{ UQI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }
}

  return 2;
}


// Emulator entry
int idaapi emu(void)
{
  int len;  switch (cmd.itype)
  {
    case FR30_INSN_X_INVALID: len = fr30_emu_x_invalid(); break;
    case FR30_INSN_ADD: len = fr30_emu_add(); break;
    case FR30_INSN_ADDI: len = fr30_emu_addi(); break;
    case FR30_INSN_ADD2: len = fr30_emu_add2(); break;
    case FR30_INSN_ADDC: len = fr30_emu_addc(); break;
    case FR30_INSN_ADDN: len = fr30_emu_addn(); break;
    case FR30_INSN_ADDNI: len = fr30_emu_addni(); break;
    case FR30_INSN_ADDN2: len = fr30_emu_addn2(); break;
    case FR30_INSN_SUB: len = fr30_emu_sub(); break;
    case FR30_INSN_SUBC: len = fr30_emu_subc(); break;
    case FR30_INSN_SUBN: len = fr30_emu_subn(); break;
    case FR30_INSN_CMP: len = fr30_emu_cmp(); break;
    case FR30_INSN_CMPI: len = fr30_emu_cmpi(); break;
    case FR30_INSN_CMP2: len = fr30_emu_cmp2(); break;
    case FR30_INSN_AND: len = fr30_emu_and(); break;
    case FR30_INSN_OR: len = fr30_emu_or(); break;
    case FR30_INSN_EOR: len = fr30_emu_eor(); break;
    case FR30_INSN_ANDM: len = fr30_emu_andm(); break;
    case FR30_INSN_ANDH: len = fr30_emu_andh(); break;
    case FR30_INSN_ANDB: len = fr30_emu_andb(); break;
    case FR30_INSN_ORM: len = fr30_emu_orm(); break;
    case FR30_INSN_ORH: len = fr30_emu_orh(); break;
    case FR30_INSN_ORB: len = fr30_emu_orb(); break;
    case FR30_INSN_EORM: len = fr30_emu_eorm(); break;
    case FR30_INSN_EORH: len = fr30_emu_eorh(); break;
    case FR30_INSN_EORB: len = fr30_emu_eorb(); break;
    case FR30_INSN_BANDL: len = fr30_emu_bandl(); break;
    case FR30_INSN_BORL: len = fr30_emu_borl(); break;
    case FR30_INSN_BEORL: len = fr30_emu_beorl(); break;
    case FR30_INSN_BANDH: len = fr30_emu_bandh(); break;
    case FR30_INSN_BORH: len = fr30_emu_borh(); break;
    case FR30_INSN_BEORH: len = fr30_emu_beorh(); break;
    case FR30_INSN_BTSTL: len = fr30_emu_btstl(); break;
    case FR30_INSN_BTSTH: len = fr30_emu_btsth(); break;
    case FR30_INSN_MUL: len = fr30_emu_mul(); break;
    case FR30_INSN_MULU: len = fr30_emu_mulu(); break;
    case FR30_INSN_MULH: len = fr30_emu_mulh(); break;
    case FR30_INSN_MULUH: len = fr30_emu_muluh(); break;
    case FR30_INSN_DIV0S: len = fr30_emu_div0s(); break;
    case FR30_INSN_DIV0U: len = fr30_emu_div0u(); break;
    case FR30_INSN_DIV1: len = fr30_emu_div1(); break;
    case FR30_INSN_DIV2: len = fr30_emu_div2(); break;
    case FR30_INSN_DIV3: len = fr30_emu_div3(); break;
    case FR30_INSN_DIV4S: len = fr30_emu_div4s(); break;
    case FR30_INSN_LSL: len = fr30_emu_lsl(); break;
    case FR30_INSN_LSLI: len = fr30_emu_lsli(); break;
    case FR30_INSN_LSL2: len = fr30_emu_lsl2(); break;
    case FR30_INSN_LSR: len = fr30_emu_lsr(); break;
    case FR30_INSN_LSRI: len = fr30_emu_lsri(); break;
    case FR30_INSN_LSR2: len = fr30_emu_lsr2(); break;
    case FR30_INSN_ASR: len = fr30_emu_asr(); break;
    case FR30_INSN_ASRI: len = fr30_emu_asri(); break;
    case FR30_INSN_ASR2: len = fr30_emu_asr2(); break;
    case FR30_INSN_LDI8: len = fr30_emu_ldi8(); break;
    case FR30_INSN_LDI20: len = fr30_emu_ldi20(); break;
    case FR30_INSN_LDI32: len = fr30_emu_ldi32(); break;
    case FR30_INSN_LD: len = fr30_emu_ld(); break;
    case FR30_INSN_LDUH: len = fr30_emu_lduh(); break;
    case FR30_INSN_LDUB: len = fr30_emu_ldub(); break;
    case FR30_INSN_LDR13: len = fr30_emu_ldr13(); break;
    case FR30_INSN_LDR13UH: len = fr30_emu_ldr13uh(); break;
    case FR30_INSN_LDR13UB: len = fr30_emu_ldr13ub(); break;
    case FR30_INSN_LDR14: len = fr30_emu_ldr14(); break;
    case FR30_INSN_LDR14UH: len = fr30_emu_ldr14uh(); break;
    case FR30_INSN_LDR14UB: len = fr30_emu_ldr14ub(); break;
    case FR30_INSN_LDR15: len = fr30_emu_ldr15(); break;
    case FR30_INSN_LDR15GR: len = fr30_emu_ldr15gr(); break;
    case FR30_INSN_LDR15DR: len = fr30_emu_ldr15dr(); break;
    case FR30_INSN_LDR15PS: len = fr30_emu_ldr15ps(); break;
    case FR30_INSN_ST: len = fr30_emu_st(); break;
    case FR30_INSN_STH: len = fr30_emu_sth(); break;
    case FR30_INSN_STB: len = fr30_emu_stb(); break;
    case FR30_INSN_STR13: len = fr30_emu_str13(); break;
    case FR30_INSN_STR13H: len = fr30_emu_str13h(); break;
    case FR30_INSN_STR13B: len = fr30_emu_str13b(); break;
    case FR30_INSN_STR14: len = fr30_emu_str14(); break;
    case FR30_INSN_STR14H: len = fr30_emu_str14h(); break;
    case FR30_INSN_STR14B: len = fr30_emu_str14b(); break;
    case FR30_INSN_STR15: len = fr30_emu_str15(); break;
    case FR30_INSN_STR15GR: len = fr30_emu_str15gr(); break;
    case FR30_INSN_STR15DR: len = fr30_emu_str15dr(); break;
    case FR30_INSN_STR15PS: len = fr30_emu_str15ps(); break;
    case FR30_INSN_MOV: len = fr30_emu_mov(); break;
    case FR30_INSN_MOVDR: len = fr30_emu_movdr(); break;
    case FR30_INSN_MOVPS: len = fr30_emu_movps(); break;
    case FR30_INSN_MOV2DR: len = fr30_emu_mov2dr(); break;
    case FR30_INSN_MOV2PS: len = fr30_emu_mov2ps(); break;
    case FR30_INSN_JMP: len = fr30_emu_jmp(); break;
    case FR30_INSN_JMPD: len = fr30_emu_jmpd(); break;
    case FR30_INSN_CALLR: len = fr30_emu_callr(); break;
    case FR30_INSN_CALLRD: len = fr30_emu_callrd(); break;
    case FR30_INSN_CALL: len = fr30_emu_call(); break;
    case FR30_INSN_CALLD: len = fr30_emu_calld(); break;
    case FR30_INSN_RET: len = fr30_emu_ret(); break;
    case FR30_INSN_RET_D: len = fr30_emu_ret_d(); break;
    case FR30_INSN_INT: len = fr30_emu_int(); break;
    case FR30_INSN_INTE: len = fr30_emu_inte(); break;
    case FR30_INSN_RETI: len = fr30_emu_reti(); break;
    case FR30_INSN_BRAD: len = fr30_emu_brad(); break;
    case FR30_INSN_BRA: len = fr30_emu_bra(); break;
    case FR30_INSN_BNOD: len = fr30_emu_bnod(); break;
    case FR30_INSN_BNO: len = fr30_emu_bno(); break;
    case FR30_INSN_BEQD: len = fr30_emu_beqd(); break;
    case FR30_INSN_BEQ: len = fr30_emu_beq(); break;
    case FR30_INSN_BNED: len = fr30_emu_bned(); break;
    case FR30_INSN_BNE: len = fr30_emu_bne(); break;
    case FR30_INSN_BCD: len = fr30_emu_bcd(); break;
    case FR30_INSN_BC: len = fr30_emu_bc(); break;
    case FR30_INSN_BNCD: len = fr30_emu_bncd(); break;
    case FR30_INSN_BNC: len = fr30_emu_bnc(); break;
    case FR30_INSN_BND: len = fr30_emu_bnd(); break;
    case FR30_INSN_BN: len = fr30_emu_bn(); break;
    case FR30_INSN_BPD: len = fr30_emu_bpd(); break;
    case FR30_INSN_BP: len = fr30_emu_bp(); break;
    case FR30_INSN_BVD: len = fr30_emu_bvd(); break;
    case FR30_INSN_BV: len = fr30_emu_bv(); break;
    case FR30_INSN_BNVD: len = fr30_emu_bnvd(); break;
    case FR30_INSN_BNV: len = fr30_emu_bnv(); break;
    case FR30_INSN_BLTD: len = fr30_emu_bltd(); break;
    case FR30_INSN_BLT: len = fr30_emu_blt(); break;
    case FR30_INSN_BGED: len = fr30_emu_bged(); break;
    case FR30_INSN_BGE: len = fr30_emu_bge(); break;
    case FR30_INSN_BLED: len = fr30_emu_bled(); break;
    case FR30_INSN_BLE: len = fr30_emu_ble(); break;
    case FR30_INSN_BGTD: len = fr30_emu_bgtd(); break;
    case FR30_INSN_BGT: len = fr30_emu_bgt(); break;
    case FR30_INSN_BLSD: len = fr30_emu_blsd(); break;
    case FR30_INSN_BLS: len = fr30_emu_bls(); break;
    case FR30_INSN_BHID: len = fr30_emu_bhid(); break;
    case FR30_INSN_BHI: len = fr30_emu_bhi(); break;
    case FR30_INSN_DMOVR13: len = fr30_emu_dmovr13(); break;
    case FR30_INSN_DMOVR13H: len = fr30_emu_dmovr13h(); break;
    case FR30_INSN_DMOVR13B: len = fr30_emu_dmovr13b(); break;
    case FR30_INSN_DMOVR13PI: len = fr30_emu_dmovr13pi(); break;
    case FR30_INSN_DMOVR13PIH: len = fr30_emu_dmovr13pih(); break;
    case FR30_INSN_DMOVR13PIB: len = fr30_emu_dmovr13pib(); break;
    case FR30_INSN_DMOVR15PI: len = fr30_emu_dmovr15pi(); break;
    case FR30_INSN_DMOV2R13: len = fr30_emu_dmov2r13(); break;
    case FR30_INSN_DMOV2R13H: len = fr30_emu_dmov2r13h(); break;
    case FR30_INSN_DMOV2R13B: len = fr30_emu_dmov2r13b(); break;
    case FR30_INSN_DMOV2R13PI: len = fr30_emu_dmov2r13pi(); break;
    case FR30_INSN_DMOV2R13PIH: len = fr30_emu_dmov2r13pih(); break;
    case FR30_INSN_DMOV2R13PIB: len = fr30_emu_dmov2r13pib(); break;
    case FR30_INSN_DMOV2R15PD: len = fr30_emu_dmov2r15pd(); break;
    case FR30_INSN_LDRES: len = fr30_emu_ldres(); break;
    case FR30_INSN_STRES: len = fr30_emu_stres(); break;
    case FR30_INSN_COPOP: len = fr30_emu_copop(); break;
    case FR30_INSN_COPLD: len = fr30_emu_copld(); break;
    case FR30_INSN_COPST: len = fr30_emu_copst(); break;
    case FR30_INSN_COPSV: len = fr30_emu_copsv(); break;
    case FR30_INSN_NOP: len = fr30_emu_nop(); break;
    case FR30_INSN_ANDCCR: len = fr30_emu_andccr(); break;
    case FR30_INSN_ORCCR: len = fr30_emu_orccr(); break;
    case FR30_INSN_STILM: len = fr30_emu_stilm(); break;
    case FR30_INSN_ADDSP: len = fr30_emu_addsp(); break;
    case FR30_INSN_EXTSB: len = fr30_emu_extsb(); break;
    case FR30_INSN_EXTUB: len = fr30_emu_extub(); break;
    case FR30_INSN_EXTSH: len = fr30_emu_extsh(); break;
    case FR30_INSN_EXTUH: len = fr30_emu_extuh(); break;
    case FR30_INSN_LDM0: len = fr30_emu_ldm0(); break;
    case FR30_INSN_LDM1: len = fr30_emu_ldm1(); break;
    case FR30_INSN_STM0: len = fr30_emu_stm0(); break;
    case FR30_INSN_STM1: len = fr30_emu_stm1(); break;
    case FR30_INSN_ENTER: len = fr30_emu_enter(); break;
    case FR30_INSN_LEAVE: len = fr30_emu_leave(); break;
    case FR30_INSN_XCHB: len = fr30_emu_xchb(); break;
    default: len = 0; break;
  }
  if (len && !InstrIsSet(cmd.itype, CF_STOP))
  {
    ua_add_cref(0, cmd.ea+len, fl_F);
  }
  return 1;
}
