/*
 * Generated by Bluespec Compiler, version 2011.06.D (build 24470, 2011-06-30)
 * 
 * On Sun Feb  2 19:04:14 IST 2014
 * 
 */
#include "bluesim_primitives.h"
#include "schedule.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"

#include "mkBoothTb.h"

namespace bluesim
{
  
  /* Top-level module instances */
  static MOD_mkBoothTb *mkBoothTb_instance = NULL;
  
  
  /* Schedule functions */
  
  void schedule_posedge_CLK()
  {
    MOD_mkBoothTb &INST_top = *mkBoothTb_instance;
    tUInt8 DEF_INST_top_DEF_mult_i_EQ_16___d2;
    tUInt8 DEF_INST_top_DEF_randomVal1_init__h861;
    tUInt8 DEF_INST_top_DEF_randomVal2_init__h975;
    tUInt8 DEF_INST_top_DEF_f_enqEn_dummy2__h14185;
    tUInt8 DEF_INST_top_DEF_f_enqEn_dummy2_1__h14197;
    tUInt8 DEF_INST_top_DEF_f_deqEn_dummy2__h14967;
    tUInt8 DEF_INST_top_DEF_f_deqEn_dummy2_1__h14979;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_mult_mulStep;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_mult_mulStep;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal1_initialize;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal1_initialize;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal2_initialize;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal2_initialize;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_f_enqP_canon;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_f_enqP_canon;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_f_deqP_canon;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_f_deqP_canon;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_f_enqEn_canon;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_f_enqEn_canon;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_f_deqEn_canon;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_f_deqEn_canon;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_f_tempData_canon;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_f_tempData_canon;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_f_tempEnqP_canon;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_f_tempEnqP_canon;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_f_canonicalize;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_f_canonicalize;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_enq;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_enq;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_deq;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_deq;
    tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_fin;
    tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_fin;
    INST_top.DEF_f_deqEn_dummy2_2__h11741 = INST_top.INST_f_deqEn_dummy2_2.METH_read();
    INST_top.DEF_x__h15872 = INST_top.INST_deqCount.METH_read();
    INST_top.DEF__read__h193 = INST_top.INST_mult_i.METH_read();
    INST_top.DEF_f_deqEn_rl__h7670 = INST_top.INST_f_deqEn_rl.METH_read();
    DEF_INST_top_DEF_f_deqEn_dummy2_1__h14979 = INST_top.INST_f_deqEn_dummy2_1.METH_read();
    DEF_INST_top_DEF_f_deqEn_dummy2__h14967 = INST_top.INST_f_deqEn_dummy2.METH_read();
    DEF_INST_top_DEF_mult_i_EQ_16___d2 = (INST_top.DEF__read__h193) == (tUInt8)16u;
    DEF_INST_top_DEF_CAN_FIRE_RL_deq = (DEF_INST_top_DEF_mult_i_EQ_16___d2 && ((DEF_INST_top_DEF_f_deqEn_dummy2__h14967 && DEF_INST_top_DEF_f_deqEn_dummy2_1__h14979) && INST_top.DEF_f_deqEn_dummy2_2__h11741 ? INST_top.DEF_f_deqEn_rl__h7670 : INST_top.DEF_f_deqEn_rl__h7670)) && (INST_top.DEF_x__h15872) < 12u;
    DEF_INST_top_DEF_WILL_FIRE_RL_deq = DEF_INST_top_DEF_CAN_FIRE_RL_deq;
    INST_top.DEF_f_enqEn_dummy2_2__h10238 = INST_top.INST_f_enqEn_dummy2_2.METH_read();
    INST_top.DEF_x__h14887 = INST_top.INST_enqCount.METH_read();
    INST_top.DEF_f_enqEn_rl__h6069 = INST_top.INST_f_enqEn_rl.METH_read();
    DEF_INST_top_DEF_f_enqEn_dummy2_1__h14197 = INST_top.INST_f_enqEn_dummy2_1.METH_read();
    DEF_INST_top_DEF_f_enqEn_dummy2__h14185 = INST_top.INST_f_enqEn_dummy2.METH_read();
    DEF_INST_top_DEF_randomVal1_init__h861 = INST_top.INST_randomVal1_init.METH_read();
    DEF_INST_top_DEF_randomVal2_init__h975 = INST_top.INST_randomVal2_init.METH_read();
    DEF_INST_top_DEF_CAN_FIRE_RL_enq = (DEF_INST_top_DEF_mult_i_EQ_16___d2 && (DEF_INST_top_DEF_randomVal1_init__h861 && (DEF_INST_top_DEF_randomVal2_init__h975 && ((DEF_INST_top_DEF_f_enqEn_dummy2__h14185 && DEF_INST_top_DEF_f_enqEn_dummy2_1__h14197) && INST_top.DEF_f_enqEn_dummy2_2__h10238 ? INST_top.DEF_f_enqEn_rl__h6069 : INST_top.DEF_f_enqEn_rl__h6069)))) && (INST_top.DEF_x__h14887) < 12u;
    DEF_INST_top_DEF_WILL_FIRE_RL_enq = DEF_INST_top_DEF_CAN_FIRE_RL_enq;
    DEF_INST_top_DEF_CAN_FIRE_RL_f_canonicalize = (tUInt8)1u;
    DEF_INST_top_DEF_WILL_FIRE_RL_f_canonicalize = DEF_INST_top_DEF_CAN_FIRE_RL_f_canonicalize;
    DEF_INST_top_DEF_CAN_FIRE_RL_f_deqEn_canon = (tUInt8)1u;
    DEF_INST_top_DEF_WILL_FIRE_RL_f_deqEn_canon = DEF_INST_top_DEF_CAN_FIRE_RL_f_deqEn_canon;
    DEF_INST_top_DEF_CAN_FIRE_RL_f_deqP_canon = (tUInt8)1u;
    DEF_INST_top_DEF_WILL_FIRE_RL_f_deqP_canon = DEF_INST_top_DEF_CAN_FIRE_RL_f_deqP_canon;
    DEF_INST_top_DEF_CAN_FIRE_RL_f_enqP_canon = (tUInt8)1u;
    DEF_INST_top_DEF_WILL_FIRE_RL_f_enqP_canon = DEF_INST_top_DEF_CAN_FIRE_RL_f_enqP_canon;
    DEF_INST_top_DEF_CAN_FIRE_RL_f_enqEn_canon = (tUInt8)1u;
    DEF_INST_top_DEF_WILL_FIRE_RL_f_enqEn_canon = DEF_INST_top_DEF_CAN_FIRE_RL_f_enqEn_canon;
    DEF_INST_top_DEF_CAN_FIRE_RL_f_tempData_canon = (tUInt8)1u;
    DEF_INST_top_DEF_WILL_FIRE_RL_f_tempData_canon = DEF_INST_top_DEF_CAN_FIRE_RL_f_tempData_canon;
    DEF_INST_top_DEF_CAN_FIRE_RL_f_tempEnqP_canon = (tUInt8)1u;
    DEF_INST_top_DEF_WILL_FIRE_RL_f_tempEnqP_canon = DEF_INST_top_DEF_CAN_FIRE_RL_f_tempEnqP_canon;
    DEF_INST_top_DEF_CAN_FIRE_RL_fin = (INST_top.DEF_x__h15872) == 12u;
    DEF_INST_top_DEF_WILL_FIRE_RL_fin = DEF_INST_top_DEF_CAN_FIRE_RL_fin;
    DEF_INST_top_DEF_CAN_FIRE_RL_mult_mulStep = !DEF_INST_top_DEF_mult_i_EQ_16___d2;
    DEF_INST_top_DEF_WILL_FIRE_RL_mult_mulStep = DEF_INST_top_DEF_CAN_FIRE_RL_mult_mulStep;
    DEF_INST_top_DEF_CAN_FIRE_RL_randomVal2_initialize = !DEF_INST_top_DEF_randomVal2_init__h975;
    DEF_INST_top_DEF_WILL_FIRE_RL_randomVal2_initialize = DEF_INST_top_DEF_CAN_FIRE_RL_randomVal2_initialize;
    DEF_INST_top_DEF_CAN_FIRE_RL_randomVal1_initialize = !DEF_INST_top_DEF_randomVal1_init__h861;
    DEF_INST_top_DEF_WILL_FIRE_RL_randomVal1_initialize = DEF_INST_top_DEF_CAN_FIRE_RL_randomVal1_initialize;
    if (DEF_INST_top_DEF_WILL_FIRE_RL_deq)
      INST_top.RL_deq();
    if (DEF_INST_top_DEF_WILL_FIRE_RL_enq)
      INST_top.RL_enq();
    if (DEF_INST_top_DEF_WILL_FIRE_RL_f_canonicalize)
      INST_top.RL_f_canonicalize();
    if (DEF_INST_top_DEF_WILL_FIRE_RL_f_deqEn_canon)
      INST_top.RL_f_deqEn_canon();
    if (DEF_INST_top_DEF_WILL_FIRE_RL_f_deqP_canon)
      INST_top.RL_f_deqP_canon();
    if (DEF_INST_top_DEF_WILL_FIRE_RL_f_enqEn_canon)
      INST_top.RL_f_enqEn_canon();
    if (DEF_INST_top_DEF_WILL_FIRE_RL_f_enqP_canon)
      INST_top.RL_f_enqP_canon();
    if (DEF_INST_top_DEF_WILL_FIRE_RL_f_tempData_canon)
      INST_top.RL_f_tempData_canon();
    if (DEF_INST_top_DEF_WILL_FIRE_RL_f_tempEnqP_canon)
      INST_top.RL_f_tempEnqP_canon();
    if (DEF_INST_top_DEF_WILL_FIRE_RL_fin)
      INST_top.RL_fin();
    if (DEF_INST_top_DEF_WILL_FIRE_RL_mult_mulStep)
      INST_top.RL_mult_mulStep();
    if (DEF_INST_top_DEF_WILL_FIRE_RL_randomVal1_initialize)
      INST_top.RL_randomVal1_initialize();
    if (DEF_INST_top_DEF_WILL_FIRE_RL_randomVal2_initialize)
      INST_top.RL_randomVal2_initialize();
    INST_top.INST_f_tempEnqP_dummy_3.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_tempEnqP_dummy_2.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_tempEnqP_dummy_1.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_tempEnqP_dummy.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_tempEnqP_lat_1.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_tempEnqP_lat.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_tempData_dummy_3.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_tempData_dummy_2.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_tempData_dummy_1.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_tempData_dummy.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_tempData_lat_1.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_tempData_lat.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqEn_dummy_8.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqEn_dummy_7.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqEn_dummy_6.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqEn_dummy_5.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqEn_dummy_4.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqEn_dummy_3.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqEn_dummy_2.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqEn_dummy_1.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqEn_dummy.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqEn_lat_2.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqEn_lat_1.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqEn_lat.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqEn_dummy_8.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqEn_dummy_7.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqEn_dummy_6.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqEn_dummy_5.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqEn_dummy_4.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqEn_dummy_3.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqEn_dummy_2.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqEn_dummy_1.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqEn_dummy.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqEn_lat_2.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqEn_lat_1.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqEn_lat.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqP_dummy_8.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqP_dummy_7.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqP_dummy_6.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqP_dummy_5.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqP_dummy_4.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqP_dummy_3.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqP_dummy_2.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqP_dummy_1.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqP_dummy.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqP_lat_2.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqP_lat_1.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_deqP_lat.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqP_dummy_8.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqP_dummy_7.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqP_dummy_6.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqP_dummy_5.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqP_dummy_4.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqP_dummy_3.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqP_dummy_2.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqP_dummy_1.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqP_dummy.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqP_lat_2.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqP_lat_1.clk((tUInt8)1u, (tUInt8)1u);
    INST_top.INST_f_enqP_lat.clk((tUInt8)1u, (tUInt8)1u);
    if (do_reset_ticks())
    {
      INST_top.INST_mult_i.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_enqCount.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_deqCount.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_randomVal1_init.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_randomVal2_init.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_enqP_dummy2.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_enqP_dummy2_1.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_enqP_dummy2_2.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_enqP_rl.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_deqP_dummy2.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_deqP_dummy2_1.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_deqP_dummy2_2.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_deqP_rl.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_enqEn_dummy2.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_enqEn_dummy2_1.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_enqEn_dummy2_2.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_enqEn_rl.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_deqEn_dummy2.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_deqEn_dummy2_1.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_deqEn_dummy2_2.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_deqEn_rl.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_tempData_dummy2.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_tempData_dummy2_1.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_tempData_rl.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_tempEnqP_dummy2.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_tempEnqP_dummy2_1.rst_tick__clk__1((tUInt8)1u);
      INST_top.INST_f_tempEnqP_rl.rst_tick__clk__1((tUInt8)1u);
    }
  }
  
