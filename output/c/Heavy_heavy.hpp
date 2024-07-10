/**
 * Copyright (c) 2024 Enzien Audio, Ltd.
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions, and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the phrase "powered by heavy",
 *    the heavy logo, and a hyperlink to https://enzienaudio.com, all in a visible
 *    form.
 * 
 *   2.1 If the Application is distributed in a store system (for example,
 *       the Apple "App Store" or "Google Play"), the phrase "powered by heavy"
 *       shall be included in the app description or the copyright text as well as
 *       the in the app itself. The heavy logo will shall be visible in the app
 *       itself as well.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

#ifndef _HEAVY_CONTEXT_HEAVY_HPP_
#define _HEAVY_CONTEXT_HEAVY_HPP_

// object includes
#include "HeavyContext.hpp"
#include "HvControlVar.h"
#include "HvSignalVar.h"
#include "HvControlBinop.h"
#include "HvTable.h"
#include "HvSignalTabwrite.h"
#include "HvSignalTabread.h"
#include "HvControlCast.h"
#include "HvControlSlice.h"
#include "HvMath.h"
#include "HvControlPack.h"
#include "HvControlDelay.h"
#include "HvControlSystem.h"
#include "HvControlUnop.h"
#include "HvSignalLine.h"

class Heavy_heavy : public HeavyContext {

 public:
  Heavy_heavy(double sampleRate, int poolKb=10, int inQueueKb=2, int outQueueKb=0);
  ~Heavy_heavy();

  const char *getName() override { return "heavy"; }
  int getNumInputChannels() override { return 1; }
  int getNumOutputChannels() override { return 2; }

  int process(float **inputBuffers, float **outputBuffer, int n) override;
  int processInline(float *inputBuffers, float *outputBuffer, int n) override;
  int processInlineInterleaved(float *inputBuffers, float *outputBuffer, int n) override;

  int getParameterInfo(int index, HvParameterInfo *info) override;

 private:
  HvTable *getTableForHash(hv_uint32_t tableHash) override;
  void scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) override;

  // static sendMessage functions
  static void cVar_xghAoYLj_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_GqgWF8Sx_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_p9iYinpf_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_1RW2qrBA_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_BvVIJnzb_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_2wuPD80J_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cDelay_5kiyZVf8_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_twi8jruI_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_UN0AI3te_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_6t84ZlYj_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_825zW7Hr_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_m9nh9yJS_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_xn2BRA9u_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_K6LRfdKw_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_DFjj7KqF_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_WnuetlSi_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_tCQ3RXU8_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cCast_yEusB1S5_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_d7KOyJUn_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_M4uy8RPn_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cSlice_qJCGHa7s_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_mzj7IVFh_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_sKqyh4VE_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_l0dggyYQ_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_YLenFKfj_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cCast_fSW2FC5I_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_E7QRtumn_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_sie22PPm_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_CVeYbiSx_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_VoO8LU5b_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_EIkmw1Me_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_WZNbxKKb_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_IUBCLbe1_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_vnvIP5DP_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_Cgtf8tCt_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_Dk2yNMEy_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_N0dNVh4a_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_5iMGfRIM_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_TInFJdTW_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_Qyxyiji9_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_Fuq2ArFc_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_jCobJckt_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_zhqnxDqE_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_63YfAIZj_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_IS32L465_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_IFn4n7S1_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_LtJsYqW6_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_VVnXyzOX_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_7mgwEdwr_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_EeGOIu4Z_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_ag6d3VQ4_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_CpofKM8S_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_eerxR9BB_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_LVyxt3sy_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_r3CxokVG_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_hUqJrR6I_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_xi9G5QbY_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_LPXm3dDP_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_tsDnc1rs_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_dylnZPOh_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_qsI2NUFO_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_hsZK3YXQ_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cDelay_fjCZgZLw_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_uhaL4vNi_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_qcaDhpw2_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_sVNzWIZU_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_yyVBn38f_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_sOEMmN7p_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_YWzXBeFq_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_l678eryI_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_a0Gr6iw0_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_rhVqEcW4_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_MK90GmJH_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cCast_A4zoUZyy_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_rm9rSpDr_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_VuRtIwTy_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cSlice_obx6Dyjb_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_2baSPxTI_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_5OIGr6O1_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_PkHbQmCv_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_eZ9nRZnO_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cCast_oTEfFEwo_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_71utey7R_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_919jP3p7_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_5kYBPwJg_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_cZikEHFx_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_HIaMGMRU_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_w7W24QT8_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_QGpUjbBy_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_XiqVyVEC_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_YC7K1SW3_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_hLYQ0g5g_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_eZ5U6XKh_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_WC9zKEzS_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_lzXFt2oF_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_PXvdMBOd_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_960Lks3z_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_5pjfNbAL_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_PHvy91V3_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_Fo0dkvVu_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_hdoDXJLO_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_8y7wf5Qf_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_or4kFJml_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_xc5m3ip1_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_bfcMXgHL_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_RhicTIO0_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_8l6tFeqD_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_LicL9RFk_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_sePkoJ5g_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_6Hc7F7VK_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_HIJ4kiuG_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_Sb1uXn6X_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_t3lRBDoX_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_4DoyMDOh_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_lsaKsf0C_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_y1yoxBOx_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_gkgzOuIe_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_9cy0W3Hq_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cDelay_09ZQgGJp_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_A3hikEId_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_PdOWtjv3_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_29N2QAwQ_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_1B06T1Ie_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_LnOcr9tD_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_GzcKsU2G_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_zwhSjJIn_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_5XjV8eMz_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_YEZ54VWH_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_yolyFMZP_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cCast_mapKZln8_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_SLXcsBKQ_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_OsNOC7zp_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cSlice_wAx3OxuW_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_tBhjz7gl_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_2dgFZIcH_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_O9qbY007_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_wQTptJhl_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cCast_6kMyh4sf_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_g8222ZNN_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_syUJnjel_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_ew8QzW5W_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_XjRxfwUu_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_JAA4Uqmy_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_ybWCHFO6_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_FLr4a9FQ_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_QoZIXDV0_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_JH19DvXz_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_ioXMVjnA_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_kf1jd2zO_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_S0EwrG1g_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_uu2BDCyA_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_lGa70LMx_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_QsXYdCTO_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_oxj4SHTE_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_I9KZCnBf_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_aqXV0K63_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_5KtxbwUS_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_i38B8g9g_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_r8djm4R7_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_88Ws53RZ_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_CW7Godmz_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_DAZVQH1R_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_UmMWVHU1_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_KjiudJEA_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_5yYemYIp_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_G8cbTcmh_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_MkJAeB2w_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_YDjK0efm_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_vCTLySP3_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_wE9tWpQk_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_US0dRwjW_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_6a9pn7Uy_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_YBERmYpP_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_498DpclY_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cUnop_Tce6UCVN_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cUnop_f6YglbxI_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cUnop_4JPHIp9e_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_ZZUtzWiz_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_HKT955bA_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_4jJfrZL4_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_X0HTOyWk_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cUnop_1mhd0Psk_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cUnop_DIvmKvMN_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cUnop_dGJSQGG8_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_RcB6Larv_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_7VFMJtV6_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_PHP8Lpgp_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_hLrRutGE_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_F29rKUwR_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_BHOUbAGE_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_Ig1LQINj_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_yWSUJy54_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_qLaw1Iin_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_gUM5xTi7_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_ok7hfG6A_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_i6We2V1m_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_bTC9Dxq6_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_Sop2nrEn_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_FKcFD2QD_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_zx98wAdj_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_kxLEVDNt_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_XcHbtxo4_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_QmE3tWJ1_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cDelay_c6r2r2p0_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cDelay_GtBjO6yq_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_tqRasWZu_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cBinop_tbUPtm36_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void hTable_fAfYKWby_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_qW7yauzL_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_fVwSTfMj_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_xFwDacpd_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_PeuWjZ4O_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_nthAnpPD_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_cK2Gfcti_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_8DTULx9C_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_uSefnWtO_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_gtpjQh86_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_0nPpxuv1_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_UWTXFfIe_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_04BzEOi3_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_2bi8YICD_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_LTnd9VXx_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_ae813nRm_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cDelay_PWsTAzzn_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cDelay_atVZ3fPR_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_DMWSvBfD_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cBinop_j8XXGzlx_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void hTable_XPiPLGGk_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_vW33L3QN_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_kqS48hXh_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_Qchsl6Xs_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_3XSBC49P_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_61Q4CWL1_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_5bRzRame_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_qsadvZTa_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_nBDXbgPe_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cPack_0w7coveF_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cPack_NRgllolm_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cReceive_2LApf7Uy_sendMessage(HeavyContextInterface *, int, const HvMessage *);

  // objects
  SignalTabwrite sTabwrite_nOiNeZFV;
  SignalTabwrite sTabwrite_fSN4lvSd;
  SignalLine sLine_UfO2dpst;
  SignalTabhead sTabhead_vb1Lds5N;
  SignalTabread sTabread_heA1eV4V;
  SignalTabread sTabread_sPWHoDau;
  SignalLine sLine_6JYLrsHi;
  SignalTabhead sTabhead_37NLIDVD;
  SignalTabread sTabread_1kcs47w9;
  SignalTabread sTabread_jR5xTqhX;
  ControlVar cVar_xghAoYLj;
  ControlVar cVar_GqgWF8Sx;
  ControlVar cVar_p9iYinpf;
  ControlDelay cDelay_5kiyZVf8;
  ControlVar cVar_825zW7Hr;
  ControlBinop cBinop_xn2BRA9u;
  ControlBinop cBinop_K6LRfdKw;
  ControlBinop cBinop_DFjj7KqF;
  ControlVar cVar_WnuetlSi;
  ControlSlice cSlice_qJCGHa7s;
  ControlSlice cSlice_mzj7IVFh;
  ControlVar cVar_sKqyh4VE;
  ControlVar cVar_l0dggyYQ;
  ControlVar cVar_E7QRtumn;
  ControlVar cVar_sie22PPm;
  ControlVar cVar_CVeYbiSx;
  ControlSlice cSlice_VoO8LU5b;
  ControlSlice cSlice_EIkmw1Me;
  ControlBinop cBinop_WZNbxKKb;
  ControlBinop cBinop_IUBCLbe1;
  ControlBinop cBinop_vnvIP5DP;
  ControlBinop cBinop_Cgtf8tCt;
  ControlBinop cBinop_Dk2yNMEy;
  ControlBinop cBinop_TInFJdTW;
  ControlBinop cBinop_Qyxyiji9;
  ControlBinop cBinop_Fuq2ArFc;
  ControlBinop cBinop_jCobJckt;
  ControlBinop cBinop_7mgwEdwr;
  ControlBinop cBinop_r3CxokVG;
  ControlDelay cDelay_fjCZgZLw;
  ControlVar cVar_yyVBn38f;
  ControlBinop cBinop_YWzXBeFq;
  ControlBinop cBinop_l678eryI;
  ControlBinop cBinop_a0Gr6iw0;
  ControlVar cVar_rhVqEcW4;
  ControlSlice cSlice_obx6Dyjb;
  ControlSlice cSlice_2baSPxTI;
  ControlVar cVar_5OIGr6O1;
  ControlVar cVar_PkHbQmCv;
  ControlVar cVar_71utey7R;
  ControlVar cVar_919jP3p7;
  ControlVar cVar_5kYBPwJg;
  ControlSlice cSlice_cZikEHFx;
  ControlSlice cSlice_HIaMGMRU;
  ControlBinop cBinop_w7W24QT8;
  ControlBinop cBinop_QGpUjbBy;
  ControlBinop cBinop_XiqVyVEC;
  ControlBinop cBinop_YC7K1SW3;
  ControlBinop cBinop_hLYQ0g5g;
  ControlBinop cBinop_lzXFt2oF;
  ControlBinop cBinop_PXvdMBOd;
  ControlBinop cBinop_960Lks3z;
  ControlBinop cBinop_5pjfNbAL;
  ControlBinop cBinop_bfcMXgHL;
  ControlBinop cBinop_HIJ4kiuG;
  ControlDelay cDelay_09ZQgGJp;
  ControlVar cVar_1B06T1Ie;
  ControlBinop cBinop_GzcKsU2G;
  ControlBinop cBinop_zwhSjJIn;
  ControlBinop cBinop_5XjV8eMz;
  ControlVar cVar_YEZ54VWH;
  ControlSlice cSlice_wAx3OxuW;
  ControlSlice cSlice_tBhjz7gl;
  ControlVar cVar_2dgFZIcH;
  ControlVar cVar_O9qbY007;
  ControlVar cVar_g8222ZNN;
  ControlVar cVar_syUJnjel;
  ControlVar cVar_ew8QzW5W;
  ControlSlice cSlice_XjRxfwUu;
  ControlSlice cSlice_JAA4Uqmy;
  ControlBinop cBinop_ybWCHFO6;
  ControlBinop cBinop_FLr4a9FQ;
  ControlBinop cBinop_QoZIXDV0;
  ControlBinop cBinop_JH19DvXz;
  ControlBinop cBinop_ioXMVjnA;
  ControlBinop cBinop_uu2BDCyA;
  ControlBinop cBinop_lGa70LMx;
  ControlBinop cBinop_QsXYdCTO;
  ControlBinop cBinop_oxj4SHTE;
  ControlBinop cBinop_CW7Godmz;
  ControlBinop cBinop_MkJAeB2w;
  ControlBinop cBinop_6a9pn7Uy;
  ControlBinop cBinop_YBERmYpP;
  ControlBinop cBinop_498DpclY;
  ControlBinop cBinop_HKT955bA;
  ControlBinop cBinop_4jJfrZL4;
  ControlBinop cBinop_X0HTOyWk;
  ControlBinop cBinop_7VFMJtV6;
  ControlBinop cBinop_PHP8Lpgp;
  ControlBinop cBinop_hLrRutGE;
  SignalVarf sVarf_m27dbfRZ;
  SignalVarf sVarf_XpBFR5uF;
  ControlVar cVar_yWSUJy54;
  ControlVar cVar_qLaw1Iin;
  ControlVar cVar_gUM5xTi7;
  ControlVar cVar_bTC9Dxq6;
  ControlBinop cBinop_FKcFD2QD;
  ControlBinop cBinop_kxLEVDNt;
  SignalVarf sVarf_RNTexUYy;
  SignalVarf sVarf_RrvkOMlH;
  SignalVarf sVarf_m7fs5emY;
  ControlDelay cDelay_c6r2r2p0;
  ControlDelay cDelay_GtBjO6yq;
  ControlBinop cBinop_tbUPtm36;
  HvTable hTable_fAfYKWby;
  ControlBinop cBinop_fVwSTfMj;
  ControlVar cVar_gtpjQh86;
  ControlBinop cBinop_UWTXFfIe;
  ControlBinop cBinop_2bi8YICD;
  SignalVarf sVarf_M0xAVuGV;
  SignalVarf sVarf_LCIB2sIZ;
  SignalVarf sVarf_Akkb06Rj;
  ControlDelay cDelay_PWsTAzzn;
  ControlDelay cDelay_atVZ3fPR;
  ControlBinop cBinop_j8XXGzlx;
  HvTable hTable_XPiPLGGk;
  ControlBinop cBinop_kqS48hXh;
  ControlVar cVar_qsadvZTa;
  ControlVar cVar_nBDXbgPe;
  ControlPack cPack_0w7coveF;
  ControlPack cPack_NRgllolm;
  SignalVarf sVarf_h57PY0qU;
  SignalVarf sVarf_mZ6G6xiw;
  SignalVarf sVarf_fh0r7jVd;
  SignalVarf sVarf_j8Hb5YZi;
  SignalVarf sVarf_fAh122ob;
};

#endif // _HEAVY_CONTEXT_HEAVY_HPP_
