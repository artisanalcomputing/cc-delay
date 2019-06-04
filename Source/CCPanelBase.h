/*
  ==============================================================================

    CCPanelBase.h
    Created: 4 Jun 2019 12:08:23pm
    Author:  accraze

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"
#include "PluginProcessor.h"
#include "CCInterfaceDefines.h"

class CCPanelBase
: public Component
{
public:
    CCPanelBase(CcdelayAudioProcessor* inProcessor);
    ~CCPanelBase();
    
    void mouseEnter(const MouseEvent& event) override;
    void mouseExit(const MouseEvent& event) override;
    
    void paint (Graphics &g) override;
    
protected:
    CcdelayAudioProcessor* mProcessor;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(CCPanelBase);
};
