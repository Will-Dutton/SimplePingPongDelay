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

#include "Heavy_heavy.hpp"

#include <new>

#define Context(_c) static_cast<Heavy_heavy *>(_c)


/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_heavy_new(double sampleRate) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_heavy));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_heavy(sampleRate);
    return Context(ptr);
  }

  HV_EXPORT HeavyContextInterface *hv_heavy_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_heavy));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_heavy(sampleRate, poolKb, inQueueKb, outQueueKb);
    return Context(ptr);
  }

  HV_EXPORT void hv_heavy_free(HeavyContextInterface *instance) {
    // call destructor
    Context(instance)->~Heavy_heavy();
    // free memory
    hv_free(instance);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_heavy::Heavy_heavy(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sTabwrite_init(&sTabwrite_nOiNeZFV, &hTable_fAfYKWby);
  numBytes += sTabwrite_init(&sTabwrite_fSN4lvSd, &hTable_XPiPLGGk);
  numBytes += sLine_init(&sLine_UfO2dpst);
  numBytes += sTabhead_init(&sTabhead_vb1Lds5N, &hTable_fAfYKWby);
  numBytes += sTabread_init(&sTabread_heA1eV4V, &hTable_fAfYKWby, false);
  numBytes += sTabread_init(&sTabread_sPWHoDau, &hTable_fAfYKWby, false);
  numBytes += sLine_init(&sLine_6JYLrsHi);
  numBytes += sTabhead_init(&sTabhead_37NLIDVD, &hTable_XPiPLGGk);
  numBytes += sTabread_init(&sTabread_1kcs47w9, &hTable_XPiPLGGk, false);
  numBytes += sTabread_init(&sTabread_jR5xTqhX, &hTable_XPiPLGGk, false);
  numBytes += cVar_init_f(&cVar_xghAoYLj, 0.0f);
  numBytes += cVar_init_f(&cVar_GqgWF8Sx, 0.0f);
  numBytes += cVar_init_f(&cVar_p9iYinpf, 0.0f);
  numBytes += cDelay_init(this, &cDelay_5kiyZVf8, 0.0f);
  numBytes += cVar_init_f(&cVar_825zW7Hr, 20.0f);
  numBytes += cBinop_init(&cBinop_DFjj7KqF, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_WnuetlSi, 0.0f);
  numBytes += cSlice_init(&cSlice_qJCGHa7s, 1, -1);
  numBytes += cSlice_init(&cSlice_mzj7IVFh, 1, -1);
  numBytes += cVar_init_f(&cVar_sKqyh4VE, 0.0f);
  numBytes += cVar_init_f(&cVar_l0dggyYQ, 1.0f);
  numBytes += cVar_init_f(&cVar_E7QRtumn, 0.0f);
  numBytes += cVar_init_f(&cVar_sie22PPm, 0.0f);
  numBytes += cVar_init_f(&cVar_CVeYbiSx, 0.0f);
  numBytes += cSlice_init(&cSlice_VoO8LU5b, 1, 1);
  numBytes += cSlice_init(&cSlice_EIkmw1Me, 0, 1);
  numBytes += cBinop_init(&cBinop_IUBCLbe1, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_vnvIP5DP, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Dk2yNMEy, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_Qyxyiji9, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_Fuq2ArFc, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_jCobJckt, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_7mgwEdwr, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_r3CxokVG, 0.0f); // __sub
  numBytes += cDelay_init(this, &cDelay_fjCZgZLw, 0.0f);
  numBytes += cVar_init_f(&cVar_yyVBn38f, 20.0f);
  numBytes += cBinop_init(&cBinop_a0Gr6iw0, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_rhVqEcW4, 0.0f);
  numBytes += cSlice_init(&cSlice_obx6Dyjb, 1, -1);
  numBytes += cSlice_init(&cSlice_2baSPxTI, 1, -1);
  numBytes += cVar_init_f(&cVar_5OIGr6O1, 0.0f);
  numBytes += cVar_init_f(&cVar_PkHbQmCv, 1.0f);
  numBytes += cVar_init_f(&cVar_71utey7R, 0.0f);
  numBytes += cVar_init_f(&cVar_919jP3p7, 0.0f);
  numBytes += cVar_init_f(&cVar_5kYBPwJg, 0.0f);
  numBytes += cSlice_init(&cSlice_cZikEHFx, 1, 1);
  numBytes += cSlice_init(&cSlice_HIaMGMRU, 0, 1);
  numBytes += cBinop_init(&cBinop_QGpUjbBy, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_XiqVyVEC, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_hLYQ0g5g, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_PXvdMBOd, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_960Lks3z, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_5pjfNbAL, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_bfcMXgHL, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_HIJ4kiuG, 0.0f); // __sub
  numBytes += cDelay_init(this, &cDelay_09ZQgGJp, 0.0f);
  numBytes += cVar_init_f(&cVar_1B06T1Ie, 20.0f);
  numBytes += cBinop_init(&cBinop_5XjV8eMz, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_YEZ54VWH, 0.0f);
  numBytes += cSlice_init(&cSlice_wAx3OxuW, 1, -1);
  numBytes += cSlice_init(&cSlice_tBhjz7gl, 1, -1);
  numBytes += cVar_init_f(&cVar_2dgFZIcH, 0.0f);
  numBytes += cVar_init_f(&cVar_O9qbY007, 1.0f);
  numBytes += cVar_init_f(&cVar_g8222ZNN, 0.0f);
  numBytes += cVar_init_f(&cVar_syUJnjel, 0.0f);
  numBytes += cVar_init_f(&cVar_ew8QzW5W, 0.0f);
  numBytes += cSlice_init(&cSlice_XjRxfwUu, 1, 1);
  numBytes += cSlice_init(&cSlice_JAA4Uqmy, 0, 1);
  numBytes += cBinop_init(&cBinop_FLr4a9FQ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_QoZIXDV0, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ioXMVjnA, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_lGa70LMx, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_QsXYdCTO, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_oxj4SHTE, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_CW7Godmz, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_MkJAeB2w, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_4jJfrZL4, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_X0HTOyWk, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_PHP8Lpgp, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_hLrRutGE, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_m27dbfRZ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_XpBFR5uF, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_yWSUJy54, 0.0f);
  numBytes += cVar_init_f(&cVar_qLaw1Iin, 0.0f);
  numBytes += cVar_init_f(&cVar_gUM5xTi7, 0.0f);
  numBytes += cVar_init_s(&cVar_bTC9Dxq6, "del-audio-bufferA");
  numBytes += sVarf_init(&sVarf_RNTexUYy, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_RrvkOMlH, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_m7fs5emY, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_c6r2r2p0, 0.0f);
  numBytes += cDelay_init(this, &cDelay_GtBjO6yq, 0.0f);
  numBytes += hTable_init(&hTable_fAfYKWby, 256);
  numBytes += cVar_init_s(&cVar_gtpjQh86, "del-audio-bufferB");
  numBytes += sVarf_init(&sVarf_M0xAVuGV, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_LCIB2sIZ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Akkb06Rj, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_PWsTAzzn, 0.0f);
  numBytes += cDelay_init(this, &cDelay_atVZ3fPR, 0.0f);
  numBytes += hTable_init(&hTable_XPiPLGGk, 256);
  numBytes += cVar_init_f(&cVar_qsadvZTa, 0.0f);
  numBytes += cVar_init_f(&cVar_nBDXbgPe, 0.0f);
  numBytes += cPack_init(&cPack_0w7coveF, 2, 0.0f, 50.0f);
  numBytes += cPack_init(&cPack_NRgllolm, 2, 0.0f, 50.0f);
  numBytes += sVarf_init(&sVarf_h57PY0qU, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_mZ6G6xiw, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_fh0r7jVd, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_j8Hb5YZi, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_fAh122ob, 0.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_heavy::~Heavy_heavy() {
  hTable_free(&hTable_fAfYKWby);
  hTable_free(&hTable_XPiPLGGk);
  cPack_free(&cPack_0w7coveF);
  cPack_free(&cPack_NRgllolm);
}

HvTable *Heavy_heavy::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x2E2A4C8F: return &hTable_fAfYKWby; // del-audio-bufferA
    case 0x566AB30B: return &hTable_XPiPLGGk; // del-audio-bufferB
    default: return nullptr;
  }
}

void Heavy_heavy::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2LApf7Uy_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_heavy::getParameterInfo(int index, HvParameterInfo *info) {
  if (info != nullptr) {
    switch (index) {
      default: {
        info->name = "invalid parameter index";
        info->hash = 0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 0.0f;
        info->defaultVal = 0.0f;
        break;
      }
    }
  }
  return 0;
}



/*
 * Send Function Implementations
 */


void Heavy_heavy::cVar_xghAoYLj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_f6YglbxI_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_4JPHIp9e_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_DIvmKvMN_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_dGJSQGG8_sendMessage);
}

