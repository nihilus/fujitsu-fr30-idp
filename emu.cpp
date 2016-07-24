/* IDP emulator for cris.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 2000-2010 Red Hat, Inc.

This file is part of the Red Hat simulators.


*/


#include "cris.hpp"

// ********** x-invalid: --invalid--

static int
cris_emu_x_invalid (void)
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
cris_emu_add (void)
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
cris_emu_addi (void)
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
cris_emu_add2 (void)
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
cris_emu_addc (void)
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
cris_emu_addn (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());

  return 2;
}

// ********** addni: addn $u4,$Ri

static int
cris_emu_addni (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ADDSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);

  return 2;
}

// ********** addn2: addn2 $m4,$Ri

static int
cris_emu_addn2 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ADDSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);

  return 2;
}

// ********** sub: sub $Rj,$Ri

static int
cris_emu_sub (void)
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
cris_emu_subc (void)
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
cris_emu_subn (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

SUBSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());

  return 2;
}

// ********** cmp: cmp $Rj,$Ri

static int
cris_emu_cmp (void)
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
cris_emu_cmpi (void)
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
cris_emu_cmp2 (void)
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
cris_emu_and (void)
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
cris_emu_or (void)
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
cris_emu_eor (void)
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
cris_emu_andm (void)
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
cris_emu_andh (void)
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
cris_emu_andb (void)
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
cris_emu_orm (void)
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
cris_emu_orh (void)
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
cris_emu_orb (void)
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
cris_emu_eorm (void)
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
cris_emu_eorh (void)
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
cris_emu_eorb (void)
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
cris_emu_bandl (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** borl: borl $u4,@$Ri

static int
cris_emu_borl (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** beorl: beorl $u4,@$Ri

static int
cris_emu_beorl (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** bandh: bandh $u4,@$Ri

static int
cris_emu_bandh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** borh: borh $u4,@$Ri

static int
cris_emu_borh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** beorh: beorh $u4,@$Ri

static int
cris_emu_beorh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** btstl: btstl $u4,@$Ri

static int
cris_emu_btstl (void)
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
cris_emu_btsth (void)
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
cris_emu_mul (void)
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
cris_emu_mulu (void)
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
cris_emu_mulh (void)
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
cris_emu_muluh (void)
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
cris_emu_div0s (void)
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
cris_emu_div0u (void)
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
cris_emu_div1 (void)
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
cris_emu_div2 (void)
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
cris_emu_div3 (void)
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
cris_emu_div4s (void)
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
cris_emu_lsl (void)
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
cris_emu_lsli (void)
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
cris_emu_lsl2 (void)
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
cris_emu_lsr (void)
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
cris_emu_lsri (void)
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
cris_emu_lsr2 (void)
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
cris_emu_asr (void)
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
cris_emu_asri (void)
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
cris_emu_asr2 (void)
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
cris_emu_ldi8 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;

  return 2;
}

// ********** ldi20: ldi:20 $i20,$Ri

static int
cris_emu_ldi20 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;

  return 4;
}

// ********** ldi32: ldi:32 $i32,$Ri

static int
cris_emu_ldi32 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;

  return 6;
}

// ********** ld: ld @$Rj,$Ri

