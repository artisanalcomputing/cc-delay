/*
  ==============================================================================

    CCAudioHelpers.h
    Created: 3 Jun 2019 9:09:48pm
    Author:  accraze

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

#define kParameterSmoothingCoeff_Generic 0.04
#define kParameterSmoothingCoeff_Fine 0.002
#define kMeterSmoothingCoeff 0.2

const int maxBufferDelaySize = 192000;

const double kPi = 3.14159265359;
const double k2Pi = 6.28318530718;

inline float cc_linear_interp(float v0, float v1, float t)
{
    return (1 - t) * v0 + t * v1;
}