void Heavy_heavy::cVar_GqgWF8Sx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_F29rKUwR_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_p9iYinpf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BHOUbAGE_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_1RW2qrBA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BvVIJnzb_sendMessage);
}

void Heavy_heavy::cSystem_BvVIJnzb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vnvIP5DP, HV_BINOP_MULTIPLY, 1, m, &cBinop_vnvIP5DP_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_IUBCLbe1, HV_BINOP_MULTIPLY, 1, m, &cBinop_IUBCLbe1_sendMessage);
}

void Heavy_heavy::cSwitchcase_2wuPD80J_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_m9nh9yJS_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_m9nh9yJS_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_twi8jruI_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cDelay_5kiyZVf8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_5kiyZVf8, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_5kiyZVf8, 0, m, &cDelay_5kiyZVf8_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_WnuetlSi, 0, m, &cVar_WnuetlSi_sendMessage);
}

void Heavy_heavy::cCast_twi8jruI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m9nh9yJS_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_5kiyZVf8, 0, m, &cDelay_5kiyZVf8_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_WnuetlSi, 0, m, &cVar_WnuetlSi_sendMessage);
}

void Heavy_heavy::cMsg_UN0AI3te_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_6t84ZlYj_sendMessage);
}

void Heavy_heavy::cSystem_6t84ZlYj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_K6LRfdKw_sendMessage);
}

void Heavy_heavy::cVar_825zW7Hr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DFjj7KqF, HV_BINOP_MULTIPLY, 0, m, &cBinop_DFjj7KqF_sendMessage);
}

void Heavy_heavy::cMsg_m9nh9yJS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_5kiyZVf8, 0, m, &cDelay_5kiyZVf8_sendMessage);
}

void Heavy_heavy::cBinop_xn2BRA9u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_5kiyZVf8, 2, m, &cDelay_5kiyZVf8_sendMessage);
}

void Heavy_heavy::cBinop_K6LRfdKw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DFjj7KqF, HV_BINOP_MULTIPLY, 1, m, &cBinop_DFjj7KqF_sendMessage);
}

void Heavy_heavy::cBinop_DFjj7KqF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_xn2BRA9u_sendMessage);
}

void Heavy_heavy::cVar_WnuetlSi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Dk2yNMEy, HV_BINOP_SUBTRACT, 0, m, &cBinop_Dk2yNMEy_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_TInFJdTW_sendMessage);
}

void Heavy_heavy::cSwitchcase_tCQ3RXU8_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yEusB1S5_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_d7KOyJUn_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cCast_yEusB1S5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CVeYbiSx, 0, m, &cVar_CVeYbiSx_sendMessage);
}

void Heavy_heavy::cCast_d7KOyJUn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VVnXyzOX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LtJsYqW6_sendMessage);
}

void Heavy_heavy::cSwitchcase_M4uy8RPn_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_qJCGHa7s, 0, m, &cSlice_qJCGHa7s_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_mzj7IVFh, 0, m, &cSlice_mzj7IVFh_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LPXm3dDP_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_VoO8LU5b, 0, m, &cSlice_VoO8LU5b_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_EIkmw1Me, 0, m, &cSlice_EIkmw1Me_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tsDnc1rs_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xi9G5QbY_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_qJCGHa7s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_EeGOIu4Z_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_EeGOIu4Z_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_mzj7IVFh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eerxR9BB_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LVyxt3sy_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eerxR9BB_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LVyxt3sy_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cVar_sKqyh4VE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zhqnxDqE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_63YfAIZj_sendMessage);
}

void Heavy_heavy::cVar_l0dggyYQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_YLenFKfj_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cSwitchcase_YLenFKfj_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fSW2FC5I_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_vnvIP5DP, HV_BINOP_MULTIPLY, 0, m, &cBinop_vnvIP5DP_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_Fuq2ArFc, HV_BINOP_DIVIDE, 1, m, &cBinop_Fuq2ArFc_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_825zW7Hr, 0, m, &cVar_825zW7Hr_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_fSW2FC5I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CpofKM8S_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_E7QRtumn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_r3CxokVG, HV_BINOP_SUBTRACT, 1, m, &cBinop_r3CxokVG_sendMessage);
}

void Heavy_heavy::cVar_sie22PPm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CVeYbiSx, 0, m, &cVar_CVeYbiSx_sendMessage);
}

