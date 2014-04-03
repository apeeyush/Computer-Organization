/*
 * Generated by Bluespec Compiler, version 2011.06.D (build 24470, 2011-06-30)
 * 
 * On Thu Apr  3 20:09:05 IST 2014
 * 
 */
#include "bluesim_primitives.h"
#include "module_exec.h"

namespace bluesim
{
  
  /* Constructor */
  MOD_module_exec::MOD_module_exec(char const *name, Module *parent)
    : Module(name, parent),
      INST_instance_alu_2("instance_alu_2", this),
      INST_instance_brAddrCalc_1("instance_brAddrCalc_1", this),
      INST_instance_aluBr_0("instance_aluBr_0", this),
      DEF_IF_exec_dInst_BITS_64_TO_61_EQ_7_THEN_exec_cop_ETC___d32(66u)
  {
    PORT_exec_dInst.setSize(65u);
    PORT_exec_dInst.clear();
    PORT_exec.setSize(77u);
    PORT_exec.clear();
    symbol_count = 5u;
    symbols = new tSym[symbol_count];
    init_symbols_0();
  }
  
  
  /* Symbol init fns */
  
  void MOD_module_exec::init_symbols_0()
  {
    init_symbol(&symbols[0u], "exec", SYM_PORT, &PORT_exec, 77u);
    init_symbol(&symbols[1u], "exec_dInst", SYM_PORT, &PORT_exec_dInst, 65u);
    init_symbol(&symbols[2u], "instance_alu_2", SYM_MODULE, &INST_instance_alu_2);
    init_symbol(&symbols[3u], "instance_aluBr_0", SYM_MODULE, &INST_instance_aluBr_0);
    init_symbol(&symbols[4u], "instance_brAddrCalc_1", SYM_MODULE, &INST_instance_brAddrCalc_1);
  }
  
  
  /* Rule actions */
  
  
  /* Methods */
  
