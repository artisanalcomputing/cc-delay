/*
  ==============================================================================

    CCDelayTimePanel.h
    Created: 4 Jun 2019 12:29:40pm
    Author:  accraze

  ==============================================================================
*/

#pragma once
#import "CCPanelBase.h"
#import "CCParameterSlider.h"

class CCDelayTimePanel
:    public CCPanelBase
{
public:
    CCDelayTimePanel(CcdelayAudioProcessor* inProcessor);
    ~CCDelayTimePanel();
    
    void paint(Graphics& g) override;
    
    void setParameterID(int inParameterID);
private:
    std::unique_ptr<Slider> mSlider;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(CCDelayTimePanel);
};