void Heavy_heavy::cVar_CVeYbiSx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Qyxyiji9, HV_BINOP_ADD, 0, m, &cBinop_Qyxyiji9_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_7mgwEdwr, HV_BINOP_ADD, 0, m, &cBinop_7mgwEdwr_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_m27dbfRZ, m);
}

void Heavy_heavy::cSlice_VoO8LU5b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zhqnxDqE_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_63YfAIZj_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_EIkmw1Me_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IFn4n7S1_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IS32L465_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_WZNbxKKb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WnuetlSi, 1, m, &cVar_WnuetlSi_sendMessage);
}

void Heavy_heavy::cBinop_IUBCLbe1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_WZNbxKKb_sendMessage);
}

void Heavy_heavy::cBinop_vnvIP5DP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Cgtf8tCt_sendMessage);
}

void Heavy_heavy::cBinop_Cgtf8tCt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Dk2yNMEy, HV_BINOP_SUBTRACT, 1, m, &cBinop_Dk2yNMEy_sendMessage);
}

void Heavy_heavy::cBinop_Dk2yNMEy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WnuetlSi, 1, m, &cVar_WnuetlSi_sendMessage);
}

void Heavy_heavy::cMsg_N0dNVh4a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_2wuPD80J_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_5iMGfRIM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_2wuPD80J_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_7mgwEdwr, HV_BINOP_ADD, 1, m, &cBinop_7mgwEdwr_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Qyxyiji9, HV_BINOP_ADD, 1, m, &cBinop_Qyxyiji9_sendMessage);
}

void Heavy_heavy::cBinop_TInFJdTW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_tCQ3RXU8_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_Qyxyiji9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CVeYbiSx, 1, m, &cVar_CVeYbiSx_sendMessage);
}

void Heavy_heavy::cBinop_Fuq2ArFc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jCobJckt, HV_BINOP_DIVIDE, 1, m, &cBinop_jCobJckt_sendMessage);
}

void Heavy_heavy::cBinop_jCobJckt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7mgwEdwr, HV_BINOP_ADD, 1, m, &cBinop_7mgwEdwr_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Qyxyiji9, HV_BINOP_ADD, 1, m, &cBinop_Qyxyiji9_sendMessage);
}

void Heavy_heavy::cCast_zhqnxDqE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IUBCLbe1, HV_BINOP_MULTIPLY, 0, m, &cBinop_IUBCLbe1_sendMessage);
}

void Heavy_heavy::cCast_63YfAIZj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Fuq2ArFc, HV_BINOP_DIVIDE, 0, m, &cBinop_Fuq2ArFc_sendMessage);
}

void Heavy_heavy::cCast_IS32L465_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_r3CxokVG, HV_BINOP_SUBTRACT, 0, m, &cBinop_r3CxokVG_sendMessage);
}

void Heavy_heavy::cCast_IFn4n7S1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sie22PPm, 1, m, &cVar_sie22PPm_sendMessage);
}

void Heavy_heavy::cCast_LtJsYqW6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sie22PPm, 0, m, &cVar_sie22PPm_sendMessage);
}

void Heavy_heavy::cCast_VVnXyzOX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5iMGfRIM_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_7mgwEdwr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_E7QRtumn, 0, m, &cVar_E7QRtumn_sendMessage);
}

void Heavy_heavy::cMsg_EeGOIu4Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_2wuPD80J_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_ag6d3VQ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_sKqyh4VE, 1, m, &cVar_sKqyh4VE_sendMessage);
}

void Heavy_heavy::cMsg_CpofKM8S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_vnvIP5DP, HV_BINOP_MULTIPLY, 0, m, &cBinop_vnvIP5DP_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Fuq2ArFc, HV_BINOP_DIVIDE, 1, m, &cBinop_Fuq2ArFc_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_825zW7Hr, 0, m, &cVar_825zW7Hr_sendMessage);
}

void Heavy_heavy::cCast_eerxR9BB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EeGOIu4Z_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_LVyxt3sy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hUqJrR6I_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_7mgwEdwr, HV_BINOP_ADD, 0, m, &cBinop_7mgwEdwr_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_CVeYbiSx, 1, m, &cVar_CVeYbiSx_sendMessage);
}

void Heavy_heavy::cBinop_r3CxokVG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jCobJckt, HV_BINOP_DIVIDE, 0, m, &cBinop_jCobJckt_sendMessage);
}

void Heavy_heavy::cCast_hUqJrR6I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5iMGfRIM_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_xi9G5QbY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ag6d3VQ4_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_LPXm3dDP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sKqyh4VE, 0, m, &cVar_sKqyh4VE_sendMessage);
}

void Heavy_heavy::cCast_tsDnc1rs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_N0dNVh4a_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_dylnZPOh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_qsI2NUFO_sendMessage);
}

void Heavy_heavy::cSystem_qsI2NUFO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XiqVyVEC, HV_BINOP_MULTIPLY, 1, m, &cBinop_XiqVyVEC_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_QGpUjbBy, HV_BINOP_MULTIPLY, 1, m, &cBinop_QGpUjbBy_sendMessage);
}

void Heavy_heavy::cSwitchcase_hsZK3YXQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_sOEMmN7p_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_sOEMmN7p_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uhaL4vNi_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cDelay_fjCZgZLw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_fjCZgZLw, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_fjCZgZLw, 0, m, &cDelay_fjCZgZLw_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_rhVqEcW4, 0, m, &cVar_rhVqEcW4_sendMessage);
}

void Heavy_heavy::cCast_uhaL4vNi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sOEMmN7p_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_fjCZgZLw, 0, m, &cDelay_fjCZgZLw_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_rhVqEcW4, 0, m, &cVar_rhVqEcW4_sendMessage);
}

void Heavy_heavy::cMsg_qcaDhpw2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sVNzWIZU_sendMessage);
}

void Heavy_heavy::cSystem_sVNzWIZU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_l678eryI_sendMessage);
}

void Heavy_heavy::cVar_yyVBn38f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_a0Gr6iw0, HV_BINOP_MULTIPLY, 0, m, &cBinop_a0Gr6iw0_sendMessage);
}

void Heavy_heavy::cMsg_sOEMmN7p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_fjCZgZLw, 0, m, &cDelay_fjCZgZLw_sendMessage);
}

void Heavy_heavy::cBinop_YWzXBeFq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_fjCZgZLw, 2, m, &cDelay_fjCZgZLw_sendMessage);
}

void Heavy_heavy::cBinop_l678eryI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_a0Gr6iw0, HV_BINOP_MULTIPLY, 1, m, &cBinop_a0Gr6iw0_sendMessage);
}

