/*
  ==============================================================================

    CCDelayMixPanel.h
    Created: 4 Jun 2019 12:29:53pm
    Author:  accraze

  ==============================================================================
*/

#pragma once

#import "CCPanelBase.h"
#import "CCParameterSlider.h"

class CCDelayMixPanel
:    public CCPanelBase
{
public:
    CCDelayMixPanel(CcdelayAudioProcessor* inProcessor);
    ~CCDelayMixPanel();
    
    void paint(Graphics& g) override;
    
    void setParameterID(int inParameterID);
private:
    std::unique_ptr<Slider> mSlider;
};
