/*
  ==============================================================================

    CCDelay.cpp
    Created: 3 Jun 2019 9:06:00pm
    Author:  accraze

  ==============================================================================
*/

#include "CCDelay.h"
#include "JuceHeader.h"

enum CCDelayType
{
    kCCDelayType_Delay = 0,
    kCCDelayType_Chorus,
};

CCDelay::CCDelay()
:    mSampleRate(-1),
mFeedbackSample(0.0),
mTimeSmoothed(0.0f),
mDelayIndex(0)
{
    
}

CCDelay::~CCDelay()
{
    
}

void CCDelay::setSampleRate(double inSampleRate)
{
    mSampleRate = inSampleRate;
}

void CCDelay::reset()
{
    mTimeSmoothed = 0.0f;
    zeromem(mBuffer, sizeof(double) * maxBufferDelaySize);
}

void  CCDelay::process(float* inAudio,
                        float inTime,
                        float inFeedback,
                        float inWetDry,
                        float* outAudio,
                        int inNumSamplesToRender)
{
    const float wet = inWetDry;
    const float dry = 1.0f - wet;
    const float feedbackMapped = jmap(inFeedback, 0.0f, 1.0f, 0.0f, 1.2f);
    
    for(int i = 0; i < inNumSamplesToRender; i++){
        
        mTimeSmoothed = mTimeSmoothed - kParameterSmoothingCoeff_Fine*(mTimeSmoothed-inTime);
        
        const double delayTimeInSamples = (mTimeSmoothed * mSampleRate);
        const double sample = getInterpolatedSample(delayTimeInSamples);
        mBuffer[mDelayIndex] = inAudio[i] + (mFeedbackSample * feedbackMapped);
        
        mFeedbackSample = sample;
        
        outAudio[i] = (inAudio[i] * dry + sample * wet);
        
        mDelayIndex = mDelayIndex + 1;
        
        if(mDelayIndex >= maxBufferDelaySize){
            mDelayIndex = mDelayIndex - maxBufferDelaySize;
        }
    }
    
}

double CCDelay::getInterpolatedSample(float inDelayTimeInSamples)
{
    double readPosition = (double)mDelayIndex - inDelayTimeInSamples;
    if (readPosition < 0.0f) {
        readPosition = readPosition + maxBufferDelaySize;
    }
    
    int index_y0 = (int)readPosition - 1;
    
    if(index_y0 <= 0){
        index_y0 = index_y0 + maxBufferDelaySize;
    }
    
    int index_y1 = readPosition;
    
    if(index_y1 > maxBufferDelaySize){
        index_y1 = index_y1 - maxBufferDelaySize;
    }
    
    const float sample_y0 = mBuffer[index_y0];
    const float sample_y1 = mBuffer[index_y1];
    const float t = readPosition - (int)readPosition;
    
    double outSample = cc_linear_interp(sample_y0, sample_y1, t);
    
    return outSample;
}