void Heavy_heavy::cBinop_a0Gr6iw0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_YWzXBeFq_sendMessage);
}

void Heavy_heavy::cVar_rhVqEcW4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hLYQ0g5g, HV_BINOP_SUBTRACT, 0, m, &cBinop_hLYQ0g5g_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_lzXFt2oF_sendMessage);
}

void Heavy_heavy::cSwitchcase_MK90GmJH_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_A4zoUZyy_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rm9rSpDr_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cCast_A4zoUZyy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5kYBPwJg, 0, m, &cVar_5kYBPwJg_sendMessage);
}

void Heavy_heavy::cCast_rm9rSpDr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xc5m3ip1_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_or4kFJml_sendMessage);
}

void Heavy_heavy::cSwitchcase_VuRtIwTy_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_obx6Dyjb, 0, m, &cSlice_obx6Dyjb_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_2baSPxTI, 0, m, &cSlice_2baSPxTI_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4DoyMDOh_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_cZikEHFx, 0, m, &cSlice_cZikEHFx_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_HIaMGMRU, 0, m, &cSlice_HIaMGMRU_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_t3lRBDoX_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lsaKsf0C_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_obx6Dyjb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_RhicTIO0_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_RhicTIO0_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_2baSPxTI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6Hc7F7VK_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sePkoJ5g_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6Hc7F7VK_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sePkoJ5g_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cVar_5OIGr6O1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Fo0dkvVu_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PHvy91V3_sendMessage);
}

void Heavy_heavy::cVar_PkHbQmCv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_eZ9nRZnO_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cSwitchcase_eZ9nRZnO_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oTEfFEwo_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_XiqVyVEC, HV_BINOP_MULTIPLY, 0, m, &cBinop_XiqVyVEC_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_960Lks3z, HV_BINOP_DIVIDE, 1, m, &cBinop_960Lks3z_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_yyVBn38f, 0, m, &cVar_yyVBn38f_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_oTEfFEwo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LicL9RFk_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_71utey7R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HIJ4kiuG, HV_BINOP_SUBTRACT, 1, m, &cBinop_HIJ4kiuG_sendMessage);
}

void Heavy_heavy::cVar_919jP3p7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5kYBPwJg, 0, m, &cVar_5kYBPwJg_sendMessage);
}

void Heavy_heavy::cVar_5kYBPwJg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PXvdMBOd, HV_BINOP_ADD, 0, m, &cBinop_PXvdMBOd_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_bfcMXgHL, HV_BINOP_ADD, 0, m, &cBinop_bfcMXgHL_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_XpBFR5uF, m);
}

void Heavy_heavy::cSlice_cZikEHFx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Fo0dkvVu_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PHvy91V3_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_HIaMGMRU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8y7wf5Qf_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hdoDXJLO_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_w7W24QT8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rhVqEcW4, 1, m, &cVar_rhVqEcW4_sendMessage);
}

void Heavy_heavy::cBinop_QGpUjbBy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_w7W24QT8_sendMessage);
}

void Heavy_heavy::cBinop_XiqVyVEC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_YC7K1SW3_sendMessage);
}

void Heavy_heavy::cBinop_YC7K1SW3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hLYQ0g5g, HV_BINOP_SUBTRACT, 1, m, &cBinop_hLYQ0g5g_sendMessage);
}

void Heavy_heavy::cBinop_hLYQ0g5g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rhVqEcW4, 1, m, &cVar_rhVqEcW4_sendMessage);
}

void Heavy_heavy::cMsg_eZ5U6XKh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_hsZK3YXQ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_WC9zKEzS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_hsZK3YXQ_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_bfcMXgHL, HV_BINOP_ADD, 1, m, &cBinop_bfcMXgHL_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PXvdMBOd, HV_BINOP_ADD, 1, m, &cBinop_PXvdMBOd_sendMessage);
}

void Heavy_heavy::cBinop_lzXFt2oF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_MK90GmJH_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_PXvdMBOd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5kYBPwJg, 1, m, &cVar_5kYBPwJg_sendMessage);
}

void Heavy_heavy::cBinop_960Lks3z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5pjfNbAL, HV_BINOP_DIVIDE, 1, m, &cBinop_5pjfNbAL_sendMessage);
}

void Heavy_heavy::cBinop_5pjfNbAL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bfcMXgHL, HV_BINOP_ADD, 1, m, &cBinop_bfcMXgHL_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PXvdMBOd, HV_BINOP_ADD, 1, m, &cBinop_PXvdMBOd_sendMessage);
}

void Heavy_heavy::cCast_PHvy91V3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_960Lks3z, HV_BINOP_DIVIDE, 0, m, &cBinop_960Lks3z_sendMessage);
}

void Heavy_heavy::cCast_Fo0dkvVu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QGpUjbBy, HV_BINOP_MULTIPLY, 0, m, &cBinop_QGpUjbBy_sendMessage);
}

void Heavy_heavy::cCast_hdoDXJLO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HIJ4kiuG, HV_BINOP_SUBTRACT, 0, m, &cBinop_HIJ4kiuG_sendMessage);
}

void Heavy_heavy::cCast_8y7wf5Qf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_919jP3p7, 1, m, &cVar_919jP3p7_sendMessage);
}

void Heavy_heavy::cCast_or4kFJml_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_919jP3p7, 0, m, &cVar_919jP3p7_sendMessage);
}

void Heavy_heavy::cCast_xc5m3ip1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WC9zKEzS_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_bfcMXgHL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_71utey7R, 0, m, &cVar_71utey7R_sendMessage);
}

void Heavy_heavy::cMsg_RhicTIO0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_hsZK3YXQ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_8l6tFeqD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_5OIGr6O1, 1, m, &cVar_5OIGr6O1_sendMessage);
}

void Heavy_heavy::cMsg_LicL9RFk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_XiqVyVEC, HV_BINOP_MULTIPLY, 0, m, &cBinop_XiqVyVEC_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_960Lks3z, HV_BINOP_DIVIDE, 1, m, &cBinop_960Lks3z_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_yyVBn38f, 0, m, &cVar_yyVBn38f_sendMessage);
}

void Heavy_heavy::cCast_sePkoJ5g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Sb1uXn6X_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_bfcMXgHL, HV_BINOP_ADD, 0, m, &cBinop_bfcMXgHL_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_5kYBPwJg, 1, m, &cVar_5kYBPwJg_sendMessage);
}

void Heavy_heavy::cCast_6Hc7F7VK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RhicTIO0_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_HIJ4kiuG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5pjfNbAL, HV_BINOP_DIVIDE, 0, m, &cBinop_5pjfNbAL_sendMessage);
}

