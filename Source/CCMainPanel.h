/*
  ==============================================================================

    CCMainPanel.h
    Created: 4 Jun 2019 10:11:42am
    Author:  accraze

  ==============================================================================
*/

#pragma once

#include "CCPanelBase.h"
#include "PluginProcessor.h"
#include "CCDelayTimePanel.h"
#include "CCDelayFeedbackPanel.h"
#include "CCDelayMixPanel.h"
#include "CCImagePanel.h"

class CCMainPanel
: public CCPanelBase
{
public:
    CCMainPanel(CcdelayAudioProcessor* inProcessor);
    ~CCMainPanel();
private:
    std::unique_ptr<CCDelayTimePanel> mDelayTimePanel;
    std::unique_ptr<CCDelayFeedbackPanel> mDelayFeedbackPanel;
    std::unique_ptr<CCDelayMixPanel> mDelayMixPanel;
    std::unique_ptr<CCImagePanel> mImagePanel;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(CCMainPanel);
};
