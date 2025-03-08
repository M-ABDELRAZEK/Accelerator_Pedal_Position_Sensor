/*
 * File: APP_SensorFailureDetection_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef APP_SENSORFAILUREDETECTION_CA_H
#define APP_SENSORFAILUREDETECTION_CA_H

/* preprocessor validation checks */
#include "APP_SensorFailureDetection_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_APP_SensorFailureDetection_HWRes;
extern CA_PWS_TestResults CA_APP_SensorFailureDetection_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_APP_SensorFailureDetection_ExpHW;
extern CA_HWImpl CA_APP_SensorFailureDetection_ActHW;

/* entry point function to run tests */
void APP_SensorFailureDetection_caRunTests(void);

#endif                                 /* APP_SENSORFAILUREDETECTION_CA_H */
