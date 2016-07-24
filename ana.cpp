/* FR30 IDP analysis

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

 /* The size of an "int" needed to hold an instruction word.
   This is usually 32 bits, but some architectures needs 64 bits.  */
typedef CGEN_INSN_INT CGEN_INSN_WORD;
  
/* Split the instruction into chunks. stolen from binutils */

static inline uint64_t get_bits (const void *p, int bits, int big_p)
{
  const unsigned char *addr = (const unsigned char *) p;
  uint64_t data;
  int i;
  int bytes;

  if (bits % 8 != 0)
    abort ();

  data = 0;
  bytes = bits / 8;
  for (i = 0; i < bytes; i++)
    {
      int addr_index = big_p ? i : bytes - i - 1;

      data = (data << 8) | addr[addr_index];
    }

  return data;
}

static inline CGEN_INSN_WORD get_insn_value(unsigned char *buf, int length)
{
  int big_p = 1;
  int insn_chunk_bitsize = 0;
  CGEN_INSN_WORD value = 0;

  if (insn_chunk_bitsize != 0 && insn_chunk_bitsize < length)
    {
      /* We need to divide up the incoming value into insn_chunk_bitsize-length
   segments, and endian-convert them, one at a time. */
      int i;

      /* Enforce divisibility. */ 
      if ((length % insn_chunk_bitsize) != 0)
  abort ();

      for (i = 0; i < length; i += insn_chunk_bitsize) /* NB: i == bits */
  {
    int bit_index;
    uint64_t this_value;

    bit_index = i; /* NB: not dependent on endianness; opposite of cgen_put_insn_value! */
    this_value = get_bits (& buf[bit_index / 8], insn_chunk_bitsize, big_p);
    value = (value << insn_chunk_bitsize) | this_value;
  }
    }
  else
    {
      value = get_bits (buf, length, big_p);
    }

  return value;
}

/* Analyze the current instruction.  */

