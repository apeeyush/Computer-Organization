/*
 * Generated by Bluespec Compiler, version 2011.06.D (build 24470, 2011-06-30)
 * 
 * On Sun Jan 26 12:10:16 IST 2014
 * 
 */
#include "bluesim_primitives.h"
#include "mkTbMultiplexer.h"
#include "imported_BDPI_functions.h"

namespace bluesim
{
  
  /* String declarations */
  static std::string const __str_literal_2("FAILED Sel %b from %d, %d gave %d instead of %d", 47u);
  static std::string const __str_literal_1("PASSED", 6u);
  
  
  /* Constructor */
  MOD_mkTbMultiplexer::MOD_mkTbMultiplexer(char const *name, Module *parent)
    : Module(name, parent),
      __clk_handle_0(BAD_CLOCK_HANDLE),
      INST_cycle("cycle", this, 32u, 0u, (tUInt8)0u),
      INST_randomSel_init("randomSel_init", this, 1u, (tUInt8)0u, (tUInt8)0u),
      INST_randomVal1_init("randomVal1_init", this, 1u, (tUInt8)0u, (tUInt8)0u),
      INST_randomVal2_init("randomVal2_init", this, 1u, (tUInt8)0u, (tUInt8)0u),
      PORT_RST_N((tUInt8)1u),
      DEF_TASK_getRandom___d13(2863311530u),
      DEF_TASK_getRandom___d201(2863311530u),
      DEF_TASK_getRandom___d200(2863311530u)
  {
    symbol_count = 9u;
    symbols = new tSym[symbol_count];
    init_symbols_0();
  }
  
  
  /* Symbol init fns */
  
  void MOD_mkTbMultiplexer::init_symbols_0()
  {
    init_symbol(&symbols[0u], "cycle", SYM_MODULE, &INST_cycle);
    init_symbol(&symbols[1u], "RL_randomSel_initialize", SYM_RULE);
    init_symbol(&symbols[2u], "RL_randomVal1_initialize", SYM_RULE);
    init_symbol(&symbols[3u], "RL_randomVal2_initialize", SYM_RULE);
    init_symbol(&symbols[4u], "RL_test", SYM_RULE);
    init_symbol(&symbols[5u], "randomSel_init", SYM_MODULE, &INST_randomSel_init);
    init_symbol(&symbols[6u], "randomVal1_init", SYM_MODULE, &INST_randomVal1_init);
    init_symbol(&symbols[7u], "randomVal2_init", SYM_MODULE, &INST_randomVal2_init);
    init_symbol(&symbols[8u], "x__h468", SYM_DEF, &DEF_x__h468, 32u);
  }
  
  
  /* Rule actions */
  
  void MOD_mkTbMultiplexer::RL_randomVal1_initialize()
  {
    if (!(PORT_RST_N == (tUInt8)0u))
      setSeed(3735928559u);
    INST_randomVal1_init.METH_write((tUInt8)1u);
  }
  
  void MOD_mkTbMultiplexer::RL_randomVal2_initialize()
  {
    if (!(PORT_RST_N == (tUInt8)0u))
      setSeed(3405691582u);
    INST_randomVal2_init.METH_write((tUInt8)1u);
  }
  
  void MOD_mkTbMultiplexer::RL_randomSel_initialize()
  {
    if (!(PORT_RST_N == (tUInt8)0u))
      setSeed(4028476190u);
    INST_randomSel_init.METH_write((tUInt8)1u);
  }
  
