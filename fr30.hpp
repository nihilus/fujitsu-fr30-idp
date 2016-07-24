/* CRIS IDP hardware defines

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

#ifndef __CRIS_HPP
#define __CRIS_HPP

#include <ida.hpp>
#include <idp.hpp>
#include <ua.hpp>
#include <name.hpp>
#include <auto.hpp>
#include <bytes.hpp>
#include <frame.hpp>
#include <queue.hpp>
#include <lines.hpp>
#include <loader.hpp>
#include <offset.hpp>
#include <segment.hpp>
#include <kernwin.hpp>
#include "ins.hpp"

/* needed for cgen.h */
#define CGEN_ARCH fr30
#define CGEN_SYM(s) fr30##_cgen_##s

/* for referring to operand type in cmd */
#define cgen_optype specval_shorts.low

/* Offsets for register names by cgen hw name */

#define REGS_HW_H_PC_BASE 0
#define REGS_HW_H_GR_BASE 1
#define REGS_HW_H_CR_BASE 17
#define REGS_HW_H_DR_BASE 33
#define REGS_HW_H_PS_BASE 39
#define REGS_HW_H_R13_BASE 40
#define REGS_HW_H_R14_BASE 41
#define REGS_HW_H_R15_BASE 42
#define REGS_HW_H_NBIT_BASE 43
#define REGS_HW_H_ZBIT_BASE 44
#define REGS_HW_H_VBIT_BASE 45
#define REGS_HW_H_CBIT_BASE 46
#define REGS_HW_H_IBIT_BASE 47
#define REGS_HW_H_SBIT_BASE 48
#define REGS_HW_H_TBIT_BASE 49
#define REGS_HW_H_D0BIT_BASE 50
#define REGS_HW_H_D1BIT_BASE 51
#define REGS_HW_H_CCR_BASE 52
#define REGS_HW_H_SCR_BASE 53
#define REGS_HW_H_ILM_BASE 54
#define REGS_COUNT 55
/* Hardware attribute indices.  */

/* Enum declaration for cgen_hw attrs.  */
typedef enum cgen_hw_attr {
  CGEN_HW_VIRTUAL, CGEN_HW_CACHE_ADDR, CGEN_HW_PC, CGEN_HW_PROFILE
 , CGEN_HW_END_BOOLS, CGEN_HW_START_NBOOLS = 31, CGEN_HW_MACH, CGEN_HW_END_NBOOLS
} CGEN_HW_ATTR;

/* Number of non-boolean elements in cgen_hw_attr.  */
#define CGEN_HW_NBOOL_ATTRS (CGEN_HW_END_NBOOLS - CGEN_HW_START_NBOOLS - 1)

/* cgen_hw attribute accessor macros.  */
#define CGEN_ATTR_CGEN_HW_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_HW_MACH-CGEN_HW_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_HW_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_HW_CACHE_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_CACHE_ADDR)) != 0)
#define CGEN_ATTR_CGEN_HW_PC_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_PC)) != 0)
#define CGEN_ATTR_CGEN_HW_PROFILE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_PROFILE)) != 0)

/* Enum declaration for fr30 hardware types.  */
typedef enum cgen_hw_type {
  HW_H_MEMORY, HW_H_SINT, HW_H_UINT, HW_H_ADDR
 , HW_H_IADDR, HW_H_PC, HW_H_GR, HW_H_CR
 , HW_H_DR, HW_H_PS, HW_H_R13, HW_H_R14
 , HW_H_R15, HW_H_NBIT, HW_H_ZBIT, HW_H_VBIT
 , HW_H_CBIT, HW_H_IBIT, HW_H_SBIT, HW_H_TBIT
 , HW_H_D0BIT, HW_H_D1BIT, HW_H_CCR, HW_H_SCR
 , HW_H_ILM, HW_MAX
} CGEN_HW_TYPE;

#define MAX_HW ((int) HW_MAX)

/* Operand attribute indices.  */