  tUWide MOD_module_exec::METH_exec(tUWide ARG_exec_dInst,
				    tUInt32 ARG_exec_rVal1,
				    tUInt32 ARG_exec_rVal2,
				    tUInt32 ARG_exec_pc,
				    tUInt32 ARG_exec_ppc,
				    tUInt32 ARG_exec_copVal)
  {
    tUInt8 DEF_exec_dInst_BIT_53_CONCAT_IF_exec_dInst_BIT_53__ETC___d5;
    tUInt8 DEF_exec_dInst_BITS_64_TO_61_EQ_3___d40;
    tUInt32 DEF_x__h172;
    tUInt32 DEF_x__h283;
    tUInt8 DEF_exec_dInst_BIT_32___d39;
    tUInt8 DEF_exec_dInst_BIT_53___d37;
    tUInt8 DEF_exec_dInst_BITS_52_TO_47___d35;
    tUInt32 DEF_exec_dInst_BITS_31_TO_0___d36;
    tUInt8 DEF_aluBr___d34;
    tUInt32 DEF_IF_exec_dInst_BIT_32_3_THEN_exec_dInst_BITS_31_ETC___d38;
    tUInt8 DEF_exec_dInst_BITS_64_TO_61___d33;
    tUInt32 DEF_brAddr__h34;
    tUInt32 DEF_aluVal2__h29;
    tUInt32 DEF_aluRes__h30;
    PORT_exec_dInst = ARG_exec_dInst;
    DEF_exec_dInst_BITS_64_TO_61___d33 = primExtract8(4u, 65u, ARG_exec_dInst, 32u, 64u, 32u, 61u);
    DEF_aluBr___d34 = INST_instance_aluBr_0.METH_aluBr(ARG_exec_rVal1,
						       ARG_exec_rVal2,
						       primExtract8(3u, 65u, ARG_exec_dInst, 32u, 56u, 32u, 54u));
    DEF_exec_dInst_BITS_31_TO_0___d36 = primExtract32(32u, 65u, ARG_exec_dInst, 32u, 31u, 32u, 0u);
    DEF_exec_dInst_BITS_52_TO_47___d35 = primExtract8(6u, 65u, ARG_exec_dInst, 32u, 52u, 32u, 47u);
    DEF_exec_dInst_BIT_53___d37 = primExtract8(1u, 65u, ARG_exec_dInst, 32u, 53u, 32u, 53u);
    DEF_exec_dInst_BIT_32___d39 = primExtract8(1u, 65u, ARG_exec_dInst, 32u, 32u, 32u, 32u);
    DEF_IF_exec_dInst_BIT_32_3_THEN_exec_dInst_BITS_31_ETC___d38 = DEF_exec_dInst_BIT_32___d39 ? DEF_exec_dInst_BITS_31_TO_0___d36 : DEF_exec_dInst_BITS_31_TO_0___d36;
    DEF_aluVal2__h29 = DEF_exec_dInst_BIT_32___d39 ? DEF_IF_exec_dInst_BIT_32_3_THEN_exec_dInst_BITS_31_ETC___d38 : ARG_exec_rVal2;
    DEF_aluRes__h30 = INST_instance_alu_2.METH_alu(ARG_exec_rVal1,
						   DEF_aluVal2__h29,
						   primExtract8(4u, 65u, ARG_exec_dInst, 32u, 60u, 32u, 57u));
    DEF_brAddr__h34 = INST_instance_brAddrCalc_1.METH_brAddrCalc(ARG_exec_pc,
								 ARG_exec_rVal1,
								 DEF_exec_dInst_BITS_64_TO_61___d33,
								 DEF_IF_exec_dInst_BIT_32_3_THEN_exec_dInst_BITS_31_ETC___d38,
								 DEF_aluBr___d34);
    DEF_exec_dInst_BITS_64_TO_61_EQ_3___d40 = DEF_exec_dInst_BITS_64_TO_61___d33 == (tUInt8)3u;
    DEF_x__h283 = DEF_exec_dInst_BITS_64_TO_61___d33 == (tUInt8)2u || DEF_exec_dInst_BITS_64_TO_61_EQ_3___d40 ? DEF_aluRes__h30 : DEF_brAddr__h34;
    DEF_x__h172 = DEF_exec_dInst_BITS_64_TO_61___d33 == (tUInt8)7u ? ARG_exec_copVal : (DEF_exec_dInst_BITS_64_TO_61___d33 == (tUInt8)8u ? ARG_exec_rVal1 : (DEF_exec_dInst_BITS_64_TO_61_EQ_3___d40 ? ARG_exec_rVal2 : (DEF_exec_dInst_BITS_64_TO_61___d33 == (tUInt8)4u || DEF_exec_dInst_BITS_64_TO_61___d33 == (tUInt8)5u ? ARG_exec_pc + 4u : DEF_aluRes__h30)));
    wop_primConcatWide(66u,
		       64u,
		       (tUInt64)((((tUInt64)(DEF_x__h172)) << 32u) | (tUInt64)(DEF_x__h283)),
		       2u,
		       (tUInt8)((tUInt8)3u & ((!(DEF_brAddr__h34 == ARG_exec_ppc) << 1u) | DEF_aluBr___d34)),
		       DEF_IF_exec_dInst_BITS_64_TO_61_EQ_7_THEN_exec_cop_ETC___d32);
    DEF_exec_dInst_BIT_53_CONCAT_IF_exec_dInst_BIT_53__ETC___d5 = (tUInt8)127u & ((DEF_exec_dInst_BIT_53___d37 << 6u) | (DEF_exec_dInst_BIT_53___d37 ? DEF_exec_dInst_BITS_52_TO_47___d35 : DEF_exec_dInst_BITS_52_TO_47___d35));
    wop_primConcatWide(77u,
		       11u,
		       (tUInt32)(2047u & ((((tUInt32)(DEF_exec_dInst_BITS_64_TO_61___d33)) << 7u) | (tUInt32)(DEF_exec_dInst_BIT_53_CONCAT_IF_exec_dInst_BIT_53__ETC___d5))),
		       66u,
		       DEF_IF_exec_dInst_BITS_64_TO_61_EQ_7_THEN_exec_cop_ETC___d32,
		       PORT_exec);
    return PORT_exec;
  }
  
  tUInt8 MOD_module_exec::METH_RDY_exec()
  {
    tUInt8 PORT_RDY_exec;
    tUInt8 DEF_CAN_FIRE_exec;
    DEF_CAN_FIRE_exec = (tUInt8)1u;
    PORT_RDY_exec = DEF_CAN_FIRE_exec;
    return PORT_RDY_exec;
  }
  
  
  /* Reset routines */
  
  
  /* Static handles to reset routines */
  
  
  /* Functions for the parent module to register its reset fns */
  
  
  /* Functions to set the elaborated clock id */
  
  
  /* State dumping routine */
  void MOD_module_exec::dump_state(unsigned int indent)
  {
  }
  
  
  /* VCD dumping routines */
  
