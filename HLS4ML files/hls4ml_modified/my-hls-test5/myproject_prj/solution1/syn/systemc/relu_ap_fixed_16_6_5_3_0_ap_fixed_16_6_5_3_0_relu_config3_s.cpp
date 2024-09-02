// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<6> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_ST_fsm_state1 = "1";
const sc_lv<6> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_ST_fsm_state2 = "10";
const sc_lv<6> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_ST_fsm_state3 = "100";
const sc_lv<6> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_ST_fsm_state4 = "1000";
const sc_lv<6> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_ST_fsm_state5 = "10000";
const sc_lv<6> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_ST_fsm_state6 = "100000";
const sc_lv<32> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv32_1 = "1";
const sc_lv<1> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv1_0 = "0";
const sc_lv<32> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv32_2 = "10";
const sc_lv<32> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv32_3 = "11";
const sc_lv<32> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv32_4 = "100";
const sc_lv<32> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv32_5 = "101";
const sc_lv<15> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv15_0 = "000000000000000";
const sc_lv<31> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv31_0 = "0000000000000000000000000000000";
const sc_lv<4> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv4_6 = "110";
const sc_lv<4> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv4_5 = "101";
const sc_lv<4> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv4_4 = "100";
const sc_lv<4> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv4_3 = "11";
const sc_lv<4> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv4_2 = "10";
const sc_lv<4> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv4_1 = "1";
const sc_lv<4> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv4_0 = "0000";
const sc_lv<15> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv15_5900 = "101100100000000";
const sc_lv<15> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv15_1 = "1";
const sc_lv<31> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv31_B818 = "1011100000011000";
const sc_lv<32> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv32_1B = "11011";
const sc_lv<32> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv32_1E = "11110";
const sc_lv<16> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv16_0 = "0000000000000000";
const sc_lv<15> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv15_B20 = "101100100000";
const sc_lv<1> relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_lv1_1 = "1";
const bool relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::ap_const_boolean_1 = true;

relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s(sc_module_name name) : sc_module(name), mVcdFile(0) {
    myproject_mux_832_16_1_1_U550 = new myproject_mux_832_16_1_1<1,1,16,16,16,16,16,16,16,16,32,16>("myproject_mux_832_16_1_1_U550");
    myproject_mux_832_16_1_1_U550->din0(data_0_V_load_reg_485);
    myproject_mux_832_16_1_1_U550->din1(data_1_V_load_reg_490);
    myproject_mux_832_16_1_1_U550->din2(data_2_V_load_reg_495);
    myproject_mux_832_16_1_1_U550->din3(data_3_V_load_reg_500);
    myproject_mux_832_16_1_1_U550->din4(data_4_V_load_reg_505);
    myproject_mux_832_16_1_1_U550->din5(data_5_V_load_reg_510);
    myproject_mux_832_16_1_1_U550->din6(data_6_V_load_reg_515);
    myproject_mux_832_16_1_1_U550->din7(data_7_V_load_reg_520);
    myproject_mux_832_16_1_1_U550->din8(datareg_V_fu_359_p9);
    myproject_mux_832_16_1_1_U550->dout(datareg_V_fu_359_p10);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_316_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_316_p2 );

    SC_METHOD(thread_data_0_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( newIndex1_fu_344_p1 );

    SC_METHOD(thread_data_0_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_data_1_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( newIndex1_fu_344_p1 );

    SC_METHOD(thread_data_1_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_data_2_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( newIndex1_fu_344_p1 );

    SC_METHOD(thread_data_2_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_data_3_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( newIndex1_fu_344_p1 );

    SC_METHOD(thread_data_3_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_data_4_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( newIndex1_fu_344_p1 );

    SC_METHOD(thread_data_4_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_data_5_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( newIndex1_fu_344_p1 );

    SC_METHOD(thread_data_5_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_data_6_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( newIndex1_fu_344_p1 );

    SC_METHOD(thread_data_6_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_data_7_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( newIndex1_fu_344_p1 );

    SC_METHOD(thread_data_7_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_datareg_V_3_fu_383_p3);
    sensitive << ( tmp_30_reg_525 );
    sensitive << ( tmp_s_reg_530 );

    SC_METHOD(thread_datareg_V_fu_359_p9);
    sensitive << ( tmp_29_reg_428 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_idx_urem_fu_408_p3);
    sensitive << ( next_urem_reg_535 );
    sensitive << ( tmp_31_fu_403_p2 );

    SC_METHOD(thread_ii_3_fu_322_p2);
    sensitive << ( ii_reg_282 );

    SC_METHOD(thread_newIndex1_fu_344_p1);
    sensitive << ( phi_urem_reg_304 );

    SC_METHOD(thread_next_mul_fu_328_p2);
    sensitive << ( phi_mul_reg_293 );

    SC_METHOD(thread_next_urem_fu_397_p2);
    sensitive << ( phi_urem_reg_304 );

    SC_METHOD(thread_res_0_V_address0);
    sensitive << ( newIndex1_reg_433 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_0_V_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_0_V_d0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( datareg_V_3_fu_383_p3 );

    SC_METHOD(thread_res_0_V_we0);
    sensitive << ( tmp_29_reg_428 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_1_V_address0);
    sensitive << ( newIndex1_reg_433 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_1_V_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_1_V_d0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( datareg_V_3_fu_383_p3 );

    SC_METHOD(thread_res_1_V_we0);
    sensitive << ( tmp_29_reg_428 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_2_V_address0);
    sensitive << ( newIndex1_reg_433 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_2_V_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_2_V_d0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( datareg_V_3_fu_383_p3 );

    SC_METHOD(thread_res_2_V_we0);
    sensitive << ( tmp_29_reg_428 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_3_V_address0);
    sensitive << ( newIndex1_reg_433 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_3_V_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_3_V_d0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( datareg_V_3_fu_383_p3 );

    SC_METHOD(thread_res_3_V_we0);
    sensitive << ( tmp_29_reg_428 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_4_V_address0);
    sensitive << ( newIndex1_reg_433 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_4_V_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_4_V_d0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( datareg_V_3_fu_383_p3 );

    SC_METHOD(thread_res_4_V_we0);
    sensitive << ( tmp_29_reg_428 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_5_V_address0);
    sensitive << ( newIndex1_reg_433 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_5_V_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_5_V_d0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( datareg_V_3_fu_383_p3 );

    SC_METHOD(thread_res_5_V_we0);
    sensitive << ( tmp_29_reg_428 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_6_V_address0);
    sensitive << ( newIndex1_reg_433 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_6_V_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_6_V_d0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( datareg_V_3_fu_383_p3 );

    SC_METHOD(thread_res_6_V_we0);
    sensitive << ( tmp_29_reg_428 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_7_V_address0);
    sensitive << ( newIndex1_reg_433 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_7_V_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_res_7_V_d0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( datareg_V_3_fu_383_p3 );

    SC_METHOD(thread_res_7_V_we0);
    sensitive << ( tmp_29_reg_428 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_tmp_30_fu_373_p1);
    sensitive << ( datareg_V_fu_359_p10 );

    SC_METHOD(thread_tmp_31_fu_403_p2);
    sensitive << ( next_urem_reg_535 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_tmp_fu_316_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ii_reg_282 );

    SC_METHOD(thread_tmp_s_fu_377_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( datareg_V_fu_359_p10 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_316_p2 );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, data_0_V_address0, "(port)data_0_V_address0");
    sc_trace(mVcdFile, data_0_V_ce0, "(port)data_0_V_ce0");
    sc_trace(mVcdFile, data_0_V_q0, "(port)data_0_V_q0");
    sc_trace(mVcdFile, data_1_V_address0, "(port)data_1_V_address0");
    sc_trace(mVcdFile, data_1_V_ce0, "(port)data_1_V_ce0");
    sc_trace(mVcdFile, data_1_V_q0, "(port)data_1_V_q0");
    sc_trace(mVcdFile, data_2_V_address0, "(port)data_2_V_address0");
    sc_trace(mVcdFile, data_2_V_ce0, "(port)data_2_V_ce0");
    sc_trace(mVcdFile, data_2_V_q0, "(port)data_2_V_q0");
    sc_trace(mVcdFile, data_3_V_address0, "(port)data_3_V_address0");
    sc_trace(mVcdFile, data_3_V_ce0, "(port)data_3_V_ce0");
    sc_trace(mVcdFile, data_3_V_q0, "(port)data_3_V_q0");
    sc_trace(mVcdFile, data_4_V_address0, "(port)data_4_V_address0");
    sc_trace(mVcdFile, data_4_V_ce0, "(port)data_4_V_ce0");
    sc_trace(mVcdFile, data_4_V_q0, "(port)data_4_V_q0");
    sc_trace(mVcdFile, data_5_V_address0, "(port)data_5_V_address0");
    sc_trace(mVcdFile, data_5_V_ce0, "(port)data_5_V_ce0");
    sc_trace(mVcdFile, data_5_V_q0, "(port)data_5_V_q0");
    sc_trace(mVcdFile, data_6_V_address0, "(port)data_6_V_address0");
    sc_trace(mVcdFile, data_6_V_ce0, "(port)data_6_V_ce0");
    sc_trace(mVcdFile, data_6_V_q0, "(port)data_6_V_q0");
    sc_trace(mVcdFile, data_7_V_address0, "(port)data_7_V_address0");
    sc_trace(mVcdFile, data_7_V_ce0, "(port)data_7_V_ce0");
    sc_trace(mVcdFile, data_7_V_q0, "(port)data_7_V_q0");
    sc_trace(mVcdFile, res_0_V_address0, "(port)res_0_V_address0");
    sc_trace(mVcdFile, res_0_V_ce0, "(port)res_0_V_ce0");
    sc_trace(mVcdFile, res_0_V_we0, "(port)res_0_V_we0");
    sc_trace(mVcdFile, res_0_V_d0, "(port)res_0_V_d0");
    sc_trace(mVcdFile, res_1_V_address0, "(port)res_1_V_address0");
    sc_trace(mVcdFile, res_1_V_ce0, "(port)res_1_V_ce0");
    sc_trace(mVcdFile, res_1_V_we0, "(port)res_1_V_we0");
    sc_trace(mVcdFile, res_1_V_d0, "(port)res_1_V_d0");
    sc_trace(mVcdFile, res_2_V_address0, "(port)res_2_V_address0");
    sc_trace(mVcdFile, res_2_V_ce0, "(port)res_2_V_ce0");
    sc_trace(mVcdFile, res_2_V_we0, "(port)res_2_V_we0");
    sc_trace(mVcdFile, res_2_V_d0, "(port)res_2_V_d0");
    sc_trace(mVcdFile, res_3_V_address0, "(port)res_3_V_address0");
    sc_trace(mVcdFile, res_3_V_ce0, "(port)res_3_V_ce0");
    sc_trace(mVcdFile, res_3_V_we0, "(port)res_3_V_we0");
    sc_trace(mVcdFile, res_3_V_d0, "(port)res_3_V_d0");
    sc_trace(mVcdFile, res_4_V_address0, "(port)res_4_V_address0");
    sc_trace(mVcdFile, res_4_V_ce0, "(port)res_4_V_ce0");
    sc_trace(mVcdFile, res_4_V_we0, "(port)res_4_V_we0");
    sc_trace(mVcdFile, res_4_V_d0, "(port)res_4_V_d0");
    sc_trace(mVcdFile, res_5_V_address0, "(port)res_5_V_address0");
    sc_trace(mVcdFile, res_5_V_ce0, "(port)res_5_V_ce0");
    sc_trace(mVcdFile, res_5_V_we0, "(port)res_5_V_we0");
    sc_trace(mVcdFile, res_5_V_d0, "(port)res_5_V_d0");
    sc_trace(mVcdFile, res_6_V_address0, "(port)res_6_V_address0");
    sc_trace(mVcdFile, res_6_V_ce0, "(port)res_6_V_ce0");
    sc_trace(mVcdFile, res_6_V_we0, "(port)res_6_V_we0");
    sc_trace(mVcdFile, res_6_V_d0, "(port)res_6_V_d0");
    sc_trace(mVcdFile, res_7_V_address0, "(port)res_7_V_address0");
    sc_trace(mVcdFile, res_7_V_ce0, "(port)res_7_V_ce0");
    sc_trace(mVcdFile, res_7_V_we0, "(port)res_7_V_we0");
    sc_trace(mVcdFile, res_7_V_d0, "(port)res_7_V_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, ii_3_fu_322_p2, "ii_3_fu_322_p2");
    sc_trace(mVcdFile, ii_3_reg_418, "ii_3_reg_418");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, next_mul_fu_328_p2, "next_mul_fu_328_p2");
    sc_trace(mVcdFile, next_mul_reg_423, "next_mul_reg_423");
    sc_trace(mVcdFile, tmp_fu_316_p2, "tmp_fu_316_p2");
    sc_trace(mVcdFile, tmp_29_reg_428, "tmp_29_reg_428");
    sc_trace(mVcdFile, newIndex1_fu_344_p1, "newIndex1_fu_344_p1");
    sc_trace(mVcdFile, newIndex1_reg_433, "newIndex1_reg_433");
    sc_trace(mVcdFile, data_0_V_load_reg_485, "data_0_V_load_reg_485");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, data_1_V_load_reg_490, "data_1_V_load_reg_490");
    sc_trace(mVcdFile, data_2_V_load_reg_495, "data_2_V_load_reg_495");
    sc_trace(mVcdFile, data_3_V_load_reg_500, "data_3_V_load_reg_500");
    sc_trace(mVcdFile, data_4_V_load_reg_505, "data_4_V_load_reg_505");
    sc_trace(mVcdFile, data_5_V_load_reg_510, "data_5_V_load_reg_510");
    sc_trace(mVcdFile, data_6_V_load_reg_515, "data_6_V_load_reg_515");
    sc_trace(mVcdFile, data_7_V_load_reg_520, "data_7_V_load_reg_520");
    sc_trace(mVcdFile, tmp_30_fu_373_p1, "tmp_30_fu_373_p1");
    sc_trace(mVcdFile, tmp_30_reg_525, "tmp_30_reg_525");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, tmp_s_fu_377_p2, "tmp_s_fu_377_p2");
    sc_trace(mVcdFile, tmp_s_reg_530, "tmp_s_reg_530");
    sc_trace(mVcdFile, next_urem_fu_397_p2, "next_urem_fu_397_p2");
    sc_trace(mVcdFile, next_urem_reg_535, "next_urem_reg_535");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, idx_urem_fu_408_p3, "idx_urem_fu_408_p3");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, ii_reg_282, "ii_reg_282");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, phi_mul_reg_293, "phi_mul_reg_293");
    sc_trace(mVcdFile, phi_urem_reg_304, "phi_urem_reg_304");
    sc_trace(mVcdFile, datareg_V_3_fu_383_p3, "datareg_V_3_fu_383_p3");
    sc_trace(mVcdFile, datareg_V_fu_359_p9, "datareg_V_fu_359_p9");
    sc_trace(mVcdFile, datareg_V_fu_359_p10, "datareg_V_fu_359_p10");
    sc_trace(mVcdFile, tmp_31_fu_403_p2, "tmp_31_fu_403_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::~relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete myproject_mux_832_16_1_1_U550;
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(tmp_fu_316_p2.read(), ap_const_lv1_1))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ii_reg_282 = ii_3_reg_418.read();
    } else if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ii_reg_282 = ap_const_lv15_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        phi_mul_reg_293 = next_mul_reg_423.read();
    } else if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        phi_mul_reg_293 = ap_const_lv31_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        phi_urem_reg_304 = idx_urem_fu_408_p3.read();
    } else if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        phi_urem_reg_304 = ap_const_lv15_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_0_V_load_reg_485 = data_0_V_q0.read();
        data_1_V_load_reg_490 = data_1_V_q0.read();
        data_2_V_load_reg_495 = data_2_V_q0.read();
        data_3_V_load_reg_500 = data_3_V_q0.read();
        data_4_V_load_reg_505 = data_4_V_q0.read();
        data_5_V_load_reg_510 = data_5_V_q0.read();
        data_6_V_load_reg_515 = data_6_V_q0.read();
        data_7_V_load_reg_520 = data_7_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        ii_3_reg_418 = ii_3_fu_322_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(tmp_fu_316_p2.read(), ap_const_lv1_0))) {
        newIndex1_reg_433 = newIndex1_fu_344_p1.read();
        next_mul_reg_423 = next_mul_fu_328_p2.read();
        tmp_29_reg_428 = phi_mul_reg_293.read().range(30, 27);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        next_urem_reg_535 = next_urem_fu_397_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        tmp_30_reg_525 = tmp_30_fu_373_p1.read();
        tmp_s_reg_530 = tmp_s_fu_377_p2.read();
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(tmp_fu_316_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(tmp_fu_316_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_0_V_address0() {
    data_0_V_address0 =  (sc_lv<12>) (newIndex1_fu_344_p1.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_0_V_ce0 = ap_const_logic_1;
    } else {
        data_0_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_1_V_address0() {
    data_1_V_address0 =  (sc_lv<12>) (newIndex1_fu_344_p1.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_1_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_1_V_ce0 = ap_const_logic_1;
    } else {
        data_1_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_2_V_address0() {
    data_2_V_address0 =  (sc_lv<12>) (newIndex1_fu_344_p1.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_2_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_2_V_ce0 = ap_const_logic_1;
    } else {
        data_2_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_3_V_address0() {
    data_3_V_address0 =  (sc_lv<12>) (newIndex1_fu_344_p1.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_3_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_3_V_ce0 = ap_const_logic_1;
    } else {
        data_3_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_4_V_address0() {
    data_4_V_address0 =  (sc_lv<12>) (newIndex1_fu_344_p1.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_4_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_4_V_ce0 = ap_const_logic_1;
    } else {
        data_4_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_5_V_address0() {
    data_5_V_address0 =  (sc_lv<12>) (newIndex1_fu_344_p1.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_5_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_5_V_ce0 = ap_const_logic_1;
    } else {
        data_5_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_6_V_address0() {
    data_6_V_address0 =  (sc_lv<12>) (newIndex1_fu_344_p1.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_6_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_6_V_ce0 = ap_const_logic_1;
    } else {
        data_6_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_7_V_address0() {
    data_7_V_address0 =  (sc_lv<12>) (newIndex1_fu_344_p1.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_data_7_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_7_V_ce0 = ap_const_logic_1;
    } else {
        data_7_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_datareg_V_3_fu_383_p3() {
    datareg_V_3_fu_383_p3 = (!tmp_s_reg_530.read()[0].is_01())? sc_lv<15>(): ((tmp_s_reg_530.read()[0].to_bool())? tmp_30_reg_525.read(): ap_const_lv15_0);
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_datareg_V_fu_359_p9() {
    datareg_V_fu_359_p9 = esl_zext<32,4>(tmp_29_reg_428.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_idx_urem_fu_408_p3() {
    idx_urem_fu_408_p3 = (!tmp_31_fu_403_p2.read()[0].is_01())? sc_lv<15>(): ((tmp_31_fu_403_p2.read()[0].to_bool())? next_urem_reg_535.read(): ap_const_lv15_0);
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_ii_3_fu_322_p2() {
    ii_3_fu_322_p2 = (!ii_reg_282.read().is_01() || !ap_const_lv15_1.is_01())? sc_lv<15>(): (sc_biguint<15>(ii_reg_282.read()) + sc_biguint<15>(ap_const_lv15_1));
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_newIndex1_fu_344_p1() {
    newIndex1_fu_344_p1 = esl_zext<64,15>(phi_urem_reg_304.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_next_mul_fu_328_p2() {
    next_mul_fu_328_p2 = (!ap_const_lv31_B818.is_01() || !phi_mul_reg_293.read().is_01())? sc_lv<31>(): (sc_biguint<31>(ap_const_lv31_B818) + sc_biguint<31>(phi_mul_reg_293.read()));
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_next_urem_fu_397_p2() {
    next_urem_fu_397_p2 = (!phi_urem_reg_304.read().is_01() || !ap_const_lv15_1.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_urem_reg_304.read()) + sc_biguint<15>(ap_const_lv15_1));
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_0_V_address0() {
    res_0_V_address0 =  (sc_lv<12>) (newIndex1_reg_433.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_0_V_ce0 = ap_const_logic_1;
    } else {
        res_0_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_0_V_d0() {
    res_0_V_d0 = datareg_V_3_fu_383_p3.read();
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,4,4>(tmp_29_reg_428.read(), ap_const_lv4_0))) {
        res_0_V_we0 = ap_const_logic_1;
    } else {
        res_0_V_we0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_1_V_address0() {
    res_1_V_address0 =  (sc_lv<12>) (newIndex1_reg_433.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_1_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_1_V_ce0 = ap_const_logic_1;
    } else {
        res_1_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_1_V_d0() {
    res_1_V_d0 = datareg_V_3_fu_383_p3.read();
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,4,4>(tmp_29_reg_428.read(), ap_const_lv4_1))) {
        res_1_V_we0 = ap_const_logic_1;
    } else {
        res_1_V_we0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_2_V_address0() {
    res_2_V_address0 =  (sc_lv<12>) (newIndex1_reg_433.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_2_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_2_V_ce0 = ap_const_logic_1;
    } else {
        res_2_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_2_V_d0() {
    res_2_V_d0 = datareg_V_3_fu_383_p3.read();
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,4,4>(tmp_29_reg_428.read(), ap_const_lv4_2))) {
        res_2_V_we0 = ap_const_logic_1;
    } else {
        res_2_V_we0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_3_V_address0() {
    res_3_V_address0 =  (sc_lv<12>) (newIndex1_reg_433.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_3_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_3_V_ce0 = ap_const_logic_1;
    } else {
        res_3_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_3_V_d0() {
    res_3_V_d0 = datareg_V_3_fu_383_p3.read();
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,4,4>(tmp_29_reg_428.read(), ap_const_lv4_3))) {
        res_3_V_we0 = ap_const_logic_1;
    } else {
        res_3_V_we0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_4_V_address0() {
    res_4_V_address0 =  (sc_lv<12>) (newIndex1_reg_433.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_4_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_4_V_ce0 = ap_const_logic_1;
    } else {
        res_4_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_4_V_d0() {
    res_4_V_d0 = datareg_V_3_fu_383_p3.read();
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,4,4>(tmp_29_reg_428.read(), ap_const_lv4_4))) {
        res_4_V_we0 = ap_const_logic_1;
    } else {
        res_4_V_we0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_5_V_address0() {
    res_5_V_address0 =  (sc_lv<12>) (newIndex1_reg_433.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_5_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_5_V_ce0 = ap_const_logic_1;
    } else {
        res_5_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_5_V_d0() {
    res_5_V_d0 = datareg_V_3_fu_383_p3.read();
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,4,4>(tmp_29_reg_428.read(), ap_const_lv4_5))) {
        res_5_V_we0 = ap_const_logic_1;
    } else {
        res_5_V_we0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_6_V_address0() {
    res_6_V_address0 =  (sc_lv<12>) (newIndex1_reg_433.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_6_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_6_V_ce0 = ap_const_logic_1;
    } else {
        res_6_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_6_V_d0() {
    res_6_V_d0 = datareg_V_3_fu_383_p3.read();
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,4,4>(tmp_29_reg_428.read(), ap_const_lv4_6))) {
        res_6_V_we0 = ap_const_logic_1;
    } else {
        res_6_V_we0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_7_V_address0() {
    res_7_V_address0 =  (sc_lv<12>) (newIndex1_reg_433.read());
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_7_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_7_V_ce0 = ap_const_logic_1;
    } else {
        res_7_V_ce0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_7_V_d0() {
    res_7_V_d0 = datareg_V_3_fu_383_p3.read();
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_res_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !esl_seteq<1,4,4>(tmp_29_reg_428.read(), ap_const_lv4_0) && 
         !esl_seteq<1,4,4>(tmp_29_reg_428.read(), ap_const_lv4_1) && 
         !esl_seteq<1,4,4>(tmp_29_reg_428.read(), ap_const_lv4_2) && 
         !esl_seteq<1,4,4>(tmp_29_reg_428.read(), ap_const_lv4_3) && 
         !esl_seteq<1,4,4>(tmp_29_reg_428.read(), ap_const_lv4_4) && 
         !esl_seteq<1,4,4>(tmp_29_reg_428.read(), ap_const_lv4_5) && 
         !esl_seteq<1,4,4>(tmp_29_reg_428.read(), ap_const_lv4_6))) {
        res_7_V_we0 = ap_const_logic_1;
    } else {
        res_7_V_we0 = ap_const_logic_0;
    }
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_tmp_30_fu_373_p1() {
    tmp_30_fu_373_p1 = datareg_V_fu_359_p10.read().range(15-1, 0);
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_tmp_31_fu_403_p2() {
    tmp_31_fu_403_p2 = (!next_urem_reg_535.read().is_01() || !ap_const_lv15_B20.is_01())? sc_lv<1>(): (sc_biguint<15>(next_urem_reg_535.read()) < sc_biguint<15>(ap_const_lv15_B20));
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_tmp_fu_316_p2() {
    tmp_fu_316_p2 = (!ii_reg_282.read().is_01() || !ap_const_lv15_5900.is_01())? sc_lv<1>(): sc_lv<1>(ii_reg_282.read() == ap_const_lv15_5900);
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_tmp_s_fu_377_p2() {
    tmp_s_fu_377_p2 = (!datareg_V_fu_359_p10.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): (sc_bigint<16>(datareg_V_fu_359_p10.read()) > sc_bigint<16>(ap_const_lv16_0));
}

void relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(tmp_fu_316_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm = "XXXXXX";
            break;
    }
}

}

