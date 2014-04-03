/*
 * Generated by Bluespec Compiler, version 2011.06.D (build 24470, 2011-06-30)
 * 
 * On Thu Apr  3 21:54:03 IST 2014
 * 
 */
#include "bluesim_primitives.h"
#include "module_aluBr.h"

namespace bluesim
{
  
  /* Constructor */
  MOD_module_aluBr::MOD_module_aluBr(char const *name, Module *parent)
    : Module(name, parent)
  {
    symbol_count = 0u;
    init_symbols_0();
  }
  
  
  /* Symbol init fns */
  
  void MOD_module_aluBr::init_symbols_0()
  {
  }
  
  
  /* Rule actions */
  
  
  /* Methods */
  
  tUInt8 MOD_module_aluBr::METH_aluBr(tUInt32 ARG_aluBr_a,
				      tUInt32 ARG_aluBr_b,
				      tUInt8 ARG_aluBr_brFunc)
  {
    tUInt8 PORT_aluBr;
    tUInt8 DEF_aluBr_brFunc_EQ_0___d1;
    tUInt8 DEF_aluBr_a_EQ_aluBr_b___d21;
    tUInt8 DEF_aluBr_a_SLE_0___d19;
    tUInt8 DEF_IF_aluBr_brFunc_EQ_1_THEN_NOT_aluBr_a_EQ_aluBr_ETC___d18;
    tUInt8 DEF_aluBr_a_BIT_31___d20;
    DEF_aluBr_a_BIT_31___d20 = (tUInt8)(ARG_aluBr_a >> 31u);
    DEF_aluBr_a_SLE_0___d19 = primSLE8(1u, 32u, (tUInt32)(ARG_aluBr_a), 32u, 0u);
    DEF_aluBr_a_EQ_aluBr_b___d21 = ARG_aluBr_a == ARG_aluBr_b;
    DEF_IF_aluBr_brFunc_EQ_1_THEN_NOT_aluBr_a_EQ_aluBr_ETC___d18 = ARG_aluBr_brFunc == (tUInt8)1u ? !DEF_aluBr_a_EQ_aluBr_b___d21 : (ARG_aluBr_brFunc == (tUInt8)2u ? DEF_aluBr_a_SLE_0___d19 : (ARG_aluBr_brFunc == (tUInt8)3u ? DEF_aluBr_a_BIT_31___d20 : (ARG_aluBr_brFunc == (tUInt8)4u ? !DEF_aluBr_a_BIT_31___d20 : (ARG_aluBr_brFunc == (tUInt8)5u ? !DEF_aluBr_a_SLE_0___d19 : ARG_aluBr_brFunc == (tUInt8)6u))));
    DEF_aluBr_brFunc_EQ_0___d1 = ARG_aluBr_brFunc == (tUInt8)0u;
    PORT_aluBr = DEF_aluBr_brFunc_EQ_0___d1 ? DEF_aluBr_a_EQ_aluBr_b___d21 : DEF_IF_aluBr_brFunc_EQ_1_THEN_NOT_aluBr_a_EQ_aluBr_ETC___d18;
    return PORT_aluBr;
  }
  
  tUInt8 MOD_module_aluBr::METH_RDY_aluBr()
  {
    tUInt8 PORT_RDY_aluBr;
    tUInt8 DEF_CAN_FIRE_aluBr;
    DEF_CAN_FIRE_aluBr = (tUInt8)1u;
    PORT_RDY_aluBr = DEF_CAN_FIRE_aluBr;
    return PORT_RDY_aluBr;
  }
  
  
  /* Reset routines */
  
  
  /* Static handles to reset routines */
  
  
  /* Functions for the parent module to register its reset fns */
  
  
  /* Functions to set the elaborated clock id */
  
  
  /* State dumping routine */
  void MOD_module_aluBr::dump_state(unsigned int indent)
  {
  }
  
  
  /* VCD dumping routines */
  
  unsigned int MOD_module_aluBr::dump_VCD_defs(unsigned int levels)
  {
    fprintf(vcd_file, "$scope module %s $end\n", inst_name);
    vcd_num = vcd_reserve_ids(0u);
    unsigned int num = vcd_num;
    for (unsigned int hdl = 0u; hdl < bk_num_clocks(); ++hdl)
      vcd_add_clock_def(this, bk_clock_name(hdl), bk_clock_vcd_num(hdl));
    fprintf(vcd_file, "$upscope $end\n");
    return num;
  }
  
  void MOD_module_aluBr::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_module_aluBr &backing)
  {
  }
}
