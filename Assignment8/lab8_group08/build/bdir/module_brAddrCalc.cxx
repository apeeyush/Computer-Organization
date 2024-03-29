/*
 * Generated by Bluespec Compiler, version 2011.06.D (build 24470, 2011-06-30)
 * 
 * On Thu Apr  3 20:09:05 IST 2014
 * 
 */
#include "bluesim_primitives.h"
#include "module_brAddrCalc.h"

namespace bluesim
{
  
  /* Constructor */
  MOD_module_brAddrCalc::MOD_module_brAddrCalc(char const *name, Module *parent)
    : Module(name, parent)
  {
    symbol_count = 0u;
    init_symbols_0();
  }
  
  
  /* Symbol init fns */
  
  void MOD_module_brAddrCalc::init_symbols_0()
  {
  }
  
  
  /* Rule actions */
  
  
  /* Methods */
  
  tUInt32 MOD_module_brAddrCalc::METH_brAddrCalc(tUInt32 ARG_brAddrCalc_pc,
						 tUInt32 ARG_brAddrCalc_val,
						 tUInt8 ARG_brAddrCalc_iType,
						 tUInt32 ARG_brAddrCalc_imm,
						 tUInt8 ARG_brAddrCalc_taken)
  {
    tUInt32 DEF_brAddrCalc_pc_PLUS_4_BITS_31_TO_28_CONCAT_brAd_ETC___d5;
    tUInt8 DEF_brAddrCalc_iType_EQ_4___d1;
    tUInt32 DEF_IF_brAddrCalc_iType_EQ_5_THEN_brAddrCalc_val_E_ETC___d11;
    tUInt32 DEF_brAddrCalc_pc_PLUS_4___d12;
    tUInt32 PORT_brAddrCalc;
    DEF_brAddrCalc_pc_PLUS_4___d12 = ARG_brAddrCalc_pc + 4u;
    DEF_IF_brAddrCalc_iType_EQ_5_THEN_brAddrCalc_val_E_ETC___d11 = ARG_brAddrCalc_iType == (tUInt8)5u ? ARG_brAddrCalc_val : (ARG_brAddrCalc_iType == (tUInt8)6u ? (ARG_brAddrCalc_taken ? DEF_brAddrCalc_pc_PLUS_4___d12 + ARG_brAddrCalc_imm : DEF_brAddrCalc_pc_PLUS_4___d12) : DEF_brAddrCalc_pc_PLUS_4___d12);
    DEF_brAddrCalc_iType_EQ_4___d1 = ARG_brAddrCalc_iType == (tUInt8)4u;
    DEF_brAddrCalc_pc_PLUS_4_BITS_31_TO_28_CONCAT_brAd_ETC___d5 = (((tUInt32)((tUInt8)(DEF_brAddrCalc_pc_PLUS_4___d12 >> 28u))) << 28u) | (tUInt32)(268435455u & ARG_brAddrCalc_imm);
    PORT_brAddrCalc = DEF_brAddrCalc_iType_EQ_4___d1 ? DEF_brAddrCalc_pc_PLUS_4_BITS_31_TO_28_CONCAT_brAd_ETC___d5 : DEF_IF_brAddrCalc_iType_EQ_5_THEN_brAddrCalc_val_E_ETC___d11;
    return PORT_brAddrCalc;
  }
  
  tUInt8 MOD_module_brAddrCalc::METH_RDY_brAddrCalc()
  {
    tUInt8 PORT_RDY_brAddrCalc;
    tUInt8 DEF_CAN_FIRE_brAddrCalc;
    DEF_CAN_FIRE_brAddrCalc = (tUInt8)1u;
    PORT_RDY_brAddrCalc = DEF_CAN_FIRE_brAddrCalc;
    return PORT_RDY_brAddrCalc;
  }
  
  
  /* Reset routines */
  
  
  /* Static handles to reset routines */
  
  
  /* Functions for the parent module to register its reset fns */
  
  
  /* Functions to set the elaborated clock id */
  
  
  /* State dumping routine */
  void MOD_module_brAddrCalc::dump_state(unsigned int indent)
  {
  }
  
  
  /* VCD dumping routines */
  
  unsigned int MOD_module_brAddrCalc::dump_VCD_defs(unsigned int levels)
  {
    fprintf(vcd_file, "$scope module %s $end\n", inst_name);
    vcd_num = vcd_reserve_ids(0u);
    unsigned int num = vcd_num;
    for (unsigned int hdl = 0u; hdl < bk_num_clocks(); ++hdl)
      vcd_add_clock_def(this, bk_clock_name(hdl), bk_clock_vcd_num(hdl));
    fprintf(vcd_file, "$upscope $end\n");
    return num;
  }
  
  void MOD_module_brAddrCalc::dump_VCD(tVCDDumpType dt,
				       unsigned int levels,
				       MOD_module_brAddrCalc &backing)
  {
  }
}
