/*
 * File: SensorFailureDetection.c
 *
 * Code generated for Simulink model 'SensorFailureDetection'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Mar  8 22:20:04 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "SensorFailureDetection.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void SensorFailureDetection_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/APP_SensorFailureDetection' */
  /* Outport: '<Root>/APP_SensorFailure1' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Inport: '<Root>/APP_Sensor1'
   *  Logic: '<S1>/OR'
   *  RelationalOperator: '<S1>/Relational Operator'
   *  RelationalOperator: '<S1>/Relational Operator1'
   */
  rtY.APP_SensorFailure1 = ((rtU.APP_Sensor1 > 4.5) || (rtU.APP_Sensor1 < 0.5));

  /* Outport: '<Root>/APP_SensorFailure2' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Inport: '<Root>/APP_Sensor2'
   *  Logic: '<S1>/OR1'
   *  RelationalOperator: '<S1>/Relational Operator2'
   *  RelationalOperator: '<S1>/Relational Operator3'
   */
  rtY.APP_SensorFailure2 = ((rtU.APP_Sensor2 > 4.5) || (rtU.APP_Sensor2 < 0.5));

  /* Outport: '<Root>/APP_SensorFailureCoherency' incorporates:
   *  Constant: '<S1>/Constant4'
   *  Inport: '<Root>/APP_Sensor1'
   *  Inport: '<Root>/APP_Sensor2'
   *  RelationalOperator: '<S1>/Relational Operator4'
   *  Sum: '<S1>/Add'
   */
  rtY.APP_SensorFailureCoherency = (rtU.APP_Sensor1 + rtU.APP_Sensor2 != 5.0);

  /* End of Outputs for SubSystem: '<Root>/APP_SensorFailureDetection' */
}

/* Model initialize function */
void SensorFailureDetection_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
