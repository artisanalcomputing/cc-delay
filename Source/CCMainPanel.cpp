/*
  ==============================================================================

    CCMainPanel.cpp
    Created: 4 Jun 2019 10:11:42am
    Author:  accraze

  ==============================================================================
*/

#include "CCMainPanel.h"

CCMainPanel::CCMainPanel(CcdelayAudioProcessor* inProcessor)
: CCPanelBase(inProcessor)
{
    setSize(MAIN_PANEL_WIDTH, MAIN_PANEL_HEIGHT);
    
    mDelayTimePanel.reset(new CCDelayTimePanel(inProcessor));
    mDelayTimePanel->setTopLeftPosition(10, 10);
    mDelayTimePanel->setParameterID(kParameter_DelayTime);
    addAndMakeVisible(*mDelayTimePanel);
//
    mDelayFeedbackPanel.reset(new CCDelayFeedbackPanel(inProcessor));
    mDelayFeedbackPanel->setTopLeftPosition(175, 10);
    mDelayFeedbackPanel->setParameterID(kParameter_DelayFeedback);
    addAndMakeVisible(*mDelayFeedbackPanel);
//
    mDelayMixPanel.reset(new CCDelayMixPanel(inProcessor));
    mDelayMixPanel->setTopLeftPosition(340, 10);
    mDelayMixPanel->setParameterID(kParameter_DelayWetDry);
    addAndMakeVisible(*mDelayMixPanel);
}

CCMainPanel::~CCMainPanel()
{
    
}


