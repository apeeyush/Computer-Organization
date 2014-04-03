/*
 * Generated by Bluespec Compiler, version 2011.06.D (build 24470, 2011-06-30)
 * 
 * On Thu Apr  3 21:54:03 IST 2014
 * 
 */
#include "bluesim_primitives.h"
#include "mkDMemory.h"

namespace bluesim
{
  
  /* String declarations */
  static std::string const __str_literal_1("memory.vmh", 10u);
  
  
  /* Constructor */
  MOD_mkDMemory::MOD_mkDMemory(char const *name, Module *parent)
    : Module(name, parent),
      __clk_handle_0(BAD_CLOCK_HANDLE),
      INST_mem("mem", this, __str_literal_1, 26u, 32u, 0u, 67108863u, 0u),
      PORT_RST_N((tUInt8)1u)
  {
    PORT_req_r.setSize(65u);
    PORT_req_r.clear();
    symbol_count = 2u;
    symbols = new tSym[symbol_count];
    init_symbols_0();
  }
  
  
  /* Symbol init fns */
  
  void MOD_mkDMemory::init_symbols_0()
  {
    init_symbol(&symbols[0u], "mem", SYM_MODULE, &INST_mem);
    init_symbol(&symbols[1u], "req_r", SYM_PORT, &PORT_req_r, 65u);
  }
  
  
  /* Rule actions */
  
  
  /* Methods */
  
  tUInt32 MOD_mkDMemory::METH_req(tUWide ARG_req_r)
  {
    tUInt32 DEF_req__avValue1;
    tUInt32 PORT_req;
    tUInt8 DEF_req_r_BIT_64___d1;
    tUInt32 DEF_index__h229;
    tUInt32 DEF_x__h280;
    PORT_req_r = ARG_req_r;
    DEF_x__h280 = primExtract32(32u, 65u, ARG_req_r, 32u, 31u, 32u, 0u);
    DEF_index__h229 = primExtract32(26u, 65u, ARG_req_r, 32u, 59u, 32u, 34u);
    DEF_req_r_BIT_64___d1 = primExtract8(1u, 65u, ARG_req_r, 32u, 64u, 32u, 64u);
    DEF_req__avValue1 = INST_mem.METH_sub(DEF_index__h229);
    if (DEF_req_r_BIT_64___d1)
      INST_mem.METH_upd(DEF_index__h229, DEF_x__h280);
    PORT_req = DEF_req__avValue1;
    return PORT_req;
  }
  
  tUInt8 MOD_mkDMemory::METH_RDY_req()
  {
    tUInt8 PORT_RDY_req;
    tUInt8 DEF_CAN_FIRE_req;
    DEF_CAN_FIRE_req = (tUInt8)1u;
    PORT_RDY_req = DEF_CAN_FIRE_req;
    return PORT_RDY_req;
  }
  
  
  /* Reset routines */
  
  void MOD_mkDMemory::reset_RST_N(tUInt8 ARG_rst_in)
  {
    PORT_RST_N = ARG_rst_in;
  }
  
  
  /* Static handles to reset routines */
  
  
  /* Functions for the parent module to register its reset fns */
  
  
  /* Functions to set the elaborated clock id */
  
  void MOD_mkDMemory::set_clk_0(char const *s)
  {
    __clk_handle_0 = bk_get_or_define_clock(s);
  }
  
  
  /* State dumping routine */
  void MOD_mkDMemory::dump_state(unsigned int indent)
  {
    printf("%*s%s:\n", indent, "", inst_name);
    INST_mem.dump_state(indent + 2u);
  }
  
  
  /* VCD dumping routines */
  
  unsigned int MOD_mkDMemory::dump_VCD_defs(unsigned int levels)
  {
    fprintf(vcd_file, "$scope module %s $end\n", inst_name);
    vcd_num = vcd_reserve_ids(3u);
    unsigned int num = vcd_num;
    for (unsigned int hdl = 0u; hdl < bk_num_clocks(); ++hdl)
      vcd_add_clock_def(this, bk_clock_name(hdl), bk_clock_vcd_num(hdl));
    vcd_write_def(bk_clock_vcd_num(__clk_handle_0), "CLK", 1u);
    vcd_write_def(num++, "RST_N", 1u);
    vcd_set_clock(num, __clk_handle_0);
    vcd_write_def(num++, "req_r", 65u);
    num = INST_mem.dump_VCD_defs(num);
    fprintf(vcd_file, "$upscope $end\n");
    return num;
  }
  
  void MOD_mkDMemory::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkDMemory &backing)
  {
    vcd_defs(dt, backing);
    vcd_prims(dt, backing);
  }
  
  void MOD_mkDMemory::vcd_defs(tVCDDumpType dt, MOD_mkDMemory &backing)
  {
    unsigned int num = vcd_num;
    if (dt == VCD_DUMP_XS)
    {
      vcd_write_x(num++, 1u);
      vcd_write_x(num++, 65u);
    }
    else
      if (dt == VCD_DUMP_CHANGES)
      {
	if ((backing.PORT_RST_N) != PORT_RST_N)
	{
	  vcd_write_val(num, PORT_RST_N, 1u);
	  backing.PORT_RST_N = PORT_RST_N;
	}
	++num;
	if ((backing.PORT_req_r) != PORT_req_r)
	{
	  vcd_write_val(num, PORT_req_r, 65u);
	  backing.PORT_req_r = PORT_req_r;
	}
	++num;
      }
      else
      {
	vcd_write_val(num++, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
	vcd_write_val(num++, PORT_req_r, 65u);
	backing.PORT_req_r = PORT_req_r;
      }
  }
  
  void MOD_mkDMemory::vcd_prims(tVCDDumpType dt, MOD_mkDMemory &backing)
  {
    INST_mem.dump_VCD(dt, backing.INST_mem);
  }
}
