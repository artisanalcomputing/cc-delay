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
    // add delay time
    mDelayTimePanel.reset(new CCDelayTimePanel(inProcessor));
    mDelayTimePanel->setTopLeftPosition(10, 10);
    mDelayTimePanel->setParameterID(kParameter_DelayTime);
    addAndMakeVisible(*mDelayTimePanel);
    // add mix/wetdry
    mDelayMixPanel.reset(new CCDelayMixPanel(inProcessor));
    mDelayMixPanel->setTopLeftPosition(175, 10);
    mDelayMixPanel->setParameterID(kParameter_DelayWetDry);
    addAndMakeVisible(*mDelayMixPanel);
    // add feedback/gyit
    mDelayFeedbackPanel.reset(new CCDelayFeedbackPanel(inProcessor));
    mDelayFeedbackPanel->setTopLeftPosition(340, 10);
    mDelayFeedbackPanel->setParameterID(kParameter_DelayFeedback);
    addAndMakeVisible(*mDelayFeedbackPanel);
    // add image panel
    mImagePanel.reset(new CCImagePanel(inProcessor));
    mImagePanel->setTopLeftPosition(15, 155);
    addAndMakeVisible(*mImagePanel);
}

CCMainPanel::~CCMainPanel()
{
    
}


