/*
  ==============================================================================

    CCImagePanel.h
    Created: 22 Jun 2019 3:10:27pm
    Author:  accraze

  ==============================================================================
*/

#pragma once

#import "CCPanelBase.h"
#import "CCParameterSlider.h"

class CCImagePanel
:    public CCPanelBase
{
public:
    CCImagePanel(CcdelayAudioProcessor* inProcessor);
    ~CCImagePanel();
    
    void paint(Graphics& g) override;
private:
    Image mImage;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(CCImagePanel);
};
