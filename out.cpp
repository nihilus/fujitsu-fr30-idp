/* CRIS IDP output

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

#include "fr30.hpp"

  
extern void out_print_m4(op_t &x, ea_t pc);
extern void out_print_hi_register_list_ld(op_t &x, ea_t pc);
extern void out_print_hi_register_list_st(op_t &x, ea_t pc);
extern void out_print_low_register_list_ld(op_t &x, ea_t pc);
extern void out_print_low_register_list_st(op_t &x, ea_t pc);

void idaapi fr30_data(ea_t ea)
{
  gl_name = 1;
  intel_data(ea);
}

static bool cgen_outop(op_t &x, uint16 opindex, ea_t pc)
{
  switch (opindex)
  {
    case CRIS_OPERAND_CRI :
      out_register(ph.regNames[x.reg]);
      break;
    case CRIS_OPERAND_CRJ :
      out_register(ph.regNames[x.reg]);
      break;
    case CRIS_OPERAND_R13 :
      out_register(ph.regNames[x.reg]);
      break;
    case CRIS_OPERAND_R14 :
      out_register(ph.regNames[x.reg]);
      break;
    case CRIS_OPERAND_R15 :
      out_register(ph.regNames[x.reg]);
      break;
    case CRIS_OPERAND_RI :
      out_register(ph.regNames[x.reg]);
      break;
    case CRIS_OPERAND_RIC :
      out_register(ph.regNames[x.reg]);
      break;
    case CRIS_OPERAND_RJ :
      out_register(ph.regNames[x.reg]);
      break;
    case CRIS_OPERAND_RJC :
      out_register(ph.regNames[x.reg]);
      break;
    case CRIS_OPERAND_RS1 :
      out_register(ph.regNames[x.reg]);
      break;
    case CRIS_OPERAND_RS2 :
      out_register(ph.regNames[x.reg]);
      break;
    case CRIS_OPERAND_CC :
      OutValue(x, OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_CCC :
      OutValue(x, OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_DIR10 :
      OutValue(x, OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_DIR8 :
      OutValue(x, OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_DIR9 :
      OutValue(x, OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_DISP10 :
      OutValue(x, OOF_SIGNED|OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_DISP8 :
      OutValue(x, OOF_SIGNED|OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_DISP9 :
      OutValue(x, OOF_SIGNED|OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_I20 :
      OutValue(x, OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_I32 :
      OutValue(x, OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_I8 :
      OutValue(x, OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_LABEL12 :
      if (!out_name_expr(x, x.addr))
        OutValue(x, OOFW_ADDR|OOFS_NOSIGN|OOF_NUMBER);
      break;
    case CRIS_OPERAND_LABEL9 :
      if (!out_name_expr(x, x.addr))
        OutValue(x, OOFW_ADDR|OOFS_NOSIGN|OOF_NUMBER);
      break;
    case CRIS_OPERAND_M4 :
      out_print_m4(x, pc);
      break;
    case CRIS_OPERAND_PS :
      out_register(ph.regNames[x.reg]);
      break;
    case CRIS_OPERAND_REGLIST_HI_LD :
      out_print_hi_register_list_ld(x, pc);
      break;
    case CRIS_OPERAND_REGLIST_HI_ST :
      out_print_hi_register_list_st(x, pc);
      break;
    case CRIS_OPERAND_REGLIST_LOW_LD :
      out_print_low_register_list_ld(x, pc);
      break;
    case CRIS_OPERAND_REGLIST_LOW_ST :
      out_print_low_register_list_st(x, pc);
      break;
    case CRIS_OPERAND_S10 :
      OutValue(x, OOF_SIGNED|OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_U10 :
      OutValue(x, OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_U4 :
      OutValue(x, OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_U4C :
      OutValue(x, OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_U8 :
      OutValue(x, OOF_NUMBER|OOFW_IMM);
      break;
    case CRIS_OPERAND_UDISP6 :
      OutValue(x, OOF_NUMBER|OOFW_IMM);
      break;
    default: return 0;
  }
  return 1;
}

bool idaapi outop(op_t &x)
{
  return cgen_outop(x, x.cgen_optype, cmd.ea);
}

void idaapi out(void)
{
  char buf[MAXSTR];
  init_output_buffer(buf, sizeof(buf));
  switch (cmd.itype)
  {
case CRIS_INSN_ADD:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_ADDI:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_ADD2:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_ADDC:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_ADDN:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_ADDNI:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_ADDN2:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_SUB:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_SUBC:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_SUBN:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_CMP:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_CMPI:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_CMP2:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_AND:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_OR:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_EOR:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_ANDM:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_ANDH:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_ANDB:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_ORM:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_ORH:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_ORB:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_EORM:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_EORH:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_EORB:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_BANDL:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_BORL:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_BEORL:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_BANDH:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_BORH:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_BEORH:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_BTSTL:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_BTSTH:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_MUL:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_MULU:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_MULH:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_MULUH:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_DIV0S:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_DIV0U:
    OutMnem();
    cgen_outop(cmd.Op1, CRIS_OPERAND_RI, cmd.ea);
    break;
case CRIS_INSN_DIV1:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_DIV2:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_DIV3:
    OutMnem();
    break;
case CRIS_INSN_DIV4S:
    OutMnem();
    break;
case CRIS_INSN_LSL:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_LSLI:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_LSL2:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_LSR:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_LSRI:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_LSR2:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_ASR:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_ASRI:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_ASR2:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_LDI8:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_LDI20:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_LDI32:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_LD:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_LDUH:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_LDUB:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_LDR13:
    OutMnem();
    out_symbol('@');
    out_symbol('(');
    cgen_outop(cmd.Op1, CRIS_OPERAND_R13, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    out_symbol(')');
    out_symbol(',');
    OutChar(' ');
    out_one_operand(2);
    break;
case CRIS_INSN_LDR13UH:
    OutMnem();
    out_symbol('@');
    out_symbol('(');
    cgen_outop(cmd.Op1, CRIS_OPERAND_R13, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    out_symbol(')');
    out_symbol(',');
    OutChar(' ');
    out_one_operand(2);
    break;
case CRIS_INSN_LDR13UB:
    OutMnem();
    out_symbol('@');
    out_symbol('(');
    cgen_outop(cmd.Op1, CRIS_OPERAND_R13, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    out_symbol(')');
    out_symbol(',');
    OutChar(' ');
    out_one_operand(2);
    break;
case CRIS_INSN_LDR14:
    OutMnem();
    out_symbol('@');
    out_symbol('(');
    cgen_outop(cmd.Op1, CRIS_OPERAND_R14, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    out_symbol(')');
    out_symbol(',');
    OutChar(' ');
    out_one_operand(2);
    break;
case CRIS_INSN_LDR14UH:
    OutMnem();
    out_symbol('@');
    out_symbol('(');
    cgen_outop(cmd.Op1, CRIS_OPERAND_R14, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    out_symbol(')');
    out_symbol(',');
    OutChar(' ');
    out_one_operand(2);
    break;
case CRIS_INSN_LDR14UB:
    OutMnem();
    out_symbol('@');
    out_symbol('(');
    cgen_outop(cmd.Op1, CRIS_OPERAND_R14, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    out_symbol(')');
    out_symbol(',');
    OutChar(' ');
    out_one_operand(2);
    break;
case CRIS_INSN_LDR15:
    OutMnem();
    out_symbol('@');
    out_symbol('(');
    cgen_outop(cmd.Op1, CRIS_OPERAND_R15, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    out_symbol(')');
    out_symbol(',');
    OutChar(' ');
    out_one_operand(2);
    break;
case CRIS_INSN_LDR15GR:
    OutMnem();
    out_symbol('@');
    cgen_outop(cmd.Op1, CRIS_OPERAND_R15, cmd.ea);
    out_symbol('+');
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_LDR15DR:
    OutMnem();
    out_symbol('@');
    cgen_outop(cmd.Op1, CRIS_OPERAND_R15, cmd.ea);
    out_symbol('+');
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_LDR15PS:
    OutMnem();
    out_symbol('@');
    cgen_outop(cmd.Op1, CRIS_OPERAND_R15, cmd.ea);
    out_symbol('+');
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op2, CRIS_OPERAND_PS, cmd.ea);
    break;
case CRIS_INSN_ST:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_STH:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_STB:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_STR13:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_symbol('(');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R13, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(2);
    out_symbol(')');
    break;
case CRIS_INSN_STR13H:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_symbol('(');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R13, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(2);
    out_symbol(')');
    break;
case CRIS_INSN_STR13B:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_symbol('(');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R13, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(2);
    out_symbol(')');
    break;
case CRIS_INSN_STR14:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_symbol('(');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R14, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(2);
    out_symbol(')');
    break;
case CRIS_INSN_STR14H:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_symbol('(');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R14, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(2);
    out_symbol(')');
    break;
case CRIS_INSN_STR14B:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_symbol('(');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R14, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(2);
    out_symbol(')');
    break;
case CRIS_INSN_STR15:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_symbol('(');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R15, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(2);
    out_symbol(')');
    break;
case CRIS_INSN_STR15GR:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_symbol('-');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R15, cmd.ea);
    break;
case CRIS_INSN_STR15DR:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_symbol('-');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R15, cmd.ea);
    break;
case CRIS_INSN_STR15PS:
    OutMnem();
    cgen_outop(cmd.Op1, CRIS_OPERAND_PS, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_symbol('-');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R15, cmd.ea);
    break;
case CRIS_INSN_MOV:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_MOVDR:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_MOVPS:
    OutMnem();
    cgen_outop(cmd.Op1, CRIS_OPERAND_PS, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_MOV2DR:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
case CRIS_INSN_MOV2PS:
    OutMnem();
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op2, CRIS_OPERAND_PS, cmd.ea);
    break;
case CRIS_INSN_JMP:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    break;
case CRIS_INSN_JMPD:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    break;
case CRIS_INSN_CALLR:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    break;
case CRIS_INSN_CALLRD:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    break;
case CRIS_INSN_CALL:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_CALLD:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_RET:
    OutMnem();
    break;
case CRIS_INSN_RET_D:
    OutMnem();
    break;
case CRIS_INSN_INT:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_INTE:
    OutMnem();
    break;
case CRIS_INSN_RETI:
    OutMnem();
    break;
case CRIS_INSN_BRAD:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BRA:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BNOD:
    OutMnem();
    cgen_outop(cmd.Op1, CRIS_OPERAND_LABEL9, cmd.ea);
    break;
case CRIS_INSN_BNO:
    OutMnem();
    cgen_outop(cmd.Op1, CRIS_OPERAND_LABEL9, cmd.ea);
    break;
case CRIS_INSN_BEQD:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BEQ:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BNED:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BNE:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BCD:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BC:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BNCD:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BNC:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BND:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BN:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BPD:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BP:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BVD:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BV:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BNVD:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BNV:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BLTD:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BLT:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BGED:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BGE:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BLED:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BLE:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BGTD:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BGT:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BLSD:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BLS:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BHID:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_BHI:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_DMOVR13:
    OutMnem();
    cgen_outop(cmd.Op1, CRIS_OPERAND_R13, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_DMOVR13H:
    OutMnem();
    cgen_outop(cmd.Op1, CRIS_OPERAND_R13, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_DMOVR13B:
    OutMnem();
    cgen_outop(cmd.Op1, CRIS_OPERAND_R13, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_DMOVR13PI:
    OutMnem();
    out_symbol('@');
    cgen_outop(cmd.Op1, CRIS_OPERAND_R13, cmd.ea);
    out_symbol('+');
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_DMOVR13PIH:
    OutMnem();
    out_symbol('@');
    cgen_outop(cmd.Op1, CRIS_OPERAND_R13, cmd.ea);
    out_symbol('+');
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_DMOVR13PIB:
    OutMnem();
    out_symbol('@');
    cgen_outop(cmd.Op1, CRIS_OPERAND_R13, cmd.ea);
    out_symbol('+');
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_DMOVR15PI:
    OutMnem();
    out_symbol('@');
    cgen_outop(cmd.Op1, CRIS_OPERAND_R15, cmd.ea);
    out_symbol('+');
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    break;
case CRIS_INSN_DMOV2R13:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R13, cmd.ea);
    break;
case CRIS_INSN_DMOV2R13H:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R13, cmd.ea);
    break;
case CRIS_INSN_DMOV2R13B:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R13, cmd.ea);
    break;
case CRIS_INSN_DMOV2R13PI:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R13, cmd.ea);
    out_symbol('+');
    break;
case CRIS_INSN_DMOV2R13PIH:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R13, cmd.ea);
    out_symbol('+');
    break;
case CRIS_INSN_DMOV2R13PIB:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R13, cmd.ea);
    out_symbol('+');
    break;
case CRIS_INSN_DMOV2R15PD:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_symbol('-');
    cgen_outop(cmd.Op2, CRIS_OPERAND_R15, cmd.ea);
    break;
case CRIS_INSN_LDRES:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    out_symbol('+');
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op2, CRIS_OPERAND_U4, cmd.ea);
    break;
case CRIS_INSN_STRES:
    OutMnem();
    cgen_outop(cmd.Op1, CRIS_OPERAND_U4, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    out_symbol('@');
    out_one_operand(1);
    out_symbol('+');
    break;
case CRIS_INSN_COPOP:
    OutMnem();
    cgen_outop(cmd.Op1, CRIS_OPERAND_U4C, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op2, CRIS_OPERAND_CCC, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op3, CRIS_OPERAND_CRJ, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op4, CRIS_OPERAND_CRI, cmd.ea);
    break;
case CRIS_INSN_COPLD:
    OutMnem();
    cgen_outop(cmd.Op1, CRIS_OPERAND_U4C, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op2, CRIS_OPERAND_CCC, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op3, CRIS_OPERAND_RJC, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op4, CRIS_OPERAND_CRI, cmd.ea);
    break;
case CRIS_INSN_COPST:
    OutMnem();
    cgen_outop(cmd.Op1, CRIS_OPERAND_U4C, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op2, CRIS_OPERAND_CCC, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op3, CRIS_OPERAND_CRJ, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op4, CRIS_OPERAND_RIC, cmd.ea);
    break;
case CRIS_INSN_COPSV:
    OutMnem();
    cgen_outop(cmd.Op1, CRIS_OPERAND_U4C, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op2, CRIS_OPERAND_CCC, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op3, CRIS_OPERAND_CRJ, cmd.ea);
    out_symbol(',');
    OutChar(' ');
    cgen_outop(cmd.Op4, CRIS_OPERAND_RIC, cmd.ea);
    break;
case CRIS_INSN_NOP:
    OutMnem();
    break;
case CRIS_INSN_ANDCCR:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_ORCCR:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_STILM:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_ADDSP:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_EXTSB:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_EXTUB:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_EXTSH:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_EXTUH:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_LDM0:
    OutMnem();
    out_symbol('(');
    out_one_operand(0);
    out_symbol(')');
    break;
case CRIS_INSN_LDM1:
    OutMnem();
    out_symbol('(');
    out_one_operand(0);
    out_symbol(')');
    break;
case CRIS_INSN_STM0:
    OutMnem();
    out_symbol('(');
    out_one_operand(0);
    out_symbol(')');
    break;
case CRIS_INSN_STM1:
    OutMnem();
    out_symbol('(');
    out_one_operand(0);
    out_symbol(')');
    break;
case CRIS_INSN_ENTER:
    OutMnem();
    out_one_operand(0);
    break;
case CRIS_INSN_LEAVE:
    OutMnem();
    break;
case CRIS_INSN_XCHB:
    OutMnem();
    out_symbol('@');
    out_one_operand(0);
    out_symbol(',');
    OutChar(' ');
    out_one_operand(1);
    break;
    default: break;
  }
  term_output_buffer();
  gl_comm = 1;
  MakeLine(buf);
}