void Heavy_heavy::cCast_Sb1uXn6X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WC9zKEzS_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_t3lRBDoX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eZ5U6XKh_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_4DoyMDOh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5OIGr6O1, 0, m, &cVar_5OIGr6O1_sendMessage);
}

void Heavy_heavy::cCast_lsaKsf0C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8l6tFeqD_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_y1yoxBOx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_gkgzOuIe_sendMessage);
}

void Heavy_heavy::cSystem_gkgzOuIe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QoZIXDV0, HV_BINOP_MULTIPLY, 1, m, &cBinop_QoZIXDV0_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_FLr4a9FQ, HV_BINOP_MULTIPLY, 1, m, &cBinop_FLr4a9FQ_sendMessage);
}

void Heavy_heavy::cSwitchcase_9cy0W3Hq_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_LnOcr9tD_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_LnOcr9tD_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_A3hikEId_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cDelay_09ZQgGJp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_09ZQgGJp, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_09ZQgGJp, 0, m, &cDelay_09ZQgGJp_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_YEZ54VWH, 0, m, &cVar_YEZ54VWH_sendMessage);
}

void Heavy_heavy::cCast_A3hikEId_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LnOcr9tD_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_09ZQgGJp, 0, m, &cDelay_09ZQgGJp_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_YEZ54VWH, 0, m, &cVar_YEZ54VWH_sendMessage);
}

void Heavy_heavy::cMsg_PdOWtjv3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_29N2QAwQ_sendMessage);
}

void Heavy_heavy::cSystem_29N2QAwQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_zwhSjJIn_sendMessage);
}

void Heavy_heavy::cVar_1B06T1Ie_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5XjV8eMz, HV_BINOP_MULTIPLY, 0, m, &cBinop_5XjV8eMz_sendMessage);
}

void Heavy_heavy::cMsg_LnOcr9tD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_09ZQgGJp, 0, m, &cDelay_09ZQgGJp_sendMessage);
}

void Heavy_heavy::cBinop_GzcKsU2G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_09ZQgGJp, 2, m, &cDelay_09ZQgGJp_sendMessage);
}

void Heavy_heavy::cBinop_zwhSjJIn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5XjV8eMz, HV_BINOP_MULTIPLY, 1, m, &cBinop_5XjV8eMz_sendMessage);
}

void Heavy_heavy::cBinop_5XjV8eMz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_GzcKsU2G_sendMessage);
}

void Heavy_heavy::cVar_YEZ54VWH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ioXMVjnA, HV_BINOP_SUBTRACT, 0, m, &cBinop_ioXMVjnA_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_uu2BDCyA_sendMessage);
}

void Heavy_heavy::cSwitchcase_yolyFMZP_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mapKZln8_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SLXcsBKQ_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cCast_mapKZln8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ew8QzW5W, 0, m, &cVar_ew8QzW5W_sendMessage);
}

void Heavy_heavy::cCast_SLXcsBKQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_r8djm4R7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_88Ws53RZ_sendMessage);
}

void Heavy_heavy::cSwitchcase_OsNOC7zp_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_wAx3OxuW, 0, m, &cSlice_wAx3OxuW_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_tBhjz7gl, 0, m, &cSlice_tBhjz7gl_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_US0dRwjW_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_XjRxfwUu, 0, m, &cSlice_XjRxfwUu_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_JAA4Uqmy, 0, m, &cSlice_JAA4Uqmy_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vCTLySP3_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wE9tWpQk_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_wAx3OxuW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_DAZVQH1R_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_DAZVQH1R_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_tBhjz7gl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_G8cbTcmh_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5yYemYIp_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_G8cbTcmh_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5yYemYIp_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cVar_2dgFZIcH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aqXV0K63_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_I9KZCnBf_sendMessage);
}

void Heavy_heavy::cVar_O9qbY007_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_wQTptJhl_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cSwitchcase_wQTptJhl_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6kMyh4sf_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_QoZIXDV0, HV_BINOP_MULTIPLY, 0, m, &cBinop_QoZIXDV0_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_QsXYdCTO, HV_BINOP_DIVIDE, 1, m, &cBinop_QsXYdCTO_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_1B06T1Ie, 0, m, &cVar_1B06T1Ie_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_6kMyh4sf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KjiudJEA_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_g8222ZNN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MkJAeB2w, HV_BINOP_SUBTRACT, 1, m, &cBinop_MkJAeB2w_sendMessage);
}

void Heavy_heavy::cVar_syUJnjel_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ew8QzW5W, 0, m, &cVar_ew8QzW5W_sendMessage);
}

void Heavy_heavy::cVar_ew8QzW5W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lGa70LMx, HV_BINOP_ADD, 0, m, &cBinop_lGa70LMx_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CW7Godmz, HV_BINOP_ADD, 0, m, &cBinop_CW7Godmz_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 90.0f, 0, m, &cBinop_6a9pn7Uy_sendMessage);
}

void Heavy_heavy::cSlice_XjRxfwUu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aqXV0K63_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_I9KZCnBf_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_JAA4Uqmy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_i38B8g9g_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5KtxbwUS_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_ybWCHFO6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YEZ54VWH, 1, m, &cVar_YEZ54VWH_sendMessage);
}

void Heavy_heavy::cBinop_FLr4a9FQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_ybWCHFO6_sendMessage);
}

void Heavy_heavy::cBinop_QoZIXDV0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_JH19DvXz_sendMessage);
}

void Heavy_heavy::cBinop_JH19DvXz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ioXMVjnA, HV_BINOP_SUBTRACT, 1, m, &cBinop_ioXMVjnA_sendMessage);
}

void Heavy_heavy::cBinop_ioXMVjnA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YEZ54VWH, 1, m, &cVar_YEZ54VWH_sendMessage);
}

void Heavy_heavy::cMsg_kf1jd2zO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_9cy0W3Hq_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_S0EwrG1g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_9cy0W3Hq_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CW7Godmz, HV_BINOP_ADD, 1, m, &cBinop_CW7Godmz_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_lGa70LMx, HV_BINOP_ADD, 1, m, &cBinop_lGa70LMx_sendMessage);
}

void Heavy_heavy::cBinop_uu2BDCyA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_yolyFMZP_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_lGa70LMx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ew8QzW5W, 1, m, &cVar_ew8QzW5W_sendMessage);
}

void Heavy_heavy::cBinop_QsXYdCTO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oxj4SHTE, HV_BINOP_DIVIDE, 1, m, &cBinop_oxj4SHTE_sendMessage);
}

