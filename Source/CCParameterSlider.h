/*
  ==============================================================================

    CCParameterSlider.h
    Created: 5 Jun 2019 6:41:35pm
    Author:  accraze

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class CCParameterSlider
:    public Slider
{
public:
    CCParameterSlider(AudioProcessorValueTreeState& stateToControl,
                       const String& parameterId,
                       const String& parameterLabel);
    ~CCParameterSlider();
private:
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> mAttachment;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(CCParameterSlider);
};


