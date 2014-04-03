/*
 * Generated by Bluespec Compiler, version 2011.06.D (build 24470, 2011-06-30)
 * 
 * On Thu Apr  3 21:14:10 IST 2014
 * 
 */

/* Generation options: */
#ifndef __mkCounterPred2Bit_h__
#define __mkCounterPred2Bit_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"

namespace bluesim
{
  
  /* Class declaration for the mkCounterPred2Bit module */
  class MOD_mkCounterPred2Bit : public Module {
   
   /* Clock handles */
   private:
    tClock __clk_handle_0;
   
   /* Instantiation parameters */
   public:
   
   /* Module state */
   public:
    MOD_RegFile<tUInt32,tUInt8> INST_counters;
    MOD_Reg<tUInt32> INST_initialize;
    MOD_RegFile<tUInt32,tUInt32> INST_tags;
   
   /* Constructor */
   public:
    MOD_mkCounterPred2Bit(char const *name, Module *parent);
   
   /* Symbol init methods */
   private:
    void init_symbols_0();
   
   /* Reset signal definitions */
   private:
    tUInt8 PORT_RST_N;
   
   /* Port definitions */
   public:
    tUWide PORT_update_rd;
   
   /* Publicly accessible definitions */
   public:
    tUInt8 DEF_x_BIT_10___h494;
    tUInt32 DEF_x__h522;
   
   /* Local definitions */
   private:
   
   /* Rules */
   public:
    void RL_init();
   
   /* Methods */
   public:
    tUInt8 METH_predDir(tUInt32 ARG_predDir_pc);
    tUInt8 METH_RDY_predDir();
    void METH_update(tUWide ARG_update_rd);
    tUInt8 METH_RDY_update();
   
   /* Reset routines */
   public:
    void reset_RST_N(tUInt8 ARG_rst_in);
   
   /* Static handles to reset routines */
   public:
   
   /* Pointers to reset fns in parent module for asserting output resets */
   private:
   
   /* Functions for the parent module to register its reset fns */
   public:
   
   /* Functions to set the elaborated clock id */
   public:
    void set_clk_0(char const *s);
   
   /* State dumping routine */
   public:
    void dump_state(unsigned int indent);
   
   /* VCD dumping routines */
   public:
    unsigned int dump_VCD_defs(unsigned int levels);
    void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkCounterPred2Bit &backing);
    void vcd_defs(tVCDDumpType dt, MOD_mkCounterPred2Bit &backing);
    void vcd_prims(tVCDDumpType dt, MOD_mkCounterPred2Bit &backing);
  };
}

#endif /* ifndef __mkCounterPred2Bit_h__ */
