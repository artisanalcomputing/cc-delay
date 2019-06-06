/*
  ==============================================================================

    CCDelayFeedbackPanel.h
    Created: 4 Jun 2019 12:30:07pm
    Author:  accraze

  ==============================================================================
*/

#pragma once

#import "CCPanelBase.h"
#import "CCParameterSlider.h"

class CCDelayFeedbackPanel
:    public CCPanelBase
{
public:
    CCDelayFeedbackPanel(CcdelayAudioProcessor* inProcessor);
    ~CCDelayFeedbackPanel();
    
    void paint(Graphics& g) override;
    
    void setParameterID(int inParameterID);
private:
    std::unique_ptr<Slider> mSlider;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(CCDelayFeedbackPanel);
};