  unsigned int MOD_module_exec::dump_VCD_defs(unsigned int levels)
  {
    fprintf(vcd_file, "$scope module %s $end\n", inst_name);
    vcd_num = vcd_reserve_ids(3u);
    unsigned int num = vcd_num;
    for (unsigned int hdl = 0u; hdl < bk_num_clocks(); ++hdl)
      vcd_add_clock_def(this, bk_clock_name(hdl), bk_clock_vcd_num(hdl));
    vcd_write_def(num++, "IF_exec_dInst_BITS_64_TO_61_EQ_7_THEN_exec_cop_ETC___d32", 66u);
    vcd_write_def(num++, "exec", 77u);
    vcd_write_def(num++, "exec_dInst", 65u);
    if (levels != 1u)
    {
      unsigned int l = levels == 0u ? 0u : levels - 1u;
      num = INST_instance_aluBr_0.dump_VCD_defs(l);
      num = INST_instance_alu_2.dump_VCD_defs(l);
      num = INST_instance_brAddrCalc_1.dump_VCD_defs(l);
    }
    fprintf(vcd_file, "$upscope $end\n");
    return num;
  }
  
  void MOD_module_exec::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_module_exec &backing)
  {
    vcd_defs(dt, backing);
    if (levels != 1u)
      vcd_submodules(dt, levels - 1u, backing);
  }
  
  void MOD_module_exec::vcd_defs(tVCDDumpType dt, MOD_module_exec &backing)
  {
    unsigned int num = vcd_num;
    if (dt == VCD_DUMP_XS)
    {
      vcd_write_x(num++, 66u);
      vcd_write_x(num++, 77u);
      vcd_write_x(num++, 65u);
    }
    else
      if (dt == VCD_DUMP_CHANGES)
      {
	if ((backing.DEF_IF_exec_dInst_BITS_64_TO_61_EQ_7_THEN_exec_cop_ETC___d32) != DEF_IF_exec_dInst_BITS_64_TO_61_EQ_7_THEN_exec_cop_ETC___d32)
	{
	  vcd_write_val(num, DEF_IF_exec_dInst_BITS_64_TO_61_EQ_7_THEN_exec_cop_ETC___d32, 66u);
	  backing.DEF_IF_exec_dInst_BITS_64_TO_61_EQ_7_THEN_exec_cop_ETC___d32 = DEF_IF_exec_dInst_BITS_64_TO_61_EQ_7_THEN_exec_cop_ETC___d32;
	}
	++num;
	if ((backing.PORT_exec) != PORT_exec)
	{
	  vcd_write_val(num, PORT_exec, 77u);
	  backing.PORT_exec = PORT_exec;
	}
	++num;
	if ((backing.PORT_exec_dInst) != PORT_exec_dInst)
	{
	  vcd_write_val(num, PORT_exec_dInst, 65u);
	  backing.PORT_exec_dInst = PORT_exec_dInst;
	}
	++num;
      }
      else
      {
	vcd_write_val(num++, DEF_IF_exec_dInst_BITS_64_TO_61_EQ_7_THEN_exec_cop_ETC___d32, 66u);
	backing.DEF_IF_exec_dInst_BITS_64_TO_61_EQ_7_THEN_exec_cop_ETC___d32 = DEF_IF_exec_dInst_BITS_64_TO_61_EQ_7_THEN_exec_cop_ETC___d32;
	vcd_write_val(num++, PORT_exec, 77u);
	backing.PORT_exec = PORT_exec;
	vcd_write_val(num++, PORT_exec_dInst, 65u);
	backing.PORT_exec_dInst = PORT_exec_dInst;
      }
  }
  
  void MOD_module_exec::vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_module_exec &backing)
  {
    INST_instance_aluBr_0.dump_VCD(dt, levels, backing.INST_instance_aluBr_0);
    INST_instance_alu_2.dump_VCD(dt, levels, backing.INST_instance_alu_2);
    INST_instance_brAddrCalc_1.dump_VCD(dt, levels, backing.INST_instance_brAddrCalc_1);
  }
}
