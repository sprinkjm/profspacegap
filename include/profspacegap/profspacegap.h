//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: profspacegap.h
//
// Code generated for Simulink model 'profspacegap'.
//
// Model version                  : 1.3
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Thu Oct 17 10:51:37 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_profspacegap_h_
#define RTW_HEADER_profspacegap_h_
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "profspacegap_types.h"
#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_profspacegap_T {
  SL_Bus_profspacegap_std_msgs_Float64 In1;// '<S5>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_profspacegap_T {
  ros_slroscpp_internal_block_P_T obj; // '<S3>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_g;// '<S4>/SourceBlock'
};

// Parameters (default storage)
struct P_profspacegap_T_ {
  SL_Bus_profspacegap_std_msgs_Float64 Constant_Value;// Computed Parameter: Constant_Value
                                                         //  Referenced by: '<S1>/Constant'

  SL_Bus_profspacegap_std_msgs_Float64 Out1_Y0;// Computed Parameter: Out1_Y0
                                                  //  Referenced by: '<S5>/Out1'

  SL_Bus_profspacegap_std_msgs_Float64 Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                           //  Referenced by: '<S4>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_profspacegap_T {
  const char_T * volatile errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_profspacegap_T profspacegap_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_profspacegap_T profspacegap_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_profspacegap_T profspacegap_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void profspacegap_initialize(void);
  extern void profspacegap_step(void);
  extern void profspacegap_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_profspacegap_T *const profspacegap_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'profspacegap'
//  '<S1>'   : 'profspacegap/Blank Message'
//  '<S2>'   : 'profspacegap/MATLAB Function1'
//  '<S3>'   : 'profspacegap/Publish'
//  '<S4>'   : 'profspacegap/Subscribe'
//  '<S5>'   : 'profspacegap/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_profspacegap_h_

//
// File trailer for generated code.
//
// [EOF]
//
