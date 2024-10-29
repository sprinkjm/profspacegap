//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: profspacegap.cpp
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
#include "profspacegap.h"
#include "rtwtypes.h"
#include "profspacegap_types.h"

// Block signals (default storage)
B_profspacegap_T profspacegap_B;

// Block states (default storage)
DW_profspacegap_T profspacegap_DW;

// Real-time model
RT_MODEL_profspacegap_T profspacegap_M_ = RT_MODEL_profspacegap_T();
RT_MODEL_profspacegap_T *const profspacegap_M = &profspacegap_M_;

// Model step function
void profspacegap_step(void)
{
  SL_Bus_profspacegap_std_msgs_Float64 b_varargout_2;
  SL_Bus_profspacegap_std_msgs_Float64 rtb_BusAssignment;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S4>/SourceBlock'
  b_varargout_1 = Sub_profspacegap_2.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S5>/Enable'

  if (b_varargout_1) {
    // SignalConversion generated from: '<S5>/In1'
    profspacegap_B.In1 = b_varargout_2;
  }

  // End of MATLABSystem: '<S4>/SourceBlock'
  // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   MATLAB Function: '<Root>/MATLAB Function1'

  rtb_BusAssignment.Data = (profspacegap_B.In1.Data - 5.0) * 0.1;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S3>/SinkBlock'
  Pub_profspacegap_4.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
}

// Model initialize function
void profspacegap_initialize(void)
{
  {
    char_T b_zeroDelimTopic[11];
    static const char_T tmp[10] = { '/', 'l', 'e', 'a', 'd', '_', 'd', 'i', 's',
      't' };

    static const char_T tmp_0[10] = { '/', 'c', 'm', 'd', '_', 'a', 'c', 'c',
      'e', 'l' };

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S5>/In1' incorporates:
    //   Outport: '<S5>/Out1'

    profspacegap_B.In1 = profspacegap_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem'

    // Start for MATLABSystem: '<S4>/SourceBlock'
    profspacegap_DW.obj_g.matlabCodegenIsDeleted = false;
    profspacegap_DW.obj_g.isInitialized = 1;
    for (int32_T i = 0; i < 10; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[10] = '\x00';
    Sub_profspacegap_2.createSubscriber(&b_zeroDelimTopic[0], 1);
    profspacegap_DW.obj_g.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    profspacegap_DW.obj.matlabCodegenIsDeleted = false;
    profspacegap_DW.obj.isInitialized = 1;
    for (int32_T i = 0; i < 10; i++) {
      b_zeroDelimTopic[i] = tmp_0[i];
    }

    b_zeroDelimTopic[10] = '\x00';
    Pub_profspacegap_4.createPublisher(&b_zeroDelimTopic[0], 1);
    profspacegap_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'
  }
}

// Model terminate function
void profspacegap_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S4>/SourceBlock'
  if (!profspacegap_DW.obj_g.matlabCodegenIsDeleted) {
    profspacegap_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S3>/SinkBlock'
  if (!profspacegap_DW.obj.matlabCodegenIsDeleted) {
    profspacegap_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S3>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
