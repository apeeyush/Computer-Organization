/*
 * Generated by Bluespec Compiler, version 2011.06.D (build 24470, 2011-06-30)
 * 
 * On Sun Jan 26 12:10:16 IST 2014
 * 
 */
#include "bluesim_primitives.h"
#include "schedule.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"

#include "mkTbMultiplexer.h"

namespace bluesim
{
  
  /* Top-level module instances */
  static MOD_mkTbMultiplexer *mkTbMultiplexer_instance = NULL;
  
  
  /* Schedule functions */
  
  void schedule_posedge_CLK()
  {
    MOD_mkTbMultiplexer &INST_top = *mkTbMultiplexer_instance;
    tUInt8 DEF_INST_top_DEF_randomVal1_init__h143;
    tUInt8 DEF_INST_top_DEF_randomVal2_init__h266;
    tUInt8 DEF_INST_top_DEF_randomSel_init__h391;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal1_initialize;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal1_initialize;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal2_initialize;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal2_initialize;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_randomSel_initialize;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_randomSel_initialize;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_test;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_test;
    DEF_INST_top_DEF_randomSel_init__h391 = INST_top.INST_randomSel_init.METH_read();
    DEF_INST_top_DEF_CAN_FIRE_RL_randomSel_initialize = !DEF_INST_top_DEF_randomSel_init__h391;
    DEF_INST_top_DEF_WILL_FIRE_RL_randomSel_initialize = DEF_INST_top_DEF_CAN_FIRE_RL_randomSel_initialize;
    DEF_INST_top_DEF_randomVal1_init__h143 = INST_top.INST_randomVal1_init.METH_read();
    DEF_INST_top_DEF_CAN_FIRE_RL_randomVal1_initialize = !DEF_INST_top_DEF_randomVal1_init__h143;
    DEF_INST_top_DEF_WILL_FIRE_RL_randomVal1_initialize = DEF_INST_top_DEF_CAN_FIRE_RL_randomVal1_initialize;
    DEF_INST_top_DEF_randomVal2_init__h266 = INST_top.INST_randomVal2_init.METH_read();
    DEF_INST_top_DEF_CAN_FIRE_RL_randomVal2_initialize = !DEF_INST_top_DEF_randomVal2_init__h266;
    DEF_INST_top_DEF_WILL_FIRE_RL_randomVal2_initialize = DEF_INST_top_DEF_CAN_FIRE_RL_randomVal2_initialize;
    INST_top.DEF_x__h468 = INST_top.INST_cycle.METH_read();
    INST_top.DEF_cycle_EQ_128___d8 = (INST_top.DEF_x__h468) == 128u;
    DEF_INST_top_DEF_CAN_FIRE_RL_test = INST_top.DEF_cycle_EQ_128___d8 || (DEF_INST_top_DEF_randomVal1_init__h143 && (DEF_INST_top_DEF_randomVal2_init__h266 && DEF_INST_top_DEF_randomSel_init__h391));
    DEF_INST_top_DEF_WILL_FIRE_RL_test = DEF_INST_top_DEF_CAN_FIRE_RL_test;
    if (DEF_INST_top_DEF_WILL_FIRE_RL_test)
      INST_top.RL_test();
    if (DEF_INST_top_DEF_WILL_FIRE_RL_randomVal1_initialize)
      INST_top.RL_randomVal1_initialize();
    if (DEF_INST_top_DEF_WILL_FIRE_RL_randomVal2_initialize)
      INST_top.RL_randomVal2_initialize();
    if (DEF_INST_top_DEF_WILL_FIRE_RL_randomSel_initialize)
      INST_top.RL_randomSel_initialize();
    if (do_reset_ticks())
    {
      INST_top.INST_cycle.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_randomVal1_init.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_randomVal2_init.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_randomSel_init.rst_tick__clk__1((tUInt8)1u);
    }
  }
  
  /* Model creation/destruction functions */
  
  void create_model(bool master)
  {
    init_reset_request_counters();
    mkTbMultiplexer_instance = new MOD_mkTbMultiplexer("top", NULL);
    bk_get_or_define_clock("CLK");
    if (master)
    {
      bk_alter_clock(bk_get_clock_by_name("CLK"), CLK_LOW, false, 0llu, 5llu, 5llu);
      bk_use_default_reset();
    }
    bk_set_clock_event_fn(bk_get_clock_by_name("CLK"),
			  schedule_posedge_CLK,
			  NULL,
			  (tEdgeDirection)(POSEDGE));
    (mkTbMultiplexer_instance->set_clk_0)("CLK");
  }
  void destroy_model()
  {
    delete mkTbMultiplexer_instance;
    mkTbMultiplexer_instance = NULL;
  }
  void reset_model(bool asserted)
  {
    (mkTbMultiplexer_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
  }
  void * get_instance()
  {
    return mkTbMultiplexer_instance;
  }
  
  /* Fill in version numbers */
  void get_version(unsigned int *year,
		   unsigned int *month,
		   char const **annotation,
		   char const **build)
  {
    *year = 2011u;
    *month = 6u;
    *annotation = "D";
    *build = "24470";
  }
  
  /* Get the model creation time */
  time_t get_creation_time()
  {
    
    /* Sun Jan 26 06:40:16 UTC 2014 */
    return 1390718416llu;
  }
  
  /* Control run-time licensing */
  tUInt64 skip_license_check()
  {
    return 0llu;
  }
  
  /* State dumping function */
  void dump_state()
  {
    (mkTbMultiplexer_instance->dump_state)(0u);
  }
  
  /* VCD dumping functions */
  MOD_mkTbMultiplexer & mkTbMultiplexer_backing()
  {
    static MOD_mkTbMultiplexer *instance = NULL;
    if (instance == NULL)
    {
      vcd_set_backing_instance(true);
      instance = new MOD_mkTbMultiplexer("top", NULL);
      vcd_set_backing_instance(false);
    }
    return *instance;
  }
  void dump_VCD_defs()
  {
    (mkTbMultiplexer_instance->dump_VCD_defs)(vcd_depth);
  }
  void dump_VCD(tVCDDumpType dt)
  {
    (mkTbMultiplexer_instance->dump_VCD)(dt, vcd_depth, mkTbMultiplexer_backing());
  }
}