void Heavy_heavy::cBinop_oxj4SHTE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CW7Godmz, HV_BINOP_ADD, 1, m, &cBinop_CW7Godmz_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_lGa70LMx, HV_BINOP_ADD, 1, m, &cBinop_lGa70LMx_sendMessage);
}

void Heavy_heavy::cCast_I9KZCnBf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QsXYdCTO, HV_BINOP_DIVIDE, 0, m, &cBinop_QsXYdCTO_sendMessage);
}

void Heavy_heavy::cCast_aqXV0K63_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FLr4a9FQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_FLr4a9FQ_sendMessage);
}

void Heavy_heavy::cCast_5KtxbwUS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MkJAeB2w, HV_BINOP_SUBTRACT, 0, m, &cBinop_MkJAeB2w_sendMessage);
}

void Heavy_heavy::cCast_i38B8g9g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_syUJnjel, 1, m, &cVar_syUJnjel_sendMessage);
}

void Heavy_heavy::cCast_r8djm4R7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_S0EwrG1g_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_88Ws53RZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_syUJnjel, 0, m, &cVar_syUJnjel_sendMessage);
}

void Heavy_heavy::cBinop_CW7Godmz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_g8222ZNN, 0, m, &cVar_g8222ZNN_sendMessage);
}

void Heavy_heavy::cMsg_DAZVQH1R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_9cy0W3Hq_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_UmMWVHU1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_2dgFZIcH, 1, m, &cVar_2dgFZIcH_sendMessage);
}

void Heavy_heavy::cMsg_KjiudJEA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_QoZIXDV0, HV_BINOP_MULTIPLY, 0, m, &cBinop_QoZIXDV0_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_QsXYdCTO, HV_BINOP_DIVIDE, 1, m, &cBinop_QsXYdCTO_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_1B06T1Ie, 0, m, &cVar_1B06T1Ie_sendMessage);
}

void Heavy_heavy::cCast_5yYemYIp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YDjK0efm_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CW7Godmz, HV_BINOP_ADD, 0, m, &cBinop_CW7Godmz_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ew8QzW5W, 1, m, &cVar_ew8QzW5W_sendMessage);
}

void Heavy_heavy::cCast_G8cbTcmh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DAZVQH1R_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_MkJAeB2w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oxj4SHTE, HV_BINOP_DIVIDE, 0, m, &cBinop_oxj4SHTE_sendMessage);
}

void Heavy_heavy::cCast_YDjK0efm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_S0EwrG1g_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_vCTLySP3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kf1jd2zO_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_wE9tWpQk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UmMWVHU1_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_US0dRwjW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2dgFZIcH, 0, m, &cVar_2dgFZIcH_sendMessage);
}

void Heavy_heavy::cBinop_6a9pn7Uy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 127.0f, 0, m, &cBinop_YBERmYpP_sendMessage);
}

void Heavy_heavy::cBinop_YBERmYpP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 45.0f, 0, m, &cBinop_498DpclY_sendMessage);
}

void Heavy_heavy::cBinop_498DpclY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xghAoYLj, 0, m, &cVar_xghAoYLj_sendMessage);
}

void Heavy_heavy::cUnop_Tce6UCVN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 2.0f, 0, m, &cBinop_HKT955bA_sendMessage);
}

void Heavy_heavy::cUnop_f6YglbxI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4jJfrZL4, HV_BINOP_ADD, 0, m, &cBinop_4jJfrZL4_sendMessage);
}

void Heavy_heavy::cUnop_4JPHIp9e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4jJfrZL4, HV_BINOP_ADD, 1, m, &cBinop_4jJfrZL4_sendMessage);
}

void Heavy_heavy::cMsg_ZZUtzWiz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cUnop_onMessage(_c, HV_UNOP_SQRT, m, &cUnop_Tce6UCVN_sendMessage);
}

void Heavy_heavy::cBinop_HKT955bA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_X0HTOyWk, HV_BINOP_MULTIPLY, 1, m, &cBinop_X0HTOyWk_sendMessage);
}

void Heavy_heavy::cBinop_4jJfrZL4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_X0HTOyWk, HV_BINOP_MULTIPLY, 0, m, &cBinop_X0HTOyWk_sendMessage);
}

void Heavy_heavy::cBinop_X0HTOyWk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GqgWF8Sx, 0, m, &cVar_GqgWF8Sx_sendMessage);
}

void Heavy_heavy::cUnop_1mhd0Psk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 2.0f, 0, m, &cBinop_7VFMJtV6_sendMessage);
}

void Heavy_heavy::cUnop_DIvmKvMN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hLrRutGE, HV_BINOP_SUBTRACT, 0, m, &cBinop_hLrRutGE_sendMessage);
}

void Heavy_heavy::cUnop_dGJSQGG8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hLrRutGE, HV_BINOP_SUBTRACT, 1, m, &cBinop_hLrRutGE_sendMessage);
}

void Heavy_heavy::cMsg_RcB6Larv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cUnop_onMessage(_c, HV_UNOP_SQRT, m, &cUnop_1mhd0Psk_sendMessage);
}

void Heavy_heavy::cBinop_7VFMJtV6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PHP8Lpgp, HV_BINOP_MULTIPLY, 1, m, &cBinop_PHP8Lpgp_sendMessage);
}

void Heavy_heavy::cBinop_PHP8Lpgp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_p9iYinpf, 0, m, &cVar_p9iYinpf_sendMessage);
}

void Heavy_heavy::cBinop_hLrRutGE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PHP8Lpgp, HV_BINOP_MULTIPLY, 0, m, &cBinop_PHP8Lpgp_sendMessage);
}

void Heavy_heavy::cMsg_F29rKUwR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 80.0f);
  cSwitchcase_M4uy8RPn_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_BHOUbAGE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 80.0f);
  cSwitchcase_VuRtIwTy_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_Ig1LQINj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 20.0f);
  cSwitchcase_OsNOC7zp_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cVar_yWSUJy54_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ig1LQINj_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_qLaw1Iin_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fh0r7jVd, m);
}

void Heavy_heavy::cVar_gUM5xTi7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_j8Hb5YZi, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_fAh122ob, m);
}

void Heavy_heavy::cMsg_ok7hfG6A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_i6We2V1m_sendMessage);
}

void Heavy_heavy::cSystem_i6We2V1m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_FKcFD2QD_sendMessage);
}

void Heavy_heavy::cVar_bTC9Dxq6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zx98wAdj_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSystem_Sop2nrEn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_kxLEVDNt_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_RNTexUYy, m);
}

void Heavy_heavy::cBinop_FKcFD2QD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_RrvkOMlH, m);
}