int idaapi ana( void )
{
  /* temporary buffer */
  unsigned char buffer[2];

  /* Result of decoder.  */
  FR30_INSN_TYPE itype;

  CGEN_INSN_WORD insn;
  CGEN_INSN_WORD base_insn;
  CGEN_INSN_WORD entire_insn;

  ea_t pc;
  get_data_value(cmd.ea, (uval_t *)buffer, 2);
  insn = get_insn_value(buffer, 16);
  entire_insn = get_insn_value(buffer, 16);
  pc = cmd.ea;
  {

    {
      unsigned int val = (((insn >> 8) & (255 << 0)));
      switch (val)
      {
      case 0 : itype = FR30_INSN_LDR13; goto extract_sfmt_ldr13;
      case 1 : itype = FR30_INSN_LDR13UH; goto extract_sfmt_ldr13uh;
      case 2 : itype = FR30_INSN_LDR13UB; goto extract_sfmt_ldr13ub;
      case 3 : itype = FR30_INSN_LDR15; goto extract_sfmt_ldr15;
      case 4 : itype = FR30_INSN_LD; goto extract_sfmt_ld;
      case 5 : itype = FR30_INSN_LDUH; goto extract_sfmt_lduh;
      case 6 : itype = FR30_INSN_LDUB; goto extract_sfmt_ldub;
      case 7 :
        {
          unsigned int val = (((insn >> 6) & (1 << 1)) | ((insn >> 4) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((base_insn & 0xfff0) == 0x700)
              { itype = FR30_INSN_LDR15GR; goto extract_sfmt_ldr15gr; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((base_insn & 0xfff0) == 0x710)
              { itype = FR30_INSN_MOV2PS; goto extract_sfmt_mov2ps; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((base_insn & 0xfff0) == 0x780)
              { itype = FR30_INSN_LDR15DR; goto extract_sfmt_ldr15dr; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((base_insn & 0xffff) == 0x790)
              { itype = FR30_INSN_LDR15PS; goto extract_sfmt_ldr15ps; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 8 : itype = FR30_INSN_DMOV2R13; goto extract_sfmt_dmov2r13;
      case 9 : itype = FR30_INSN_DMOV2R13H; goto extract_sfmt_dmov2r13h;
      case 10 : itype = FR30_INSN_DMOV2R13B; goto extract_sfmt_dmov2r13b;
      case 11 : itype = FR30_INSN_DMOV2R15PD; goto extract_sfmt_dmov2r15pd;
      case 12 : itype = FR30_INSN_DMOV2R13PI; goto extract_sfmt_dmov2r13pi;
      case 13 : itype = FR30_INSN_DMOV2R13PIH; goto extract_sfmt_dmov2r13pih;
      case 14 : itype = FR30_INSN_DMOV2R13PIB; goto extract_sfmt_dmov2r13pib;
      case 15 : itype = FR30_INSN_ENTER; goto extract_sfmt_enter;
      case 16 : itype = FR30_INSN_STR13; goto extract_sfmt_str13;
      case 17 : itype = FR30_INSN_STR13H; goto extract_sfmt_str13h;
      case 18 : itype = FR30_INSN_STR13B; goto extract_sfmt_str13b;
      case 19 : itype = FR30_INSN_STR15; goto extract_sfmt_str15;
      case 20 : itype = FR30_INSN_ST; goto extract_sfmt_st;
      case 21 : itype = FR30_INSN_STH; goto extract_sfmt_sth;
      case 22 : itype = FR30_INSN_STB; goto extract_sfmt_stb;
      case 23 :
        {
          unsigned int val = (((insn >> 6) & (1 << 1)) | ((insn >> 4) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((base_insn & 0xfff0) == 0x1700)
              { itype = FR30_INSN_STR15GR; goto extract_sfmt_str15gr; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((base_insn & 0xfff0) == 0x1710)
              { itype = FR30_INSN_MOVPS; goto extract_sfmt_movps; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((base_insn & 0xfff0) == 0x1780)
              { itype = FR30_INSN_STR15DR; goto extract_sfmt_str15dr; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((base_insn & 0xffff) == 0x1790)
              { itype = FR30_INSN_STR15PS; goto extract_sfmt_str15ps; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 24 : itype = FR30_INSN_DMOVR13; goto extract_sfmt_dmovr13;
      case 25 : itype = FR30_INSN_DMOVR13H; goto extract_sfmt_dmovr13h;
      case 26 : itype = FR30_INSN_DMOVR13B; goto extract_sfmt_dmovr13b;
      case 27 : itype = FR30_INSN_DMOVR15PI; goto extract_sfmt_dmovr15pi;
      case 28 : itype = FR30_INSN_DMOVR13PI; goto extract_sfmt_dmovr13pi;
      case 29 : itype = FR30_INSN_DMOVR13PIH; goto extract_sfmt_dmovr13pih;
      case 30 : itype = FR30_INSN_DMOVR13PIB; goto extract_sfmt_dmovr13pib;
      case 31 : itype = FR30_INSN_INT; goto extract_sfmt_int;
      case 32 : /* fall through */
      case 33 : /* fall through */
      case 34 : /* fall through */
      case 35 : /* fall through */
      case 36 : /* fall through */
      case 37 : /* fall through */
      case 38 : /* fall through */
      case 39 : /* fall through */
      case 40 : /* fall through */
      case 41 : /* fall through */
      case 42 : /* fall through */
      case 43 : /* fall through */
      case 44 : /* fall through */
      case 45 : /* fall through */
      case 46 : /* fall through */
      case 47 : itype = FR30_INSN_LDR14; goto extract_sfmt_ldr14;
      case 48 : /* fall through */
      case 49 : /* fall through */
      case 50 : /* fall through */
      case 51 : /* fall through */
      case 52 : /* fall through */
      case 53 : /* fall through */
      case 54 : /* fall through */
      case 55 : /* fall through */
      case 56 : /* fall through */
      case 57 : /* fall through */
      case 58 : /* fall through */
      case 59 : /* fall through */
      case 60 : /* fall through */
      case 61 : /* fall through */
      case 62 : /* fall through */
      case 63 : itype = FR30_INSN_STR14; goto extract_sfmt_str14;
      case 64 : /* fall through */
      case 65 : /* fall through */
      case 66 : /* fall through */
      case 67 : /* fall through */
      case 68 : /* fall through */
      case 69 : /* fall through */
      case 70 : /* fall through */
      case 71 : /* fall through */
      case 72 : /* fall through */
      case 73 : /* fall through */
      case 74 : /* fall through */
      case 75 : /* fall through */
      case 76 : /* fall through */
      case 77 : /* fall through */
      case 78 : /* fall through */
      case 79 : itype = FR30_INSN_LDR14UH; goto extract_sfmt_ldr14uh;
      case 80 : /* fall through */
      case 81 : /* fall through */
      case 82 : /* fall through */
      case 83 : /* fall through */
      case 84 : /* fall through */
      case 85 : /* fall through */
      case 86 : /* fall through */
      case 87 : /* fall through */
      case 88 : /* fall through */
      case 89 : /* fall through */
      case 90 : /* fall through */
      case 91 : /* fall through */
      case 92 : /* fall through */
      case 93 : /* fall through */
      case 94 : /* fall through */
      case 95 : itype = FR30_INSN_STR14H; goto extract_sfmt_str14h;
      case 96 : /* fall through */
      case 97 : /* fall through */
      case 98 : /* fall through */
      case 99 : /* fall through */
      case 100 : /* fall through */
      case 101 : /* fall through */
      case 102 : /* fall through */
      case 103 : /* fall through */
      case 104 : /* fall through */
      case 105 : /* fall through */
      case 106 : /* fall through */
      case 107 : /* fall through */
      case 108 : /* fall through */
      case 109 : /* fall through */
      case 110 : /* fall through */
      case 111 : itype = FR30_INSN_LDR14UB; goto extract_sfmt_ldr14ub;
      case 112 : /* fall through */
      case 113 : /* fall through */
      case 114 : /* fall through */
      case 115 : /* fall through */
      case 116 : /* fall through */
      case 117 : /* fall through */
      case 118 : /* fall through */
      case 119 : /* fall through */
      case 120 : /* fall through */
      case 121 : /* fall through */
      case 122 : /* fall through */
      case 123 : /* fall through */
      case 124 : /* fall through */
      case 125 : /* fall through */
      case 126 : /* fall through */
      case 127 : itype = FR30_INSN_STR14B; goto extract_sfmt_str14b;
      case 128 : itype = FR30_INSN_BANDL; goto extract_sfmt_bandl;
      case 129 : itype = FR30_INSN_BANDH; goto extract_sfmt_bandl;
      case 130 : itype = FR30_INSN_AND; goto extract_sfmt_and;
      case 131 : itype = FR30_INSN_ANDCCR; goto extract_sfmt_andccr;
      case 132 : itype = FR30_INSN_ANDM; goto extract_sfmt_andm;
      case 133 : itype = FR30_INSN_ANDH; goto extract_sfmt_andh;
      case 134 : itype = FR30_INSN_ANDB; goto extract_sfmt_andb;
      case 135 : itype = FR30_INSN_STILM; goto extract_sfmt_stilm;
      case 136 : itype = FR30_INSN_BTSTL; goto extract_sfmt_btstl;
      case 137 : itype = FR30_INSN_BTSTH; goto extract_sfmt_btstl;
      case 138 : itype = FR30_INSN_XCHB; goto extract_sfmt_xchb;
      case 139 : itype = FR30_INSN_MOV; goto extract_sfmt_mov;
      case 140 : itype = FR30_INSN_LDM0; goto extract_sfmt_ldm0;
      case 141 : itype = FR30_INSN_LDM1; goto extract_sfmt_ldm1;
      case 142 : itype = FR30_INSN_STM0; goto extract_sfmt_stm0;
      case 143 : itype = FR30_INSN_STM1; goto extract_sfmt_stm1;
      case 144 : itype = FR30_INSN_BORL; goto extract_sfmt_bandl;
      case 145 : itype = FR30_INSN_BORH; goto extract_sfmt_bandl;
      case 146 : itype = FR30_INSN_OR; goto extract_sfmt_and;
      case 147 : itype = FR30_INSN_ORCCR; goto extract_sfmt_andccr;
      case 148 : itype = FR30_INSN_ORM; goto extract_sfmt_andm;
      case 149 : itype = FR30_INSN_ORH; goto extract_sfmt_andh;
      case 150 : itype = FR30_INSN_ORB; goto extract_sfmt_andb;
      case 151 :
        {
          unsigned int val = (((insn >> 4) & (15 << 0)));
          switch (val)
          {
          case 0 : itype = FR30_INSN_JMP; goto extract_sfmt_jmp;
          case 1 : itype = FR30_INSN_CALLR; goto extract_sfmt_callr;
          case 2 :
            if ((base_insn & 0xffff) == 0x9720)
              { itype = FR30_INSN_RET; goto extract_sfmt_ret; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((base_insn & 0xffff) == 0x9730)
              { itype = FR30_INSN_RETI; goto extract_sfmt_reti; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 : itype = FR30_INSN_DIV0S; goto extract_sfmt_div0s;
          case 5 : itype = FR30_INSN_DIV0U; goto extract_sfmt_div0u;
          case 6 : itype = FR30_INSN_DIV1; goto extract_sfmt_div1;
          case 7 : itype = FR30_INSN_DIV2; goto extract_sfmt_div2;
          case 8 : itype = FR30_INSN_EXTSB; goto extract_sfmt_extsb;
          case 9 : itype = FR30_INSN_EXTUB; goto extract_sfmt_extsb;
          case 10 : itype = FR30_INSN_EXTSH; goto extract_sfmt_extsb;
          case 11 : itype = FR30_INSN_EXTUH; goto extract_sfmt_extsb;
          default : itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 152 : itype = FR30_INSN_BEORL; goto extract_sfmt_bandl;
      case 153 : itype = FR30_INSN_BEORH; goto extract_sfmt_bandl;
      case 154 : itype = FR30_INSN_EOR; goto extract_sfmt_and;
      case 156 : itype = FR30_INSN_EORM; goto extract_sfmt_andm;
      case 157 : itype = FR30_INSN_EORH; goto extract_sfmt_andh;
      case 158 : itype = FR30_INSN_EORB; goto extract_sfmt_andb;
      case 159 :
        {
          unsigned int val = (((insn >> 4) & (15 << 0)));
          switch (val)
          {
          case 0 : itype = FR30_INSN_JMPD; goto extract_sfmt_jmp;
          case 1 : itype = FR30_INSN_CALLRD; goto extract_sfmt_callr;
          case 2 :
            if ((base_insn & 0xffff) == 0x9f20)
              { itype = FR30_INSN_RET_D; goto extract_sfmt_ret; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((base_insn & 0xffff) == 0x9f30)
              { itype = FR30_INSN_INTE; goto extract_sfmt_inte; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          case 6 :
            if ((base_insn & 0xffff) == 0x9f60)
              { itype = FR30_INSN_DIV3; goto extract_sfmt_div3; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          case 7 :
            if ((base_insn & 0xffff) == 0x9f70)
              { itype = FR30_INSN_DIV4S; goto extract_sfmt_div4s; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          case 9 :
            if ((base_insn & 0xffff) == 0x9f90)
              { itype = FR30_INSN_LEAVE; goto extract_sfmt_leave; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          case 10 :
            if ((base_insn & 0xffff) == 0x9fa0)
              { itype = FR30_INSN_NOP; goto extract_sfmt_bnod; }
            itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          case 12 : itype = FR30_INSN_COPOP; goto extract_sfmt_bnod;
          case 13 : itype = FR30_INSN_COPLD; goto extract_sfmt_bnod;
          case 14 : itype = FR30_INSN_COPST; goto extract_sfmt_bnod;
          case 15 : itype = FR30_INSN_COPSV; goto extract_sfmt_bnod;
          default : itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 160 : itype = FR30_INSN_ADDNI; goto extract_sfmt_addni;
      case 161 : itype = FR30_INSN_ADDN2; goto extract_sfmt_addn2;
      case 162 : itype = FR30_INSN_ADDN; goto extract_sfmt_addn;
      case 163 : itype = FR30_INSN_ADDSP; goto extract_sfmt_addsp;
      case 164 : itype = FR30_INSN_ADDI; goto extract_sfmt_addi;
      case 165 : itype = FR30_INSN_ADD2; goto extract_sfmt_add2;
      case 166 : itype = FR30_INSN_ADD; goto extract_sfmt_add;
      case 167 : itype = FR30_INSN_ADDC; goto extract_sfmt_addc;
      case 168 : itype = FR30_INSN_CMPI; goto extract_sfmt_cmpi;
      case 169 : itype = FR30_INSN_CMP2; goto extract_sfmt_cmp2;
      case 170 : itype = FR30_INSN_CMP; goto extract_sfmt_cmp;
      case 171 : itype = FR30_INSN_MULU; goto extract_sfmt_mulu;
      case 172 : itype = FR30_INSN_SUB; goto extract_sfmt_add;
      case 173 : itype = FR30_INSN_SUBC; goto extract_sfmt_addc;
      case 174 : itype = FR30_INSN_SUBN; goto extract_sfmt_addn;
      case 175 : itype = FR30_INSN_MUL; goto extract_sfmt_mul;
      case 176 : itype = FR30_INSN_LSRI; goto extract_sfmt_lsli;
      case 177 : itype = FR30_INSN_LSR2; goto extract_sfmt_lsli;
      case 178 : itype = FR30_INSN_LSR; goto extract_sfmt_lsl;
      case 179 : itype = FR30_INSN_MOV2DR; goto extract_sfmt_mov2dr;
      case 180 : itype = FR30_INSN_LSLI; goto extract_sfmt_lsli;
      case 181 : itype = FR30_INSN_LSL2; goto extract_sfmt_lsli;
      case 182 : itype = FR30_INSN_LSL; goto extract_sfmt_lsl;
      case 183 : itype = FR30_INSN_MOVDR; goto extract_sfmt_movdr;
      case 184 : itype = FR30_INSN_ASRI; goto extract_sfmt_lsli;
      case 185 : itype = FR30_INSN_ASR2; goto extract_sfmt_lsli;
      case 186 : itype = FR30_INSN_ASR; goto extract_sfmt_lsl;
      case 187 : itype = FR30_INSN_MULUH; goto extract_sfmt_mulh;
      case 188 : itype = FR30_INSN_LDRES; goto extract_sfmt_ldres;
      case 189 : itype = FR30_INSN_STRES; goto extract_sfmt_ldres;
      case 191 : itype = FR30_INSN_MULH; goto extract_sfmt_mulh;
      case 192 : /* fall through */
      case 193 : /* fall through */
      case 194 : /* fall through */
      case 195 : /* fall through */
      case 196 : /* fall through */
      case 197 : /* fall through */
      case 198 : /* fall through */
      case 199 : /* fall through */
      case 200 : /* fall through */
      case 201 : /* fall through */
      case 202 : /* fall through */
      case 203 : /* fall through */
      case 204 : /* fall through */
      case 205 : /* fall through */
      case 206 : /* fall through */
      case 207 : itype = FR30_INSN_LDI8; goto extract_sfmt_ldi8;
      case 208 : /* fall through */
      case 209 : /* fall through */
      case 210 : /* fall through */
      case 211 : /* fall through */
      case 212 : /* fall through */
      case 213 : /* fall through */
      case 214 : /* fall through */
      case 215 : itype = FR30_INSN_CALL; goto extract_sfmt_call;
      case 216 : /* fall through */
      case 217 : /* fall through */
      case 218 : /* fall through */
      case 219 : /* fall through */
      case 220 : /* fall through */
      case 221 : /* fall through */
      case 222 : /* fall through */
      case 223 : itype = FR30_INSN_CALLD; goto extract_sfmt_call;
      case 224 : itype = FR30_INSN_BRA; goto extract_sfmt_brad;
      case 225 : itype = FR30_INSN_BNO; goto extract_sfmt_bnod;
      case 226 : itype = FR30_INSN_BEQ; goto extract_sfmt_beqd;
      case 227 : itype = FR30_INSN_BNE; goto extract_sfmt_beqd;
      case 228 : itype = FR30_INSN_BC; goto extract_sfmt_bcd;
      case 229 : itype = FR30_INSN_BNC; goto extract_sfmt_bcd;
      case 230 : itype = FR30_INSN_BN; goto extract_sfmt_bnd;
      case 231 : itype = FR30_INSN_BP; goto extract_sfmt_bnd;
      case 232 : itype = FR30_INSN_BV; goto extract_sfmt_bvd;
      case 233 : itype = FR30_INSN_BNV; goto extract_sfmt_bvd;
      case 234 : itype = FR30_INSN_BLT; goto extract_sfmt_bltd;
      case 235 : itype = FR30_INSN_BGE; goto extract_sfmt_bltd;
      case 236 : itype = FR30_INSN_BLE; goto extract_sfmt_bled;
      case 237 : itype = FR30_INSN_BGT; goto extract_sfmt_bled;
      case 238 : itype = FR30_INSN_BLS; goto extract_sfmt_blsd;
      case 239 : itype = FR30_INSN_BHI; goto extract_sfmt_blsd;
      case 240 : itype = FR30_INSN_BRAD; goto extract_sfmt_brad;
      case 241 : itype = FR30_INSN_BNOD; goto extract_sfmt_bnod;
      case 242 : itype = FR30_INSN_BEQD; goto extract_sfmt_beqd;
      case 243 : itype = FR30_INSN_BNED; goto extract_sfmt_beqd;
      case 244 : itype = FR30_INSN_BCD; goto extract_sfmt_bcd;
      case 245 : itype = FR30_INSN_BNCD; goto extract_sfmt_bcd;
      case 246 : itype = FR30_INSN_BND; goto extract_sfmt_bnd;
      case 247 : itype = FR30_INSN_BPD; goto extract_sfmt_bnd;
      case 248 : itype = FR30_INSN_BVD; goto extract_sfmt_bvd;
      case 249 : itype = FR30_INSN_BNVD; goto extract_sfmt_bvd;
      case 250 : itype = FR30_INSN_BLTD; goto extract_sfmt_bltd;
      case 251 : itype = FR30_INSN_BGED; goto extract_sfmt_bltd;
      case 252 : itype = FR30_INSN_BLED; goto extract_sfmt_bled;
      case 253 : itype = FR30_INSN_BGTD; goto extract_sfmt_bled;
      case 254 : itype = FR30_INSN_BLSD; goto extract_sfmt_blsd;
      case 255 : itype = FR30_INSN_BHID; goto extract_sfmt_blsd;
      default : itype = FR30_INSN_X_INVALID; goto extract_sfmt_empty;
      }
    }
  }

  /* The instruction has been decoded, now extract the fields.  */

 extract_sfmt_empty:
  {


    /* Record the operands  */

    cmd.itype = itype;
    cmd.size = 0;
    return 0;
  }

 extract_sfmt_add:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_addi:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_u4;
    UINT f_Ri;

    f_u4 = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_u4;
    cmd.Op1.cgen_optype = FR30_OPERAND_U4;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_add2:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_m4;
    UINT f_Ri;

    f_m4 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 4)) | (((-1) << (4))));
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_m4;
    cmd.Op1.cgen_optype = FR30_OPERAND_M4;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_addc:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_addn:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_addni:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_u4;
    UINT f_Ri;

    f_u4 = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_u4;
    cmd.Op1.cgen_optype = FR30_OPERAND_U4;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_addn2:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_m4;
    UINT f_Ri;

    f_m4 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 4)) | (((-1) << (4))));
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_m4;
    cmd.Op1.cgen_optype = FR30_OPERAND_M4;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_cmp:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_cmpi:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_u4;
    UINT f_Ri;

    f_u4 = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_u4;
    cmd.Op1.cgen_optype = FR30_OPERAND_U4;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_cmp2:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_m4;
    UINT f_Ri;

    f_m4 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 4)) | (((-1) << (4))));
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_m4;
    cmd.Op1.cgen_optype = FR30_OPERAND_M4;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_and:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_andm:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_andh:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_andb:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_bandl:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_u4;
    UINT f_Ri;

    f_u4 = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_u4;
    cmd.Op1.cgen_optype = FR30_OPERAND_U4;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_btstl:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_u4;
    UINT f_Ri;

    f_u4 = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_u4;
    cmd.Op1.cgen_optype = FR30_OPERAND_U4;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_mul:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_mulu:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_mulh:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_div0s:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Ri;

    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_div0u:
  {


    /* Record the operands  */

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_div1:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Ri;

    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_div2:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Ri;

    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_div3:
  {


    /* Record the operands  */

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_div4s:
  {


    /* Record the operands  */

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_lsl:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_lsli:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_u4;
    UINT f_Ri;

    f_u4 = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_u4;
    cmd.Op1.cgen_optype = FR30_OPERAND_U4;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ldi8:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_i8;
    UINT f_Ri;

    f_i8 = EXTRACT_MSB0_UINT (insn, 16, 4, 8);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_i8;
    cmd.Op1.cgen_optype = FR30_OPERAND_I8;
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ld:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_lduh:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ldub:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ldr13:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op2.cgen_optype = FR30_OPERAND_RJ;
    cmd.Op3.type = o_reg;
    cmd.Op3.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op3.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ldr13uh:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op2.cgen_optype = FR30_OPERAND_RJ;
    cmd.Op3.type = o_reg;
    cmd.Op3.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op3.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ldr13ub:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op2.cgen_optype = FR30_OPERAND_RJ;
    cmd.Op3.type = o_reg;
    cmd.Op3.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op3.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ldr14:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_disp10;
    UINT f_Ri;

    f_disp10 = ((EXTRACT_MSB0_SINT (insn, 16, 4, 8)) << (2));
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_imm;
    cmd.Op2.dtyp = get_dtyp_by_size(4);
    cmd.Op2.value = f_disp10;
    cmd.Op2.cgen_optype = FR30_OPERAND_DISP10;
    cmd.Op3.type = o_reg;
    cmd.Op3.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op3.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ldr14uh:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_disp9;
    UINT f_Ri;

    f_disp9 = ((EXTRACT_MSB0_SINT (insn, 16, 4, 8)) << (1));
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_imm;
    cmd.Op2.dtyp = get_dtyp_by_size(4);
    cmd.Op2.value = f_disp9;
    cmd.Op2.cgen_optype = FR30_OPERAND_DISP9;
    cmd.Op3.type = o_reg;
    cmd.Op3.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op3.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ldr14ub:
  {
    CGEN_INSN_WORD insn = base_insn;
    INT f_disp8;
    UINT f_Ri;

    f_disp8 = EXTRACT_MSB0_SINT (insn, 16, 4, 8);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_imm;
    cmd.Op2.dtyp = get_dtyp_by_size(4);
    cmd.Op2.value = f_disp8;
    cmd.Op2.cgen_optype = FR30_OPERAND_DISP8;
    cmd.Op3.type = o_reg;
    cmd.Op3.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op3.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ldr15:
  {
    CGEN_INSN_WORD insn = base_insn;
    USI f_udisp6;
    UINT f_Ri;

    f_udisp6 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 4)) << (2));
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_imm;
    cmd.Op2.dtyp = get_dtyp_by_size(4);
    cmd.Op2.value = f_udisp6;
    cmd.Op2.cgen_optype = FR30_OPERAND_UDISP6;
    cmd.Op3.type = o_reg;
    cmd.Op3.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op3.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ldr15gr:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Ri;

    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ldr15dr:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rs2;

    f_Rs2 = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_DR_BASE + f_Rs2;
    cmd.Op2.cgen_optype = FR30_OPERAND_RS2;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ldr15ps:
  {


    /* Record the operands  */

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_st:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op2.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_sth:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op2.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_stb:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op2.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_str13:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;
    cmd.Op3.type = o_reg;
    cmd.Op3.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op3.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_str13h:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;
    cmd.Op3.type = o_reg;
    cmd.Op3.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op3.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_str13b:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;
    cmd.Op3.type = o_reg;
    cmd.Op3.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op3.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_str14:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_disp10;
    UINT f_Ri;

    f_disp10 = ((EXTRACT_MSB0_SINT (insn, 16, 4, 8)) << (2));
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;
    cmd.Op3.type = o_imm;
    cmd.Op3.dtyp = get_dtyp_by_size(4);
    cmd.Op3.value = f_disp10;
    cmd.Op3.cgen_optype = FR30_OPERAND_DISP10;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_str14h:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_disp9;
    UINT f_Ri;

    f_disp9 = ((EXTRACT_MSB0_SINT (insn, 16, 4, 8)) << (1));
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;
    cmd.Op3.type = o_imm;
    cmd.Op3.dtyp = get_dtyp_by_size(4);
    cmd.Op3.value = f_disp9;
    cmd.Op3.cgen_optype = FR30_OPERAND_DISP9;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_str14b:
  {
    CGEN_INSN_WORD insn = base_insn;
    INT f_disp8;
    UINT f_Ri;

    f_disp8 = EXTRACT_MSB0_SINT (insn, 16, 4, 8);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;
    cmd.Op3.type = o_imm;
    cmd.Op3.dtyp = get_dtyp_by_size(4);
    cmd.Op3.value = f_disp8;
    cmd.Op3.cgen_optype = FR30_OPERAND_DISP8;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_str15:
  {
    CGEN_INSN_WORD insn = base_insn;
    USI f_udisp6;
    UINT f_Ri;

    f_udisp6 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 4)) << (2));
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;
    cmd.Op3.type = o_imm;
    cmd.Op3.dtyp = get_dtyp_by_size(4);
    cmd.Op3.value = f_udisp6;
    cmd.Op3.cgen_optype = FR30_OPERAND_UDISP6;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_str15gr:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Ri;

    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_str15dr:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rs2;

    f_Rs2 = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_DR_BASE + f_Rs2;
    cmd.Op1.cgen_optype = FR30_OPERAND_RS2;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_str15ps:
  {


    /* Record the operands  */

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_mov:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_movdr:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rs1;
    UINT f_Ri;

    f_Rs1 = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_DR_BASE + f_Rs1;
    cmd.Op1.cgen_optype = FR30_OPERAND_RS1;
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_movps:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Ri;

    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_mov2dr:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rs1;
    UINT f_Ri;

    f_Rs1 = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_DR_BASE + f_Rs1;
    cmd.Op2.cgen_optype = FR30_OPERAND_RS1;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_mov2ps:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Ri;

    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_jmp:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Ri;

    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_callr:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Ri;

    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_call:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_rel12;

    f_rel12 = ((((EXTRACT_MSB0_SINT (insn, 16, 5, 11)) << (1))) + (((pc) + (2))));

    /* Record the operands  */
    cmd.Op1.type = o_mem;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.addr = f_rel12;
    cmd.Op1.cgen_optype = FR30_OPERAND_LABEL12;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ret:
  {


    /* Record the operands  */

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_int:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_u8;

    f_u8 = EXTRACT_MSB0_UINT (insn, 16, 8, 8);

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_u8;
    cmd.Op1.cgen_optype = FR30_OPERAND_U8;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_inte:
  {


    /* Record the operands  */

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_reti:
  {


    /* Record the operands  */

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_brad:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_rel9;

    f_rel9 = ((((EXTRACT_MSB0_SINT (insn, 16, 8, 8)) << (1))) + (((pc) + (2))));

    /* Record the operands  */
    cmd.Op1.type = o_mem;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.addr = f_rel9;
    cmd.Op1.cgen_optype = FR30_OPERAND_LABEL9;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_bnod:
  {


    /* Record the operands  */

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_beqd:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_rel9;

    f_rel9 = ((((EXTRACT_MSB0_SINT (insn, 16, 8, 8)) << (1))) + (((pc) + (2))));

    /* Record the operands  */
    cmd.Op1.type = o_mem;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.addr = f_rel9;
    cmd.Op1.cgen_optype = FR30_OPERAND_LABEL9;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_bcd:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_rel9;

    f_rel9 = ((((EXTRACT_MSB0_SINT (insn, 16, 8, 8)) << (1))) + (((pc) + (2))));

    /* Record the operands  */
    cmd.Op1.type = o_mem;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.addr = f_rel9;
    cmd.Op1.cgen_optype = FR30_OPERAND_LABEL9;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_bnd:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_rel9;

    f_rel9 = ((((EXTRACT_MSB0_SINT (insn, 16, 8, 8)) << (1))) + (((pc) + (2))));

    /* Record the operands  */
    cmd.Op1.type = o_mem;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.addr = f_rel9;
    cmd.Op1.cgen_optype = FR30_OPERAND_LABEL9;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_bvd:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_rel9;

    f_rel9 = ((((EXTRACT_MSB0_SINT (insn, 16, 8, 8)) << (1))) + (((pc) + (2))));

    /* Record the operands  */
    cmd.Op1.type = o_mem;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.addr = f_rel9;
    cmd.Op1.cgen_optype = FR30_OPERAND_LABEL9;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_bltd:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_rel9;

    f_rel9 = ((((EXTRACT_MSB0_SINT (insn, 16, 8, 8)) << (1))) + (((pc) + (2))));

    /* Record the operands  */
    cmd.Op1.type = o_mem;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.addr = f_rel9;
    cmd.Op1.cgen_optype = FR30_OPERAND_LABEL9;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_bled:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_rel9;

    f_rel9 = ((((EXTRACT_MSB0_SINT (insn, 16, 8, 8)) << (1))) + (((pc) + (2))));

    /* Record the operands  */
    cmd.Op1.type = o_mem;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.addr = f_rel9;
    cmd.Op1.cgen_optype = FR30_OPERAND_LABEL9;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_blsd:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_rel9;

    f_rel9 = ((((EXTRACT_MSB0_SINT (insn, 16, 8, 8)) << (1))) + (((pc) + (2))));

    /* Record the operands  */
    cmd.Op1.type = o_mem;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.addr = f_rel9;
    cmd.Op1.cgen_optype = FR30_OPERAND_LABEL9;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_dmovr13:
  {
    CGEN_INSN_WORD insn = base_insn;
    USI f_dir10;

    f_dir10 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 8)) << (2));

    /* Record the operands  */
    cmd.Op2.type = o_imm;
    cmd.Op2.dtyp = get_dtyp_by_size(4);
    cmd.Op2.value = f_dir10;
    cmd.Op2.cgen_optype = FR30_OPERAND_DIR10;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_dmovr13h:
  {
    CGEN_INSN_WORD insn = base_insn;
    USI f_dir9;

    f_dir9 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 8)) << (1));

    /* Record the operands  */
    cmd.Op2.type = o_imm;
    cmd.Op2.dtyp = get_dtyp_by_size(4);
    cmd.Op2.value = f_dir9;
    cmd.Op2.cgen_optype = FR30_OPERAND_DIR9;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_dmovr13b:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_dir8;

    f_dir8 = EXTRACT_MSB0_UINT (insn, 16, 8, 8);

    /* Record the operands  */
    cmd.Op2.type = o_imm;
    cmd.Op2.dtyp = get_dtyp_by_size(4);
    cmd.Op2.value = f_dir8;
    cmd.Op2.cgen_optype = FR30_OPERAND_DIR8;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_dmovr13pi:
  {
    CGEN_INSN_WORD insn = base_insn;
    USI f_dir10;

    f_dir10 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 8)) << (2));

    /* Record the operands  */
    cmd.Op2.type = o_imm;
    cmd.Op2.dtyp = get_dtyp_by_size(4);
    cmd.Op2.value = f_dir10;
    cmd.Op2.cgen_optype = FR30_OPERAND_DIR10;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_dmovr13pih:
  {
    CGEN_INSN_WORD insn = base_insn;
    USI f_dir9;

    f_dir9 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 8)) << (1));

    /* Record the operands  */
    cmd.Op2.type = o_imm;
    cmd.Op2.dtyp = get_dtyp_by_size(4);
    cmd.Op2.value = f_dir9;
    cmd.Op2.cgen_optype = FR30_OPERAND_DIR9;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_dmovr13pib:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_dir8;

    f_dir8 = EXTRACT_MSB0_UINT (insn, 16, 8, 8);

    /* Record the operands  */
    cmd.Op2.type = o_imm;
    cmd.Op2.dtyp = get_dtyp_by_size(4);
    cmd.Op2.value = f_dir8;
    cmd.Op2.cgen_optype = FR30_OPERAND_DIR8;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_dmovr15pi:
  {
    CGEN_INSN_WORD insn = base_insn;
    USI f_dir10;

    f_dir10 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 8)) << (2));

    /* Record the operands  */
    cmd.Op2.type = o_imm;
    cmd.Op2.dtyp = get_dtyp_by_size(4);
    cmd.Op2.value = f_dir10;
    cmd.Op2.cgen_optype = FR30_OPERAND_DIR10;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_dmov2r13:
  {
    CGEN_INSN_WORD insn = base_insn;
    USI f_dir10;

    f_dir10 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 8)) << (2));

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_dir10;
    cmd.Op1.cgen_optype = FR30_OPERAND_DIR10;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_dmov2r13h:
  {
    CGEN_INSN_WORD insn = base_insn;
    USI f_dir9;

    f_dir9 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 8)) << (1));

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_dir9;
    cmd.Op1.cgen_optype = FR30_OPERAND_DIR9;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_dmov2r13b:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_dir8;

    f_dir8 = EXTRACT_MSB0_UINT (insn, 16, 8, 8);

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_dir8;
    cmd.Op1.cgen_optype = FR30_OPERAND_DIR8;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_dmov2r13pi:
  {
    CGEN_INSN_WORD insn = base_insn;
    USI f_dir10;

    f_dir10 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 8)) << (2));

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_dir10;
    cmd.Op1.cgen_optype = FR30_OPERAND_DIR10;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_dmov2r13pih:
  {
    CGEN_INSN_WORD insn = base_insn;
    USI f_dir9;

    f_dir9 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 8)) << (1));

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_dir9;
    cmd.Op1.cgen_optype = FR30_OPERAND_DIR9;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_dmov2r13pib:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_dir8;

    f_dir8 = EXTRACT_MSB0_UINT (insn, 16, 8, 8);

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_dir8;
    cmd.Op1.cgen_optype = FR30_OPERAND_DIR8;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_dmov2r15pd:
  {
    CGEN_INSN_WORD insn = base_insn;
    USI f_dir10;

    f_dir10 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 8)) << (2));

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_dir10;
    cmd.Op1.cgen_optype = FR30_OPERAND_DIR10;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ldres:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Ri;

    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_andccr:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_u8;

    f_u8 = EXTRACT_MSB0_UINT (insn, 16, 8, 8);

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_u8;
    cmd.Op1.cgen_optype = FR30_OPERAND_U8;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_stilm:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_u8;

    f_u8 = EXTRACT_MSB0_UINT (insn, 16, 8, 8);

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_u8;
    cmd.Op1.cgen_optype = FR30_OPERAND_U8;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_addsp:
  {
    CGEN_INSN_WORD insn = base_insn;
    SI f_s10;

    f_s10 = ((EXTRACT_MSB0_SINT (insn, 16, 8, 8)) << (2));

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_s10;
    cmd.Op1.cgen_optype = FR30_OPERAND_S10;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_extsb:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Ri;

    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op1.cgen_optype = FR30_OPERAND_RI;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ldm0:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_reglist_low_ld;

    f_reglist_low_ld = EXTRACT_MSB0_UINT (insn, 16, 8, 8);

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_reglist_low_ld;
    cmd.Op1.cgen_optype = FR30_OPERAND_REGLIST_LOW_LD;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_ldm1:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_reglist_hi_ld;

    f_reglist_hi_ld = EXTRACT_MSB0_UINT (insn, 16, 8, 8);

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_reglist_hi_ld;
    cmd.Op1.cgen_optype = FR30_OPERAND_REGLIST_HI_LD;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_stm0:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_reglist_low_st;

    f_reglist_low_st = EXTRACT_MSB0_UINT (insn, 16, 8, 8);

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_reglist_low_st;
    cmd.Op1.cgen_optype = FR30_OPERAND_REGLIST_LOW_ST;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_stm1:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_reglist_hi_st;

    f_reglist_hi_st = EXTRACT_MSB0_UINT (insn, 16, 8, 8);

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_reglist_hi_st;
    cmd.Op1.cgen_optype = FR30_OPERAND_REGLIST_HI_ST;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_enter:
  {
    CGEN_INSN_WORD insn = base_insn;
    USI f_u10;

    f_u10 = ((EXTRACT_MSB0_UINT (insn, 16, 8, 8)) << (2));

    /* Record the operands  */
    cmd.Op1.type = o_imm;
    cmd.Op1.dtyp = get_dtyp_by_size(4);
    cmd.Op1.value = f_u10;
    cmd.Op1.cgen_optype = FR30_OPERAND_U10;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_leave:
  {


    /* Record the operands  */

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

 extract_sfmt_xchb:
  {
    CGEN_INSN_WORD insn = base_insn;
    UINT f_Rj;
    UINT f_Ri;

    f_Rj = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_Ri = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

    /* Record the operands  */
    cmd.Op2.type = o_reg;
    cmd.Op2.reg = REGS_HW_H_GR_BASE + f_Ri;
    cmd.Op2.cgen_optype = FR30_OPERAND_RI;
    cmd.Op1.type = o_reg;
    cmd.Op1.reg = REGS_HW_H_GR_BASE + f_Rj;
    cmd.Op1.cgen_optype = FR30_OPERAND_RJ;

    cmd.itype = itype;
    cmd.size = 2;
    return 2;
  }

}