  void MOD_mkTbMultiplexer::RL_test()
  {
    tUInt32 DEF_x__h3919;
    tUInt8 DEF_b__h1988;
    tUInt8 DEF_a__h1987;
    tUInt8 DEF_b__h1930;
    tUInt8 DEF_a__h1929;
    tUInt8 DEF_b__h2046;
    tUInt8 DEF_a__h2045;
    tUInt8 DEF_b__h2104;
    tUInt8 DEF_a__h2103;
    tUInt8 DEF_b__h2162;
    tUInt8 DEF_a__h2161;
    tUInt8 DEF_b__h2220;
    tUInt8 DEF_a__h2219;
    tUInt8 DEF_b__h2278;
    tUInt8 DEF_a__h2277;
    tUInt8 DEF_b__h2336;
    tUInt8 DEF_a__h2335;
    tUInt8 DEF_b__h2394;
    tUInt8 DEF_a__h2393;
    tUInt8 DEF_b__h2452;
    tUInt8 DEF_a__h2451;
    tUInt8 DEF_b__h2510;
    tUInt8 DEF_a__h2509;
    tUInt8 DEF_b__h2568;
    tUInt8 DEF_a__h2567;
    tUInt8 DEF_b__h2626;
    tUInt8 DEF_a__h2625;
    tUInt8 DEF_b__h2684;
    tUInt8 DEF_a__h2683;
    tUInt8 DEF_b__h2742;
    tUInt8 DEF_a__h2741;
    tUInt8 DEF_b__h2800;
    tUInt8 DEF_a__h2799;
    tUInt8 DEF_b__h2858;
    tUInt8 DEF_a__h2857;
    tUInt8 DEF_b__h2916;
    tUInt8 DEF_a__h2915;
    tUInt8 DEF_b__h2974;
    tUInt8 DEF_a__h2973;
    tUInt8 DEF_b__h3032;
    tUInt8 DEF_a__h3031;
    tUInt8 DEF_b__h3090;
    tUInt8 DEF_a__h3089;
    tUInt8 DEF_b__h3148;
    tUInt8 DEF_a__h3147;
    tUInt8 DEF_b__h3206;
    tUInt8 DEF_a__h3205;
    tUInt8 DEF_b__h3264;
    tUInt8 DEF_a__h3263;
    tUInt8 DEF_b__h3322;
    tUInt8 DEF_a__h3321;
    tUInt8 DEF_b__h3380;
    tUInt8 DEF_a__h3379;
    tUInt8 DEF_b__h3438;
    tUInt8 DEF_a__h3437;
    tUInt8 DEF_b__h3496;
    tUInt8 DEF_a__h3495;
    tUInt8 DEF_b__h3554;
    tUInt8 DEF_a__h3553;
    tUInt8 DEF_b__h3612;
    tUInt8 DEF_a__h3611;
    tUInt8 DEF_b__h3670;
    tUInt8 DEF_a__h3669;
    tUInt8 DEF_b__h3728;
    tUInt8 DEF_a__h3727;
    tUInt32 DEF_test__h1132;
    tUInt8 DEF_a__h1931;
    tUInt8 DEF_NOT_cycle_EQ_128___d12;
    tUInt8 DEF_NOT_cycle_EQ_128_2_AND_NOT_INV_TASK_getRandom__ETC___d198;
    tUInt32 DEF_x__h1146;
    tUInt32 DEF_realAns__h1133;
    tUInt8 DEF_a__h3725;
    tUInt8 DEF_a__h3667;
    tUInt8 DEF_a__h3609;
    tUInt8 DEF_a__h3551;
    tUInt8 DEF_a__h3493;
    tUInt8 DEF_a__h3435;
    tUInt8 DEF_a__h3377;
    tUInt8 DEF_a__h3319;
    tUInt8 DEF_a__h3261;
    tUInt8 DEF_a__h3203;
    tUInt8 DEF_a__h3145;
    tUInt8 DEF_a__h3087;
    tUInt8 DEF_a__h3029;
    tUInt8 DEF_a__h2971;
    tUInt8 DEF_a__h2913;
    tUInt8 DEF_a__h2855;
    tUInt8 DEF_a__h2797;
    tUInt8 DEF_a__h2739;
    tUInt8 DEF_a__h2681;
    tUInt8 DEF_a__h2623;
    tUInt8 DEF_a__h2565;
    tUInt8 DEF_a__h2507;
    tUInt8 DEF_a__h2449;
    tUInt8 DEF_a__h2391;
    tUInt8 DEF_a__h2333;
    tUInt8 DEF_a__h2275;
    tUInt8 DEF_a__h2217;
    tUInt8 DEF_a__h2159;
    tUInt8 DEF_a__h2101;
    tUInt8 DEF_a__h2043;
    tUInt8 DEF_a__h1985;
    tUInt8 DEF_a__h1927;
    tUInt8 DEF_v__h932;
    tUInt8 DEF_b__h3726;
    tUInt8 DEF_b__h3668;
    tUInt8 DEF_b__h3610;
    tUInt8 DEF_b__h3552;
    tUInt8 DEF_b__h3494;
    tUInt8 DEF_b__h3436;
    tUInt8 DEF_b__h3378;
    tUInt8 DEF_b__h3320;
    tUInt8 DEF_b__h3262;
    tUInt8 DEF_b__h3204;
    tUInt8 DEF_b__h3146;
    tUInt8 DEF_b__h3088;
    tUInt8 DEF_b__h3030;
    tUInt8 DEF_b__h2972;
    tUInt8 DEF_b__h2914;
    tUInt8 DEF_b__h2856;
    tUInt8 DEF_b__h2798;
    tUInt8 DEF_b__h2740;
    tUInt8 DEF_b__h2682;
    tUInt8 DEF_b__h2624;
    tUInt8 DEF_b__h2566;
    tUInt8 DEF_b__h2508;
    tUInt8 DEF_b__h2450;
    tUInt8 DEF_b__h2392;
    tUInt8 DEF_b__h2334;
    tUInt8 DEF_b__h2276;
    tUInt8 DEF_b__h2218;
    tUInt8 DEF_b__h2160;
    tUInt8 DEF_b__h2102;
    tUInt8 DEF_b__h2044;
    tUInt8 DEF_b__h1986;
    tUInt8 DEF_b__h1928;
    DEF_x__h468 = INST_cycle.METH_read();
    DEF_cycle_EQ_128___d8 = DEF_x__h468 == 128u;
    DEF_NOT_cycle_EQ_128___d12 = !DEF_cycle_EQ_128___d8;
    DEF_x__h3919 = DEF_x__h468 + 1u;
    if (!(PORT_RST_N == (tUInt8)0u))
    {
      if (DEF_cycle_EQ_128___d8)
	dollar_display(this, "s", &__str_literal_1);
      if (DEF_cycle_EQ_128___d8)
	dollar_finish("32", 1u);
      if (DEF_NOT_cycle_EQ_128___d12)
	DEF_TASK_getRandom___d200 = getRandom();
    }
    DEF_a__h1927 = (tUInt8)(DEF_TASK_getRandom___d200 >> 31u);
    DEF_a__h1985 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 30u));
    DEF_a__h2043 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 29u));
    DEF_a__h2101 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 28u));
    DEF_a__h2159 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 27u));
    DEF_a__h2217 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 26u));
    DEF_a__h2275 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 25u));
    DEF_a__h2333 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 24u));
    DEF_a__h2391 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 23u));
    DEF_a__h2449 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 22u));
    DEF_a__h2507 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 21u));
    DEF_a__h2565 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 20u));
    DEF_a__h2681 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 18u));
    DEF_a__h2623 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 19u));
    DEF_a__h2739 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 17u));
    DEF_a__h2797 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 16u));
    DEF_a__h2855 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 15u));
    DEF_a__h2913 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 14u));
    DEF_a__h2971 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 13u));
    DEF_a__h3029 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 12u));
    DEF_a__h3087 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 11u));
    DEF_a__h3145 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 10u));
    DEF_a__h3203 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 9u));
    DEF_a__h3261 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 8u));
    DEF_a__h3319 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 7u));
    DEF_a__h3609 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 2u));
    DEF_a__h3377 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 6u));
    DEF_a__h3435 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 5u));
    DEF_a__h3493 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 4u));
    DEF_a__h3551 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 3u));
    DEF_a__h3667 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d200 >> 1u));
    DEF_a__h3725 = (tUInt8)((tUInt8)1u & DEF_TASK_getRandom___d200);
    if (!(PORT_RST_N == (tUInt8)0u))
      if (DEF_NOT_cycle_EQ_128___d12)
	DEF_TASK_getRandom___d201 = getRandom();
    DEF_b__h1928 = (tUInt8)(DEF_TASK_getRandom___d201 >> 31u);
    DEF_b__h1986 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 30u));
    DEF_b__h2044 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 29u));
    DEF_b__h2102 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 28u));
    DEF_b__h2160 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 27u));
    DEF_b__h2218 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 26u));
    DEF_b__h2276 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 25u));
    DEF_b__h2392 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 23u));
    DEF_b__h2334 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 24u));
    DEF_b__h2450 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 22u));
    DEF_b__h2508 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 21u));
    DEF_b__h2566 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 20u));
    DEF_b__h2682 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 18u));
    DEF_b__h2624 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 19u));
    DEF_b__h2740 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 17u));
    DEF_b__h2798 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 16u));
    DEF_b__h2914 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 14u));
    DEF_b__h2856 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 15u));
    DEF_b__h2972 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 13u));
    DEF_b__h3030 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 12u));
    DEF_b__h3088 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 11u));
    DEF_b__h3146 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 10u));
    DEF_b__h3262 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 8u));
    DEF_b__h3204 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 9u));
    DEF_b__h3320 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 7u));
    DEF_b__h3378 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 6u));
    DEF_b__h3436 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 5u));
    DEF_b__h3552 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 3u));
    DEF_b__h3494 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 4u));
    DEF_b__h3610 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 2u));
    DEF_b__h3668 = (tUInt8)((tUInt8)1u & (DEF_TASK_getRandom___d201 >> 1u));
    DEF_b__h3726 = (tUInt8)((tUInt8)1u & DEF_TASK_getRandom___d201);
    if (!(PORT_RST_N == (tUInt8)0u))
      if (DEF_NOT_cycle_EQ_128___d12)
	DEF_TASK_getRandom___d13 = getRandom();
    DEF_v__h932 = (tUInt8)((tUInt8)1u & DEF_TASK_getRandom___d13);
    DEF_realAns__h1133 = DEF_v__h932 ? DEF_TASK_getRandom___d201 : DEF_TASK_getRandom___d200;
    DEF_a__h1931 = (tUInt8)1u & ~DEF_v__h932;
    DEF_a__h3727 = DEF_a__h1931 & DEF_a__h3725;
    DEF_b__h3728 = DEF_v__h932 & DEF_b__h3726;
    DEF_a__h3669 = DEF_a__h1931 & DEF_a__h3667;
    DEF_b__h3670 = DEF_v__h932 & DEF_b__h3668;
    DEF_a__h3611 = DEF_a__h1931 & DEF_a__h3609;
    DEF_b__h3612 = DEF_v__h932 & DEF_b__h3610;
    DEF_a__h3553 = DEF_a__h1931 & DEF_a__h3551;
    DEF_b__h3554 = DEF_v__h932 & DEF_b__h3552;
    DEF_a__h3495 = DEF_a__h1931 & DEF_a__h3493;
    DEF_b__h3496 = DEF_v__h932 & DEF_b__h3494;
    DEF_a__h3437 = DEF_a__h1931 & DEF_a__h3435;
    DEF_b__h3438 = DEF_v__h932 & DEF_b__h3436;
    DEF_a__h3379 = DEF_a__h1931 & DEF_a__h3377;
    DEF_b__h3380 = DEF_v__h932 & DEF_b__h3378;
    DEF_a__h3321 = DEF_a__h1931 & DEF_a__h3319;
    DEF_b__h3322 = DEF_v__h932 & DEF_b__h3320;
    DEF_a__h3263 = DEF_a__h1931 & DEF_a__h3261;
    DEF_b__h3264 = DEF_v__h932 & DEF_b__h3262;
    DEF_a__h3205 = DEF_a__h1931 & DEF_a__h3203;
    DEF_b__h3206 = DEF_v__h932 & DEF_b__h3204;
    DEF_a__h3147 = DEF_a__h1931 & DEF_a__h3145;
    DEF_b__h3148 = DEF_v__h932 & DEF_b__h3146;
    DEF_a__h3089 = DEF_a__h1931 & DEF_a__h3087;
    DEF_b__h3090 = DEF_v__h932 & DEF_b__h3088;
    DEF_a__h3031 = DEF_a__h1931 & DEF_a__h3029;
    DEF_b__h3032 = DEF_v__h932 & DEF_b__h3030;
    DEF_a__h2973 = DEF_a__h1931 & DEF_a__h2971;
    DEF_b__h2974 = DEF_v__h932 & DEF_b__h2972;
    DEF_a__h2915 = DEF_a__h1931 & DEF_a__h2913;
    DEF_b__h2916 = DEF_v__h932 & DEF_b__h2914;
    DEF_a__h2857 = DEF_a__h1931 & DEF_a__h2855;
    DEF_b__h2858 = DEF_v__h932 & DEF_b__h2856;
    DEF_a__h2799 = DEF_a__h1931 & DEF_a__h2797;
    DEF_b__h2800 = DEF_v__h932 & DEF_b__h2798;
    DEF_a__h2741 = DEF_a__h1931 & DEF_a__h2739;
    DEF_b__h2742 = DEF_v__h932 & DEF_b__h2740;
    DEF_a__h2683 = DEF_a__h1931 & DEF_a__h2681;
    DEF_b__h2684 = DEF_v__h932 & DEF_b__h2682;
    DEF_a__h2625 = DEF_a__h1931 & DEF_a__h2623;
    DEF_b__h2626 = DEF_v__h932 & DEF_b__h2624;
    DEF_a__h2567 = DEF_a__h1931 & DEF_a__h2565;
    DEF_b__h2568 = DEF_v__h932 & DEF_b__h2566;
    DEF_a__h2509 = DEF_a__h1931 & DEF_a__h2507;
    DEF_b__h2510 = DEF_v__h932 & DEF_b__h2508;
    DEF_a__h2451 = DEF_a__h1931 & DEF_a__h2449;
    DEF_b__h2452 = DEF_v__h932 & DEF_b__h2450;
    DEF_a__h2393 = DEF_a__h1931 & DEF_a__h2391;
    DEF_b__h2394 = DEF_v__h932 & DEF_b__h2392;
    DEF_a__h2335 = DEF_a__h1931 & DEF_a__h2333;
    DEF_b__h2336 = DEF_v__h932 & DEF_b__h2334;
    DEF_a__h2277 = DEF_a__h1931 & DEF_a__h2275;
    DEF_b__h2278 = DEF_v__h932 & DEF_b__h2276;
    DEF_a__h2219 = DEF_a__h1931 & DEF_a__h2217;
    DEF_b__h2220 = DEF_v__h932 & DEF_b__h2218;
    DEF_a__h2161 = DEF_a__h1931 & DEF_a__h2159;
    DEF_b__h2162 = DEF_v__h932 & DEF_b__h2160;
    DEF_a__h2103 = DEF_a__h1931 & DEF_a__h2101;
    DEF_b__h2104 = DEF_v__h932 & DEF_b__h2102;
    DEF_a__h2045 = DEF_a__h1931 & DEF_a__h2043;
    DEF_b__h2046 = DEF_v__h932 & DEF_b__h2044;
    DEF_a__h1929 = DEF_a__h1931 & DEF_a__h1927;
    DEF_b__h1930 = DEF_v__h932 & DEF_b__h1928;
    if (DEF_NOT_cycle_EQ_128___d12)
      INST_cycle.METH_write(DEF_x__h3919);
    DEF_a__h1987 = DEF_a__h1931 & DEF_a__h1985;
    DEF_b__h1988 = DEF_v__h932 & DEF_b__h1986;
    DEF_test__h1132 = ((65535u & ((((tUInt32)((tUInt8)255u & ((((tUInt8)15u & ((((tUInt8)3u & (((DEF_a__h1929 | DEF_b__h1930) << 1u) | (DEF_a__h1987 | DEF_b__h1988))) << 2u) | ((tUInt8)3u & (((DEF_a__h2045 | DEF_b__h2046) << 1u) | (DEF_a__h2103 | DEF_b__h2104))))) << 4u) | ((tUInt8)15u & ((((tUInt8)3u & (((DEF_a__h2161 | DEF_b__h2162) << 1u) | (DEF_a__h2219 | DEF_b__h2220))) << 2u) | ((tUInt8)3u & (((DEF_a__h2277 | DEF_b__h2278) << 1u) | (DEF_a__h2335 | DEF_b__h2336)))))))) << 8u) | (tUInt32)((tUInt8)255u & ((((tUInt8)15u & ((((tUInt8)3u & (((DEF_a__h2393 | DEF_b__h2394) << 1u) | (DEF_a__h2451 | DEF_b__h2452))) << 2u) | ((tUInt8)3u & (((DEF_a__h2509 | DEF_b__h2510) << 1u) | (DEF_a__h2567 | DEF_b__h2568))))) << 4u) | ((tUInt8)15u & ((((tUInt8)3u & (((DEF_a__h2625 | DEF_b__h2626) << 1u) | (DEF_a__h2683 | DEF_b__h2684))) << 2u) | ((tUInt8)3u & (((DEF_a__h2741 | DEF_b__h2742) << 1u) | (DEF_a__h2799 | DEF_b__h2800))))))))) << 16u) | (65535u & ((((tUInt32)((tUInt8)255u & ((((tUInt8)15u & ((((tUInt8)3u & (((DEF_a__h2857 | DEF_b__h2858) << 1u) | (DEF_a__h2915 | DEF_b__h2916))) << 2u) | ((tUInt8)3u & (((DEF_a__h2973 | DEF_b__h2974) << 1u) | (DEF_a__h3031 | DEF_b__h3032))))) << 4u) | ((tUInt8)15u & ((((tUInt8)3u & (((DEF_a__h3089 | DEF_b__h3090) << 1u) | (DEF_a__h3147 | DEF_b__h3148))) << 2u) | ((tUInt8)3u & (((DEF_a__h3205 | DEF_b__h3206) << 1u) | (DEF_a__h3263 | DEF_b__h3264)))))))) << 8u) | (tUInt32)((tUInt8)255u & ((((tUInt8)15u & ((((tUInt8)3u & (((DEF_a__h3321 | DEF_b__h3322) << 1u) | (DEF_a__h3379 | DEF_b__h3380))) << 2u) | ((tUInt8)3u & (((DEF_a__h3437 | DEF_b__h3438) << 1u) | (DEF_a__h3495 | DEF_b__h3496))))) << 4u) | ((tUInt8)15u & ((((tUInt8)3u & (((DEF_a__h3553 | DEF_b__h3554) << 1u) | (DEF_a__h3611 | DEF_b__h3612))) << 2u) | ((tUInt8)3u & (((DEF_a__h3669 | DEF_b__h3670) << 1u) | (DEF_a__h3727 | DEF_b__h3728)))))))));
    DEF_x__h1146 = DEF_test__h1132 ^ DEF_realAns__h1133;
    DEF_NOT_cycle_EQ_128_2_AND_NOT_INV_TASK_getRandom__ETC___d198 = DEF_NOT_cycle_EQ_128___d12 && !(DEF_x__h1146 == 0u);
    if (!(PORT_RST_N == (tUInt8)0u))
    {
      if (DEF_NOT_cycle_EQ_128_2_AND_NOT_INV_TASK_getRandom__ETC___d198)
	dollar_display(this,
		       "s,1,32,32,32,32",
		       &__str_literal_2,
		       DEF_v__h932,
		       DEF_TASK_getRandom___d200,
		       DEF_TASK_getRandom___d201,
		       DEF_test__h1132,
		       DEF_realAns__h1133);
      if (DEF_NOT_cycle_EQ_128_2_AND_NOT_INV_TASK_getRandom__ETC___d198)
	dollar_finish("32", 1u);
    }
  }
  
  
  /* Methods */
  
  
  /* Reset routines */
  
  void MOD_mkTbMultiplexer::reset_RST_N(tUInt8 ARG_rst_in)
  {
    PORT_RST_N = ARG_rst_in;
    INST_randomVal2_init.reset_RST_N(ARG_rst_in);
    INST_randomVal1_init.reset_RST_N(ARG_rst_in);
    INST_randomSel_init.reset_RST_N(ARG_rst_in);
    INST_cycle.reset_RST_N(ARG_rst_in);
  }
  
  
  /* Static handles to reset routines */
  
  
  /* Functions for the parent module to register its reset fns */
  
  
  /* Functions to set the elaborated clock id */
  
  void MOD_mkTbMultiplexer::set_clk_0(char const *s)
  {
    __clk_handle_0 = bk_get_or_define_clock(s);
  }
  
  
  /* State dumping routine */
  void MOD_mkTbMultiplexer::dump_state(unsigned int indent)
  {
    printf("%*s%s:\n", indent, "", inst_name);
    INST_cycle.dump_state(indent + 2u);
    INST_randomSel_init.dump_state(indent + 2u);
    INST_randomVal1_init.dump_state(indent + 2u);
    INST_randomVal2_init.dump_state(indent + 2u);
  }
  
  
  /* VCD dumping routines */
  
  unsigned int MOD_mkTbMultiplexer::dump_VCD_defs(unsigned int levels)
  {
    fprintf(vcd_file, "$scope module %s $end\n", inst_name);
    vcd_num = vcd_reserve_ids(10u);
    unsigned int num = vcd_num;
    for (unsigned int hdl = 0u; hdl < bk_num_clocks(); ++hdl)
      vcd_add_clock_def(this, bk_clock_name(hdl), bk_clock_vcd_num(hdl));
    vcd_write_def(bk_clock_vcd_num(__clk_handle_0), "CLK", 1u);
    vcd_write_def(num++, "RST_N", 1u);
    vcd_set_clock(num, __clk_handle_0);
    vcd_write_def(num++, "TASK_getRandom___d13", 32u);
    vcd_set_clock(num, __clk_handle_0);
    vcd_write_def(num++, "TASK_getRandom___d200", 32u);
    vcd_set_clock(num, __clk_handle_0);
    vcd_write_def(num++, "TASK_getRandom___d201", 32u);
    vcd_set_clock(num, __clk_handle_0);
    vcd_write_def(num++, "cycle_EQ_128___d8", 1u);
    vcd_set_clock(num, __clk_handle_0);
    vcd_write_def(num++, "x__h468", 32u);
    num = INST_cycle.dump_VCD_defs(num);
    num = INST_randomSel_init.dump_VCD_defs(num);
    num = INST_randomVal1_init.dump_VCD_defs(num);
    num = INST_randomVal2_init.dump_VCD_defs(num);
    fprintf(vcd_file, "$upscope $end\n");
    return num;
  }
  
  void MOD_mkTbMultiplexer::dump_VCD(tVCDDumpType dt,
				     unsigned int levels,
				     MOD_mkTbMultiplexer &backing)
  {
    vcd_defs(dt, backing);
    vcd_prims(dt, backing);
  }
  
  void MOD_mkTbMultiplexer::vcd_defs(tVCDDumpType dt, MOD_mkTbMultiplexer &backing)
  {
    unsigned int num = vcd_num;
    if (dt == VCD_DUMP_XS)
    {
      vcd_write_x(num++, 1u);
      vcd_write_x(num++, 32u);
      vcd_write_x(num++, 32u);
      vcd_write_x(num++, 32u);
      vcd_write_x(num++, 1u);
      vcd_write_x(num++, 32u);
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
	if ((backing.DEF_TASK_getRandom___d13) != DEF_TASK_getRandom___d13)
	{
	  vcd_write_val(num, DEF_TASK_getRandom___d13, 32u);
	  backing.DEF_TASK_getRandom___d13 = DEF_TASK_getRandom___d13;
	}
	++num;
	if ((backing.DEF_TASK_getRandom___d200) != DEF_TASK_getRandom___d200)
	{
	  vcd_write_val(num, DEF_TASK_getRandom___d200, 32u);
	  backing.DEF_TASK_getRandom___d200 = DEF_TASK_getRandom___d200;
	}
	++num;
	if ((backing.DEF_TASK_getRandom___d201) != DEF_TASK_getRandom___d201)
	{
	  vcd_write_val(num, DEF_TASK_getRandom___d201, 32u);
	  backing.DEF_TASK_getRandom___d201 = DEF_TASK_getRandom___d201;
	}
	++num;
	if ((backing.DEF_cycle_EQ_128___d8) != DEF_cycle_EQ_128___d8)
	{
	  vcd_write_val(num, DEF_cycle_EQ_128___d8, 1u);
	  backing.DEF_cycle_EQ_128___d8 = DEF_cycle_EQ_128___d8;
	}
	++num;
	if ((backing.DEF_x__h468) != DEF_x__h468)
	{
	  vcd_write_val(num, DEF_x__h468, 32u);
	  backing.DEF_x__h468 = DEF_x__h468;
	}
	++num;
      }
      else
      {
	vcd_write_val(num++, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
	vcd_write_val(num++, DEF_TASK_getRandom___d13, 32u);
	backing.DEF_TASK_getRandom___d13 = DEF_TASK_getRandom___d13;
	vcd_write_val(num++, DEF_TASK_getRandom___d200, 32u);
	backing.DEF_TASK_getRandom___d200 = DEF_TASK_getRandom___d200;
	vcd_write_val(num++, DEF_TASK_getRandom___d201, 32u);
	backing.DEF_TASK_getRandom___d201 = DEF_TASK_getRandom___d201;
	vcd_write_val(num++, DEF_cycle_EQ_128___d8, 1u);
	backing.DEF_cycle_EQ_128___d8 = DEF_cycle_EQ_128___d8;
	vcd_write_val(num++, DEF_x__h468, 32u);
	backing.DEF_x__h468 = DEF_x__h468;
      }
  }
  
  void MOD_mkTbMultiplexer::vcd_prims(tVCDDumpType dt, MOD_mkTbMultiplexer &backing)
  {
    INST_cycle.dump_VCD(dt, backing.INST_cycle);
    INST_randomSel_init.dump_VCD(dt, backing.INST_randomSel_init);
    INST_randomVal1_init.dump_VCD(dt, backing.INST_randomVal1_init);
    INST_randomVal2_init.dump_VCD(dt, backing.INST_randomVal2_init);
  }
}