void Heavy_heavy::cMsg_zx98wAdj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Sop2nrEn_sendMessage);
}

void Heavy_heavy::cBinop_kxLEVDNt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_m7fs5emY, m);
}

void Heavy_heavy::cMsg_XcHbtxo4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_QmE3tWJ1_sendMessage);
}

void Heavy_heavy::cSystem_QmE3tWJ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_fVwSTfMj_sendMessage);
}

void Heavy_heavy::cDelay_c6r2r2p0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_c6r2r2p0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_GtBjO6yq, 0, m, &cDelay_GtBjO6yq_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_c6r2r2p0, 0, m, &cDelay_c6r2r2p0_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_nOiNeZFV, 1, m, NULL);
}

void Heavy_heavy::cDelay_GtBjO6yq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_GtBjO6yq, m);
  cMsg_xFwDacpd_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_tqRasWZu_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_cK2Gfcti_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cBinop_tbUPtm36_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qW7yauzL_sendMessage(_c, 0, m);
}

void Heavy_heavy::hTable_fAfYKWby_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nthAnpPD_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_c6r2r2p0, 2, m, &cDelay_c6r2r2p0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PeuWjZ4O_sendMessage);
}

void Heavy_heavy::cMsg_qW7yauzL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_fAfYKWby, 0, m, &hTable_fAfYKWby_sendMessage);
}

void Heavy_heavy::cBinop_fVwSTfMj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_tbUPtm36_sendMessage);
}

void Heavy_heavy::cMsg_xFwDacpd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_fAfYKWby, 0, m, &hTable_fAfYKWby_sendMessage);
}

void Heavy_heavy::cCast_PeuWjZ4O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_c6r2r2p0, 0, m, &cDelay_c6r2r2p0_sendMessage);
}

void Heavy_heavy::cMsg_nthAnpPD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_GtBjO6yq, 2, m, &cDelay_GtBjO6yq_sendMessage);
}

void Heavy_heavy::cMsg_cK2Gfcti_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_nOiNeZFV, 1, m, NULL);
}

void Heavy_heavy::cMsg_8DTULx9C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_uSefnWtO_sendMessage);
}

void Heavy_heavy::cSystem_uSefnWtO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_UWTXFfIe_sendMessage);
}

void Heavy_heavy::cVar_gtpjQh86_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_04BzEOi3_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSystem_0nPpxuv1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_2bi8YICD_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_M0xAVuGV, m);
}

void Heavy_heavy::cBinop_UWTXFfIe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_LCIB2sIZ, m);
}

void Heavy_heavy::cMsg_04BzEOi3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_0nPpxuv1_sendMessage);
}

void Heavy_heavy::cBinop_2bi8YICD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Akkb06Rj, m);
}

void Heavy_heavy::cMsg_LTnd9VXx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ae813nRm_sendMessage);
}

void Heavy_heavy::cSystem_ae813nRm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_kqS48hXh_sendMessage);
}

void Heavy_heavy::cDelay_PWsTAzzn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_PWsTAzzn, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_atVZ3fPR, 0, m, &cDelay_atVZ3fPR_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_PWsTAzzn, 0, m, &cDelay_PWsTAzzn_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_fSN4lvSd, 1, m, NULL);
}

void Heavy_heavy::cDelay_atVZ3fPR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_atVZ3fPR, m);
  cMsg_Qchsl6Xs_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_DMWSvBfD_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_5bRzRame_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cBinop_j8XXGzlx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vW33L3QN_sendMessage(_c, 0, m);
}

void Heavy_heavy::hTable_XPiPLGGk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_61Q4CWL1_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_PWsTAzzn, 2, m, &cDelay_PWsTAzzn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3XSBC49P_sendMessage);
}

void Heavy_heavy::cMsg_vW33L3QN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_XPiPLGGk, 0, m, &hTable_XPiPLGGk_sendMessage);
}

void Heavy_heavy::cBinop_kqS48hXh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_j8XXGzlx_sendMessage);
}

void Heavy_heavy::cMsg_Qchsl6Xs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_XPiPLGGk, 0, m, &hTable_XPiPLGGk_sendMessage);
}

void Heavy_heavy::cCast_3XSBC49P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_PWsTAzzn, 0, m, &cDelay_PWsTAzzn_sendMessage);
}

void Heavy_heavy::cMsg_61Q4CWL1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_atVZ3fPR, 2, m, &cDelay_atVZ3fPR_sendMessage);
}

void Heavy_heavy::cMsg_5bRzRame_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_fSN4lvSd, 1, m, NULL);
}

void Heavy_heavy::cVar_qsadvZTa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_NRgllolm, 0, m, &cPack_NRgllolm_sendMessage);
}

void Heavy_heavy::cVar_nBDXbgPe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_0w7coveF, 0, m, &cPack_0w7coveF_sendMessage);
}

void Heavy_heavy::cPack_0w7coveF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_6JYLrsHi, 0, m, NULL);
}

void Heavy_heavy::cPack_NRgllolm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_UfO2dpst, 0, m, NULL);
}

void Heavy_heavy::cReceive_2LApf7Uy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UN0AI3te_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_825zW7Hr, 0, m, &cVar_825zW7Hr_sendMessage);
  cMsg_qcaDhpw2_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_yyVBn38f, 0, m, &cVar_yyVBn38f_sendMessage);
  cMsg_PdOWtjv3_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_1B06T1Ie, 0, m, &cVar_1B06T1Ie_sendMessage);
  cMsg_1RW2qrBA_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_E7QRtumn, 0, m, &cVar_E7QRtumn_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_l0dggyYQ, 0, m, &cVar_l0dggyYQ_sendMessage);
  cMsg_dylnZPOh_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_71utey7R, 0, m, &cVar_71utey7R_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_PkHbQmCv, 0, m, &cVar_PkHbQmCv_sendMessage);
  cMsg_y1yoxBOx_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_g8222ZNN, 0, m, &cVar_g8222ZNN_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_O9qbY007, 0, m, &cVar_O9qbY007_sendMessage);
  cMsg_XcHbtxo4_sendMessage(_c, 0, m);
  cMsg_LTnd9VXx_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_bTC9Dxq6, 0, m, &cVar_bTC9Dxq6_sendMessage);
  cMsg_ok7hfG6A_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_gtpjQh86, 0, m, &cVar_gtpjQh86_sendMessage);
  cMsg_8DTULx9C_sendMessage(_c, 0, m);
}




/*
 * Context Process Implementation
 */

