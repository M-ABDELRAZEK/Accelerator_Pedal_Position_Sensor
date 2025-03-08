/*
 * File: APP_SensorFailureDetection.h
 *
 * Code generated for Simulink model 'APP_SensorFailureDetection'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Mar  8 22:20:33 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_APP_SensorFailureDetection_h_
#define RTW_HEADER_APP_SensorFailureDetection_h_
#ifndef APP_SensorFailureDetection_COMMON_INCLUDES_
#define APP_SensorFailureDetection_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                         /* APP_SensorFailureDetection_COMMON_INCLUDES_ */

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T APP_Sensor1;                  /* '<Root>/APP_Sensor1' */
  real_T APP_Sensor2;                  /* '<Root>/APP_Sensor2' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T APP_SensorFailure1;        /* '<Root>/APP_SensorFailure1' */
  boolean_T APP_SensorFailure2;        /* '<Root>/APP_SensorFailure2' */
  boolean_T APP_SensorFailureCoherency;/* '<Root>/APP_SensorFailureCoherency' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void APP_SensorFailureDetection_initialize(void);
extern void APP_SensorFailureDetection_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('SensorFailureDetection/APP_SensorFailureDetection')    - opens subsystem SensorFailureDetection/APP_SensorFailureDetection
 * hilite_system('SensorFailureDetection/APP_SensorFailureDetection/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SensorFailureDetection'
 * '<S1>'   : 'SensorFailureDetection/APP_SensorFailureDetection'
 */
#endif                            /* RTW_HEADER_APP_SensorFailureDetection_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
