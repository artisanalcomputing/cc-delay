/*
  ==============================================================================

    CCParameterSlider.cpp
    Created: 5 Jun 2019 6:41:35pm
    Author:  accraze

  ==============================================================================
*/

#include "CCParameterSlider.h"

CCParameterSlider::CCParameterSlider(AudioProcessorValueTreeState& stateToControl,
                                       const String& parameterId,
                                       const String& parameterLabel)
: juce::Slider(parameterLabel)
{
    setSliderStyle(SliderStyle::RotaryHorizontalVerticalDrag);
    setTextBoxStyle(Slider::TextEntryBoxPosition::TextBoxBelow, false, 0, 0);
    
    setRange(0.0f, 1.0f, 0.001f);
    
    mAttachment.reset(new AudioProcessorValueTreeState::SliderAttachment(stateToControl, parameterId, *this));
}
CCParameterSlider::~CCParameterSlider()
{
    
}