int Heavy_heavy::process(float **inputBuffers, float **outputBuffers, int n) {
  while (hLp_hasData(&inQueue)) {
    hv_uint32_t numBytes = 0;
    ReceiverMessagePair *p = reinterpret_cast<ReceiverMessagePair *>(hLp_getReadBuffer(&inQueue, &numBytes));
    hv_assert(numBytes >= sizeof(ReceiverMessagePair));
    scheduleMessageForReceiver(p->receiverHash, &p->msg);
    hLp_consume(&inQueue);
  }

  sendBangToReceiver(0xDD21C0EB); // send to __hv_bang~ on next cycle
  const int n4 = n & ~HV_N_SIMD_MASK; // ensure that the block size is a multiple of HV_N_SIMD

  // temporary signal vars
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5;
  hv_bufferi_t Bi0, Bi1;

  // input and output vars
  hv_bufferf_t O0, O1;
  hv_bufferf_t I0;

  // declare and init the zero buffer
  hv_bufferf_t ZERO; __hv_zero_f(VOf(ZERO));

  hv_uint32_t nextBlock = blockStartTimestamp;
  for (int n = 0; n < n4; n += HV_N_SIMD) {

    // process all of the messages for this block
    nextBlock += HV_N_SIMD;
    while (mq_hasMessageBefore(&mq, nextBlock)) {
      MessageNode *const node = mq_peek(&mq);
      node->sendMessage(this, node->let, node->m);
      mq_pop(&mq);
    }

    // load input buffers
    __hv_load_f(inputBuffers[0]+n, VOf(I0));

    // zero output buffers
    __hv_zero_f(VOf(O0));
    __hv_zero_f(VOf(O1));

    // process all signal functions
    __hv_varread_f(&sVarf_XpBFR5uF, VOf(Bf0));
    __hv_mul_f(VIf(I0), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_m27dbfRZ, VOf(Bf1));
    __hv_mul_f(VIf(I0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_mZ6G6xiw, VOf(Bf2));
    __hv_add_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_tabwrite_f(&sTabwrite_nOiNeZFV, VIf(Bf2));
    __hv_varread_f(&sVarf_h57PY0qU, VOf(Bf2));
    __hv_add_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_tabwrite_f(&sTabwrite_fSN4lvSd, VIf(Bf2));
    __hv_line_f(&sLine_UfO2dpst, VOf(Bf2));
    __hv_tabhead_f(&sTabhead_vb1Lds5N, VOf(Bf0));
    __hv_var_k_f_r(VOf(Bf1), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_RrvkOMlH, VOf(Bf0));
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_m7fs5emY, VOf(Bf3));
    __hv_min_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf0));
    __hv_max_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf1));
    __hv_varread_f(&sVarf_RNTexUYy, VOf(Bf3));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_heA1eV4V, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_sPWHoDau, VIi(Bi0), VOf(Bf3));
    __hv_sub_f(VIf(Bf4), VIf(Bf3), VOf(Bf4));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf4), VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_6JYLrsHi, VOf(Bf1));
    __hv_mul_f(VIf(Bf3), VIf(Bf1), VOf(Bf4));
    __hv_varwrite_f(&sVarf_h57PY0qU, VIf(Bf4));
    __hv_tabhead_f(&sTabhead_37NLIDVD, VOf(Bf4));
    __hv_var_k_f_r(VOf(Bf0), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_LCIB2sIZ, VOf(Bf4));
    __hv_mul_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_Akkb06Rj, VOf(Bf2));
    __hv_min_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_zero_f(VOf(Bf4));
    __hv_max_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf0));
    __hv_varread_f(&sVarf_M0xAVuGV, VOf(Bf2));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_1kcs47w9, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_jR5xTqhX, VIi(Bi0), VOf(Bf2));
    __hv_sub_f(VIf(Bf5), VIf(Bf2), VOf(Bf5));
    __hv_sub_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf5), VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varwrite_f(&sVarf_mZ6G6xiw, VIf(Bf1));
    __hv_varread_f(&sVarf_fAh122ob, VOf(Bf1));
    __hv_varread_f(&sVarf_fh0r7jVd, VOf(Bf0));
    __hv_mul_f(VIf(I0), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf2), VIf(Bf1), VIf(Bf0), VOf(Bf1));
    __hv_add_f(VIf(Bf1), VIf(O1), VOf(O1));
    __hv_varread_f(&sVarf_j8Hb5YZi, VOf(Bf1));
    __hv_fma_f(VIf(Bf3), VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf0), VIf(O0), VOf(O0));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed

}

int Heavy_heavy::processInline(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(!(n4 & HV_N_SIMD_MASK)); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 1 channel(s)
  float **const bIn = &inputBuffers;

  // define the heavy output buffer for 2 channel(s)
  float **const bOut = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bOut[0] = outputBuffers+(0*n4);
  bOut[1] = outputBuffers+(1*n4);

  int n = process(bIn, bOut, n4);
  return n;
}

int Heavy_heavy::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(n4 & ~HV_N_SIMD_MASK); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 1 channel(s), uninterleave
  float *const bIn = inputBuffers;

  // define the heavy output buffer for 2 channel(s)
  float *const bOut = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));

  int n = processInline(bIn, bOut, n4);

  // interleave the heavy output into the output buffer
  #if HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 8, i += 16) {
    __m256 x = _mm256_load_ps(bOut+j);    // LLLLLLLL
    __m256 y = _mm256_load_ps(bOut+n4+j); // RRRRRRRR
    __m256 a = _mm256_unpacklo_ps(x, y);  // LRLRLRLR
    __m256 b = _mm256_unpackhi_ps(x, y);  // LRLRLRLR
    _mm256_store_ps(outputBuffers+i, a);
    _mm256_store_ps(outputBuffers+8+i, b);
  }
  #elif HV_SIMD_SSE
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 x = _mm_load_ps(bOut+j);    // LLLL
    __m128 y = _mm_load_ps(bOut+n4+j); // RRRR
    __m128 a = _mm_unpacklo_ps(x, y);  // LRLR
    __m128 b = _mm_unpackhi_ps(x, y);  // LRLR
    _mm_store_ps(outputBuffers+i, a);
    _mm_store_ps(outputBuffers+4+i, b);
  }
  #elif HV_SIMD_NEON
  // https://community.arm.com/groups/processors/blog/2012/03/13/coding-for-neon--part-5-rearranging-vectors
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4_t x = vld1q_f32(bOut+j);
    float32x4_t y = vld1q_f32(bOut+n4+j);
    float32x4x2_t z = {x, y};
    vst2q_f32(outputBuffers+i, z); // interleave and store
  }
  #else // HV_SIMD_NONE
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < n4; ++j) {
      outputBuffers[i+2*j] = bOut[i*n4+j];
    }
  }
  #endif

  return n;
}