/* Enum declaration for cgen_operand attrs.  */
typedef enum cgen_operand_attr {
  CGEN_OPERAND_VIRTUAL, CGEN_OPERAND_PCREL_ADDR, CGEN_OPERAND_ABS_ADDR, CGEN_OPERAND_SIGN_OPT
 , CGEN_OPERAND_SIGNED, CGEN_OPERAND_NEGATIVE, CGEN_OPERAND_RELAX, CGEN_OPERAND_SEM_ONLY
 , CGEN_OPERAND_HASH_PREFIX, CGEN_OPERAND_END_BOOLS, CGEN_OPERAND_START_NBOOLS = 31, CGEN_OPERAND_MACH
 , CGEN_OPERAND_END_NBOOLS
} CGEN_OPERAND_ATTR;

/* Number of non-boolean elements in cgen_operand_attr.  */
#define CGEN_OPERAND_NBOOL_ATTRS (CGEN_OPERAND_END_NBOOLS - CGEN_OPERAND_START_NBOOLS - 1)

/* cgen_operand attribute accessor macros.  */
#define CGEN_ATTR_CGEN_OPERAND_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_OPERAND_MACH-CGEN_OPERAND_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_OPERAND_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_PCREL_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_PCREL_ADDR)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_ABS_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_ABS_ADDR)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SIGN_OPT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SIGN_OPT)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SIGNED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SIGNED)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_NEGATIVE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_NEGATIVE)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_RELAX_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_RELAX)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SEM_ONLY_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SEM_ONLY)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_HASH_PREFIX_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_HASH_PREFIX)) != 0)

/* Enum declaration for fr30 operand types.  */
typedef enum cgen_operand_type {
  CRIS_OPERAND_PC, CRIS_OPERAND_RI, CRIS_OPERAND_RJ, CRIS_OPERAND_RIC
 , CRIS_OPERAND_RJC, CRIS_OPERAND_CRI, CRIS_OPERAND_CRJ, CRIS_OPERAND_RS1
 , CRIS_OPERAND_RS2, CRIS_OPERAND_R13, CRIS_OPERAND_R14, CRIS_OPERAND_R15
 , CRIS_OPERAND_PS, CRIS_OPERAND_U4, CRIS_OPERAND_U4C, CRIS_OPERAND_U8
 , CRIS_OPERAND_I8, CRIS_OPERAND_UDISP6, CRIS_OPERAND_DISP8, CRIS_OPERAND_DISP9
 , CRIS_OPERAND_DISP10, CRIS_OPERAND_S10, CRIS_OPERAND_U10, CRIS_OPERAND_I32
 , CRIS_OPERAND_M4, CRIS_OPERAND_I20, CRIS_OPERAND_DIR8, CRIS_OPERAND_DIR9
 , CRIS_OPERAND_DIR10, CRIS_OPERAND_LABEL9, CRIS_OPERAND_LABEL12, CRIS_OPERAND_REGLIST_LOW_LD
 , CRIS_OPERAND_REGLIST_HI_LD, CRIS_OPERAND_REGLIST_LOW_ST, CRIS_OPERAND_REGLIST_HI_ST, CRIS_OPERAND_CC
 , CRIS_OPERAND_CCC, CRIS_OPERAND_NBIT, CRIS_OPERAND_VBIT, CRIS_OPERAND_ZBIT
 , CRIS_OPERAND_CBIT, CRIS_OPERAND_IBIT, CRIS_OPERAND_SBIT, CRIS_OPERAND_TBIT
 , CRIS_OPERAND_D0BIT, CRIS_OPERAND_D1BIT, CRIS_OPERAND_CCR, CRIS_OPERAND_SCR
 , CRIS_OPERAND_ILM, CRIS_OPERAND_MAX
} CGEN_OPERAND_TYPE;

/* Number of operands types.  */
#define MAX_OPERANDS 49

/* Maximum number of operands referenced by any insn.  */
#define MAX_OPERAND_INSTANCES 6

/* cgen.h must be included after all that decls */
#include "cgen.h"

/* IDP exports */

int  idaapi ana( void );
int  idaapi emu( void );
void idaapi out( void );
bool idaapi outop( op_t &op );
void idaapi fr30_data(ea_t ea);

#endif