static int
cris_emu_ld (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** lduh: lduh @$Rj,$Ri

static int
cris_emu_lduh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ UHI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldub: ldub @$Rj,$Ri

static int
cris_emu_ldub (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ UQI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr13: ld @($R13,$Rj),$Ri

static int
cris_emu_ldr13 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ SI val = ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr13uh: lduh @($R13,$Rj),$Ri

static int
cris_emu_ldr13uh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ UHI val = ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr13ub: ldub @($R13,$Rj),$Ri

static int
cris_emu_ldr13ub (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ UQI val = ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr14: ld @($R14,$disp10),$Ri

static int
cris_emu_ldr14 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ SI val = ((cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr) + ([&valid](){ valid = 0; return 0; }())); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr14uh: lduh @($R14,$disp9),$Ri

static int
cris_emu_ldr14uh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ UHI val = ((cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr) + ([&valid](){ valid = 0; return 0; }())); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr14ub: ldub @($R14,$disp8),$Ri

static int
cris_emu_ldr14ub (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ UQI val = ((cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr) + ([&valid](){ valid = 0; return 0; }())); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr15: ld @($R15,$udisp6),$Ri

static int
cris_emu_ldr15 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ SI val = ((cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr) + ([&valid](){ valid = 0; return 0; }())); if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** ldr15gr: ld @$R15+,$Ri

static int
cris_emu_ldr15gr (void)
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
cris_emu_ldr15dr (void)
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
cris_emu_ldr15ps (void)
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
cris_emu_st (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ SI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** sth: sth $Ri,@$Rj

static int
cris_emu_sth (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ HI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** stb: stb $Ri,@$Rj

static int
cris_emu_stb (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str13: st $Ri,@($R13,$Rj)

static int
cris_emu_str13 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ SI val = ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str13h: sth $Ri,@($R13,$Rj)

static int
cris_emu_str13h (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ HI val = ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str13b: stb $Ri,@($R13,$Rj)

static int
cris_emu_str13b (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = ADDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str14: st $Ri,@($R14,$disp10)

static int
cris_emu_str14 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ SI val = ((cmd.Op3.type == o_imm ? cmd.Op3.value : cmd.Op3.addr) + ([&valid](){ valid = 0; return 0; }())); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str14h: sth $Ri,@($R14,$disp9)

static int
cris_emu_str14h (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ HI val = ((cmd.Op3.type == o_imm ? cmd.Op3.value : cmd.Op3.addr) + ([&valid](){ valid = 0; return 0; }())); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str14b: stb $Ri,@($R14,$disp8)

static int
cris_emu_str14b (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = ((cmd.Op3.type == o_imm ? cmd.Op3.value : cmd.Op3.addr) + ([&valid](){ valid = 0; return 0; }())); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str15: st $Ri,@($R15,$udisp6)

static int
cris_emu_str15 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ SI val = ADDSI ([&valid](){ valid = 0; return 0; }(), cmd.Op3.type == o_imm ? cmd.Op3.value : cmd.Op3.addr); if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** str15gr: st $Ri,@-$R15

static int
cris_emu_str15gr (void)
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
cris_emu_str15dr (void)
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
cris_emu_str15ps (void)
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
cris_emu_mov (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ valid = 0; return 0; }();

  return 2;
}

// ********** movdr: mov $Rs1,$Ri

static int
cris_emu_movdr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ valid = 0; return 0; }();

  return 2;
}

// ********** movps: mov $ps,$Ri

static int
cris_emu_movps (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ valid = 0; return 0; }();

  return 2;
}

// ********** mov2dr: mov $Ri,$Rs1

static int
cris_emu_mov2dr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ valid = 0; return 0; }();

  return 2;
}

// ********** mov2ps: mov $Ri,$ps

static int
cris_emu_mov2ps (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ valid = 0; return 0; }();

  return 2;
}

// ********** jmp: jmp @$Ri

static int
cris_emu_jmp (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }

  return 2;
}

// ********** jmpd: jmp:d @$Ri

static int
cris_emu_jmpd (void)
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
cris_emu_callr (void)
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
cris_emu_callrd (void)
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
cris_emu_call (void)
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
cris_emu_calld (void)
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
cris_emu_ret (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }

  return 2;
}

// ********** ret:d: ret:d

static int
cris_emu_ret_d (void)
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
cris_emu_int (void)
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
cris_emu_inte (void)
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
cris_emu_reti (void)
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
cris_emu_brad (void)
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
cris_emu_bra (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ USI val = cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }

  return 2;
}

// ********** bnod: bno:d $label9

static int
cris_emu_bnod (void)
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
cris_emu_bno (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

((void) 0); /*nop*/

  return 2;
}

// ********** beqd: beq:d $label9

static int
cris_emu_beqd (void)
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
cris_emu_beq (void)
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
cris_emu_bned (void)
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
cris_emu_bne (void)
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
cris_emu_bcd (void)
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
cris_emu_bc (void)
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
cris_emu_bncd (void)
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
cris_emu_bnc (void)
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
cris_emu_bnd (void)
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
cris_emu_bn (void)
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
cris_emu_bpd (void)
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
cris_emu_bp (void)
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
cris_emu_bvd (void)
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
cris_emu_bv (void)
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
cris_emu_bnvd (void)
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
cris_emu_bnv (void)
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
cris_emu_bltd (void)
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
cris_emu_blt (void)
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
cris_emu_bged (void)
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
cris_emu_bge (void)
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
cris_emu_bled (void)
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
cris_emu_ble (void)
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
cris_emu_bgtd (void)
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
cris_emu_bgt (void)
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
cris_emu_blsd (void)
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
cris_emu_bls (void)
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
cris_emu_bhid (void)
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
cris_emu_bhi (void)
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
cris_emu_dmovr13 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ SI val = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr; if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** dmovr13h: dmovh $R13,@$dir9

static int
cris_emu_dmovr13h (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ HI val = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr; if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** dmovr13b: dmovb $R13,@$dir8

static int
cris_emu_dmovr13b (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ QI val = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr; if (valid) ua_add_dref(0, val, dr_W); }

  return 2;
}

// ********** dmovr13pi: dmov @$R13+,@$dir10

static int
cris_emu_dmovr13pi (void)
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
cris_emu_dmovr13pih (void)
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
cris_emu_dmovr13pib (void)
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
cris_emu_dmovr15pi (void)
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
cris_emu_dmov2r13 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ SI val = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** dmov2r13h: dmovh @$dir9,$R13

static int
cris_emu_dmov2r13h (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ HI val = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** dmov2r13b: dmovb @$dir8,$R13

static int
cris_emu_dmov2r13b (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

[&valid](){ QI val = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;

  return 2;
}

// ********** dmov2r13pi: dmov @$dir10,@$R13+

static int
cris_emu_dmov2r13pi (void)
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
cris_emu_dmov2r13pih (void)
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
cris_emu_dmov2r13pib (void)
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
cris_emu_dmov2r15pd (void)
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
cris_emu_ldres (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ADDSI ([&valid](){ valid = 0; return 0; }(), 4);

  return 2;
}

// ********** stres: stres $u4,@$Ri+

static int
cris_emu_stres (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ADDSI ([&valid](){ valid = 0; return 0; }(), 4);

  return 2;
}

// ********** copop: copop $u4c,$ccc,$CRj,$CRi

static int
cris_emu_copop (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

((void) 0); /*nop*/

  return 4;
}

// ********** copld: copld $u4c,$ccc,$Rjc,$CRi

static int
cris_emu_copld (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

((void) 0); /*nop*/

  return 4;
}

// ********** copst: copst $u4c,$ccc,$CRj,$Ric

static int
cris_emu_copst (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

((void) 0); /*nop*/

  return 4;
}

// ********** copsv: copsv $u4c,$ccc,$CRj,$Ric

static int
cris_emu_copsv (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

((void) 0); /*nop*/

  return 4;
}

// ********** nop: nop

static int
cris_emu_nop (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

((void) 0); /*nop*/

  return 2;
}

// ********** andccr: andccr $u8

static int
cris_emu_andccr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ANDQI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);

  return 2;
}

// ********** orccr: orccr $u8

static int
cris_emu_orccr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ORQI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);

  return 2;
}

