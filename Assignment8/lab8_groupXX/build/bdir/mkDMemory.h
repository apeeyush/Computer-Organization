/*
 * Generated by Bluespec Compiler, version 2011.06.D (build 24470, 2011-06-30)
 * 
 * On Thu Apr  3 21:54:03 IST 2014
 * 
 */

/* Generation options: */
#ifndef __mkDMemory_h__
#define __mkDMemory_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"

namespace bluesim
{
  
  /* Class declaration for the mkDMemory module */
  class MOD_mkDMemory : public Module {
   
   /* Clock handles */
   private:
    tClock __clk_handle_0;
   
   /* Instantiation parameters */
   public:
   
   /* Module state */
   public:
    MOD_RegFile<tUInt32,tUInt32> INST_mem;
   
   /* Constructor */
   public:
    MOD_mkDMemory(char const *name, Module *parent);
   
   /* Symbol init methods */
   private:
    void init_symbols_0();
   
   /* Reset signal definitions */
   private:
    tUInt8 PORT_RST_N;
   
   /* Port definitions */
   public:
    tUWide PORT_req_r;
   
   /* Publicly accessible definitions */
   public:
   
   /* Local definitions */
   private:
   
   /* Rules */
   public:
   
   /* Methods */
   public:
    tUInt32 METH_req(tUWide ARG_req_r);
    tUInt8 METH_RDY_req();
   
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
    void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkDMemory &backing);
    void vcd_defs(tVCDDumpType dt, MOD_mkDMemory &backing);
    void vcd_prims(tVCDDumpType dt, MOD_mkDMemory &backing);
  };
}

#endif /* ifndef __mkDMemory_h__ */
