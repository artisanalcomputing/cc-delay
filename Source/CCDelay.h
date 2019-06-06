/*
  ==============================================================================

    CCDelay.h
    Created: 3 Jun 2019 9:06:00pm
    Author:  accraze

  ==============================================================================
*/

#pragma once

#include "CCAudioHelpers.h"

class CCDelay {
public:
    CCDelay();
    ~CCDelay();
    
    void setSampleRate(double inSampleRate);
    
    void reset();
    
    void  process(float* inAudio,
                  float inTime,
                  float inFeedback,
                  float inWetDry,
                  float* outAudio,
                  int inNumSamplesToRender);
private:
    double getInterpolatedSample(float inDelayTimeInSamples);
    
    double mSampleRate;
    double mBuffer[maxBufferDelaySize];
    double mFeedbackSample;
    
    float mTimeSmoothed;
    
    int mDelayIndex;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(CCDelay);
};