// ********** stilm: stilm $u8

static int
cris_emu_stilm (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

((cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr) & (31));

  return 2;
}

// ********** addsp: addsp $s10

static int
cris_emu_addsp (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ADDSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);

  return 2;
}

// ********** extsb: extsb $Ri

static int
cris_emu_extsb (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

EXTQISI (ANDQI ([&valid](){ valid = 0; return 0; }(), 255));

  return 2;
}

// ********** extub: extub $Ri

static int
cris_emu_extub (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ZEXTQISI (ANDQI ([&valid](){ valid = 0; return 0; }(), 255));

  return 2;
}

// ********** extsh: extsh $Ri

static int
cris_emu_extsh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

EXTHISI (ANDHI ([&valid](){ valid = 0; return 0; }(), 65535));

  return 2;
}

// ********** extuh: extuh $Ri

static int
cris_emu_extuh (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

ZEXTHISI (ANDHI ([&valid](){ valid = 0; return 0; }(), 65535));

  return 2;
}

// ********** ldm0: ldm0 ($reglist_low_ld)

static int
cris_emu_ldm0 (void)
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
cris_emu_ldm1 (void)
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
cris_emu_stm0 (void)
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
cris_emu_stm1 (void)
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
cris_emu_enter (void)
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
cris_emu_leave (void)
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
cris_emu_xchb (void)
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
    case CRIS_INSN_X_INVALID: len = cris_emu_x_invalid(); break;
    case CRIS_INSN_ADD: len = cris_emu_add(); break;
    case CRIS_INSN_ADDI: len = cris_emu_addi(); break;
    case CRIS_INSN_ADD2: len = cris_emu_add2(); break;
    case CRIS_INSN_ADDC: len = cris_emu_addc(); break;
    case CRIS_INSN_ADDN: len = cris_emu_addn(); break;
    case CRIS_INSN_ADDNI: len = cris_emu_addni(); break;
    case CRIS_INSN_ADDN2: len = cris_emu_addn2(); break;
    case CRIS_INSN_SUB: len = cris_emu_sub(); break;
    case CRIS_INSN_SUBC: len = cris_emu_subc(); break;
    case CRIS_INSN_SUBN: len = cris_emu_subn(); break;
    case CRIS_INSN_CMP: len = cris_emu_cmp(); break;
    case CRIS_INSN_CMPI: len = cris_emu_cmpi(); break;
    case CRIS_INSN_CMP2: len = cris_emu_cmp2(); break;
    case CRIS_INSN_AND: len = cris_emu_and(); break;
    case CRIS_INSN_OR: len = cris_emu_or(); break;
    case CRIS_INSN_EOR: len = cris_emu_eor(); break;
    case CRIS_INSN_ANDM: len = cris_emu_andm(); break;
    case CRIS_INSN_ANDH: len = cris_emu_andh(); break;
    case CRIS_INSN_ANDB: len = cris_emu_andb(); break;
    case CRIS_INSN_ORM: len = cris_emu_orm(); break;
    case CRIS_INSN_ORH: len = cris_emu_orh(); break;
    case CRIS_INSN_ORB: len = cris_emu_orb(); break;
    case CRIS_INSN_EORM: len = cris_emu_eorm(); break;
    case CRIS_INSN_EORH: len = cris_emu_eorh(); break;
    case CRIS_INSN_EORB: len = cris_emu_eorb(); break;
    case CRIS_INSN_BANDL: len = cris_emu_bandl(); break;
    case CRIS_INSN_BORL: len = cris_emu_borl(); break;
    case CRIS_INSN_BEORL: len = cris_emu_beorl(); break;
    case CRIS_INSN_BANDH: len = cris_emu_bandh(); break;
    case CRIS_INSN_BORH: len = cris_emu_borh(); break;
    case CRIS_INSN_BEORH: len = cris_emu_beorh(); break;
    case CRIS_INSN_BTSTL: len = cris_emu_btstl(); break;
    case CRIS_INSN_BTSTH: len = cris_emu_btsth(); break;
    case CRIS_INSN_MUL: len = cris_emu_mul(); break;
    case CRIS_INSN_MULU: len = cris_emu_mulu(); break;
    case CRIS_INSN_MULH: len = cris_emu_mulh(); break;
    case CRIS_INSN_MULUH: len = cris_emu_muluh(); break;
    case CRIS_INSN_DIV0S: len = cris_emu_div0s(); break;
    case CRIS_INSN_DIV0U: len = cris_emu_div0u(); break;
    case CRIS_INSN_DIV1: len = cris_emu_div1(); break;
    case CRIS_INSN_DIV2: len = cris_emu_div2(); break;
    case CRIS_INSN_DIV3: len = cris_emu_div3(); break;
    case CRIS_INSN_DIV4S: len = cris_emu_div4s(); break;
    case CRIS_INSN_LSL: len = cris_emu_lsl(); break;
    case CRIS_INSN_LSLI: len = cris_emu_lsli(); break;
    case CRIS_INSN_LSL2: len = cris_emu_lsl2(); break;
    case CRIS_INSN_LSR: len = cris_emu_lsr(); break;
    case CRIS_INSN_LSRI: len = cris_emu_lsri(); break;
    case CRIS_INSN_LSR2: len = cris_emu_lsr2(); break;
    case CRIS_INSN_ASR: len = cris_emu_asr(); break;
    case CRIS_INSN_ASRI: len = cris_emu_asri(); break;
    case CRIS_INSN_ASR2: len = cris_emu_asr2(); break;
    case CRIS_INSN_LDI8: len = cris_emu_ldi8(); break;
    case CRIS_INSN_LDI20: len = cris_emu_ldi20(); break;
    case CRIS_INSN_LDI32: len = cris_emu_ldi32(); break;
    case CRIS_INSN_LD: len = cris_emu_ld(); break;
    case CRIS_INSN_LDUH: len = cris_emu_lduh(); break;
    case CRIS_INSN_LDUB: len = cris_emu_ldub(); break;
    case CRIS_INSN_LDR13: len = cris_emu_ldr13(); break;
    case CRIS_INSN_LDR13UH: len = cris_emu_ldr13uh(); break;
    case CRIS_INSN_LDR13UB: len = cris_emu_ldr13ub(); break;
    case CRIS_INSN_LDR14: len = cris_emu_ldr14(); break;
    case CRIS_INSN_LDR14UH: len = cris_emu_ldr14uh(); break;
    case CRIS_INSN_LDR14UB: len = cris_emu_ldr14ub(); break;
    case CRIS_INSN_LDR15: len = cris_emu_ldr15(); break;
    case CRIS_INSN_LDR15GR: len = cris_emu_ldr15gr(); break;
    case CRIS_INSN_LDR15DR: len = cris_emu_ldr15dr(); break;
    case CRIS_INSN_LDR15PS: len = cris_emu_ldr15ps(); break;
    case CRIS_INSN_ST: len = cris_emu_st(); break;
    case CRIS_INSN_STH: len = cris_emu_sth(); break;
    case CRIS_INSN_STB: len = cris_emu_stb(); break;
    case CRIS_INSN_STR13: len = cris_emu_str13(); break;
    case CRIS_INSN_STR13H: len = cris_emu_str13h(); break;
    case CRIS_INSN_STR13B: len = cris_emu_str13b(); break;
    case CRIS_INSN_STR14: len = cris_emu_str14(); break;
    case CRIS_INSN_STR14H: len = cris_emu_str14h(); break;
    case CRIS_INSN_STR14B: len = cris_emu_str14b(); break;
    case CRIS_INSN_STR15: len = cris_emu_str15(); break;
    case CRIS_INSN_STR15GR: len = cris_emu_str15gr(); break;
    case CRIS_INSN_STR15DR: len = cris_emu_str15dr(); break;
    case CRIS_INSN_STR15PS: len = cris_emu_str15ps(); break;
    case CRIS_INSN_MOV: len = cris_emu_mov(); break;
    case CRIS_INSN_MOVDR: len = cris_emu_movdr(); break;
    case CRIS_INSN_MOVPS: len = cris_emu_movps(); break;
    case CRIS_INSN_MOV2DR: len = cris_emu_mov2dr(); break;
    case CRIS_INSN_MOV2PS: len = cris_emu_mov2ps(); break;
    case CRIS_INSN_JMP: len = cris_emu_jmp(); break;
    case CRIS_INSN_JMPD: len = cris_emu_jmpd(); break;
    case CRIS_INSN_CALLR: len = cris_emu_callr(); break;
    case CRIS_INSN_CALLRD: len = cris_emu_callrd(); break;
    case CRIS_INSN_CALL: len = cris_emu_call(); break;
    case CRIS_INSN_CALLD: len = cris_emu_calld(); break;
    case CRIS_INSN_RET: len = cris_emu_ret(); break;
    case CRIS_INSN_RET_D: len = cris_emu_ret_d(); break;
    case CRIS_INSN_INT: len = cris_emu_int(); break;
    case CRIS_INSN_INTE: len = cris_emu_inte(); break;
    case CRIS_INSN_RETI: len = cris_emu_reti(); break;
    case CRIS_INSN_BRAD: len = cris_emu_brad(); break;
    case CRIS_INSN_BRA: len = cris_emu_bra(); break;
    case CRIS_INSN_BNOD: len = cris_emu_bnod(); break;
    case CRIS_INSN_BNO: len = cris_emu_bno(); break;
    case CRIS_INSN_BEQD: len = cris_emu_beqd(); break;
    case CRIS_INSN_BEQ: len = cris_emu_beq(); break;
    case CRIS_INSN_BNED: len = cris_emu_bned(); break;
    case CRIS_INSN_BNE: len = cris_emu_bne(); break;
    case CRIS_INSN_BCD: len = cris_emu_bcd(); break;
    case CRIS_INSN_BC: len = cris_emu_bc(); break;
    case CRIS_INSN_BNCD: len = cris_emu_bncd(); break;
    case CRIS_INSN_BNC: len = cris_emu_bnc(); break;
    case CRIS_INSN_BND: len = cris_emu_bnd(); break;
    case CRIS_INSN_BN: len = cris_emu_bn(); break;
    case CRIS_INSN_BPD: len = cris_emu_bpd(); break;
    case CRIS_INSN_BP: len = cris_emu_bp(); break;
    case CRIS_INSN_BVD: len = cris_emu_bvd(); break;
    case CRIS_INSN_BV: len = cris_emu_bv(); break;
    case CRIS_INSN_BNVD: len = cris_emu_bnvd(); break;
    case CRIS_INSN_BNV: len = cris_emu_bnv(); break;
    case CRIS_INSN_BLTD: len = cris_emu_bltd(); break;
    case CRIS_INSN_BLT: len = cris_emu_blt(); break;
    case CRIS_INSN_BGED: len = cris_emu_bged(); break;
    case CRIS_INSN_BGE: len = cris_emu_bge(); break;
    case CRIS_INSN_BLED: len = cris_emu_bled(); break;
    case CRIS_INSN_BLE: len = cris_emu_ble(); break;
    case CRIS_INSN_BGTD: len = cris_emu_bgtd(); break;
    case CRIS_INSN_BGT: len = cris_emu_bgt(); break;
    case CRIS_INSN_BLSD: len = cris_emu_blsd(); break;
    case CRIS_INSN_BLS: len = cris_emu_bls(); break;
    case CRIS_INSN_BHID: len = cris_emu_bhid(); break;
    case CRIS_INSN_BHI: len = cris_emu_bhi(); break;
    case CRIS_INSN_DMOVR13: len = cris_emu_dmovr13(); break;
    case CRIS_INSN_DMOVR13H: len = cris_emu_dmovr13h(); break;
    case CRIS_INSN_DMOVR13B: len = cris_emu_dmovr13b(); break;
    case CRIS_INSN_DMOVR13PI: len = cris_emu_dmovr13pi(); break;
    case CRIS_INSN_DMOVR13PIH: len = cris_emu_dmovr13pih(); break;
    case CRIS_INSN_DMOVR13PIB: len = cris_emu_dmovr13pib(); break;
    case CRIS_INSN_DMOVR15PI: len = cris_emu_dmovr15pi(); break;
    case CRIS_INSN_DMOV2R13: len = cris_emu_dmov2r13(); break;
    case CRIS_INSN_DMOV2R13H: len = cris_emu_dmov2r13h(); break;
    case CRIS_INSN_DMOV2R13B: len = cris_emu_dmov2r13b(); break;
    case CRIS_INSN_DMOV2R13PI: len = cris_emu_dmov2r13pi(); break;
    case CRIS_INSN_DMOV2R13PIH: len = cris_emu_dmov2r13pih(); break;
    case CRIS_INSN_DMOV2R13PIB: len = cris_emu_dmov2r13pib(); break;
    case CRIS_INSN_DMOV2R15PD: len = cris_emu_dmov2r15pd(); break;
    case CRIS_INSN_LDRES: len = cris_emu_ldres(); break;
    case CRIS_INSN_STRES: len = cris_emu_stres(); break;
    case CRIS_INSN_COPOP: len = cris_emu_copop(); break;
    case CRIS_INSN_COPLD: len = cris_emu_copld(); break;
    case CRIS_INSN_COPST: len = cris_emu_copst(); break;
    case CRIS_INSN_COPSV: len = cris_emu_copsv(); break;
    case CRIS_INSN_NOP: len = cris_emu_nop(); break;
    case CRIS_INSN_ANDCCR: len = cris_emu_andccr(); break;
    case CRIS_INSN_ORCCR: len = cris_emu_orccr(); break;
    case CRIS_INSN_STILM: len = cris_emu_stilm(); break;
    case CRIS_INSN_ADDSP: len = cris_emu_addsp(); break;
    case CRIS_INSN_EXTSB: len = cris_emu_extsb(); break;
    case CRIS_INSN_EXTUB: len = cris_emu_extub(); break;
    case CRIS_INSN_EXTSH: len = cris_emu_extsh(); break;
    case CRIS_INSN_EXTUH: len = cris_emu_extuh(); break;
    case CRIS_INSN_LDM0: len = cris_emu_ldm0(); break;
    case CRIS_INSN_LDM1: len = cris_emu_ldm1(); break;
    case CRIS_INSN_STM0: len = cris_emu_stm0(); break;
    case CRIS_INSN_STM1: len = cris_emu_stm1(); break;
    case CRIS_INSN_ENTER: len = cris_emu_enter(); break;
    case CRIS_INSN_LEAVE: len = cris_emu_leave(); break;
    case CRIS_INSN_XCHB: len = cris_emu_xchb(); break;
    default: len = 0; break;
  }
  if (len && !InstrIsSet(cmd.itype, CF_STOP))
  {
    ua_add_cref(0, cmd.ea+len, fl_F);
  }
  return 1;
}