  /* Model creation/destruction functions */
  
  void create_model(bool master)
  {
    init_reset_request_counters();
    mkBoothTb_instance = new MOD_mkBoothTb("top", NULL);
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
    (mkBoothTb_instance->INST_f_enqP_lat.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqP_lat_1.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqP_lat_2.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqP_dummy.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqP_dummy_1.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqP_dummy_2.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqP_dummy_3.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqP_dummy_4.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqP_dummy_5.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqP_dummy_6.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqP_dummy_7.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqP_dummy_8.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqP_lat.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqP_lat_1.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqP_lat_2.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqP_dummy.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqP_dummy_1.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqP_dummy_2.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqP_dummy_3.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqP_dummy_4.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqP_dummy_5.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqP_dummy_6.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqP_dummy_7.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqP_dummy_8.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqEn_lat.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqEn_lat_1.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqEn_lat_2.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqEn_dummy.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqEn_dummy_1.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqEn_dummy_2.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqEn_dummy_3.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqEn_dummy_4.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqEn_dummy_5.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqEn_dummy_6.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqEn_dummy_7.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_enqEn_dummy_8.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqEn_lat.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqEn_lat_1.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqEn_lat_2.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqEn_dummy.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqEn_dummy_1.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqEn_dummy_2.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqEn_dummy_3.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqEn_dummy_4.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqEn_dummy_5.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqEn_dummy_6.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqEn_dummy_7.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_deqEn_dummy_8.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_tempData_lat.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_tempData_lat_1.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_tempData_dummy.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_tempData_dummy_1.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_tempData_dummy_2.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_tempData_dummy_3.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_tempEnqP_lat.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_tempEnqP_lat_1.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_tempEnqP_dummy.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_tempEnqP_dummy_1.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_tempEnqP_dummy_2.set_clk_0)("CLK");
    (mkBoothTb_instance->INST_f_tempEnqP_dummy_3.set_clk_0)("CLK");
    (mkBoothTb_instance->set_clk_0)("CLK");
  }
  void destroy_model()
  {
    delete mkBoothTb_instance;
    mkBoothTb_instance = NULL;
  }
  void reset_model(bool asserted)
  {
    (mkBoothTb_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
  }
  void * get_instance()
  {
    return mkBoothTb_instance;
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
    
    /* Sun Feb  2 13:34:14 UTC 2014 */
    return 1391348054llu;
  }
  
  /* Control run-time licensing */
  tUInt64 skip_license_check()
  {
    return 0llu;
  }
  
  /* State dumping function */
  void dump_state()
  {
    (mkBoothTb_instance->dump_state)(0u);
  }
  
  /* VCD dumping functions */
  MOD_mkBoothTb & mkBoothTb_backing()
  {
    static MOD_mkBoothTb *instance = NULL;
    if (instance == NULL)
    {
      vcd_set_backing_instance(true);
      instance = new MOD_mkBoothTb("top", NULL);
      vcd_set_backing_instance(false);
    }
    return *instance;
  }
  void dump_VCD_defs()
  {
    (mkBoothTb_instance->dump_VCD_defs)(vcd_depth);
  }
  void dump_VCD(tVCDDumpType dt)
  {
    (mkBoothTb_instance->dump_VCD)(dt, vcd_depth, mkBoothTb_backing());
  }
}
