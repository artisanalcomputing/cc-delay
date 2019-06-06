/*
  ==============================================================================

    CCDelayMixPanel.cpp
    Created: 4 Jun 2019 12:29:53pm
    Author:  accraze

  ==============================================================================
*/

#include "CCDelayMixPanel.h"

#include "CCParameters.h"
#include "CCHelperFunctions.h"


CCDelayMixPanel::CCDelayMixPanel(CcdelayAudioProcessor* inProcessor)
:    CCPanelBase(inProcessor)
{
    setSize(PARAM_PANEL_WIDTH, PARAM_PANEL_HEIGHT);
}

CCDelayMixPanel::~CCDelayMixPanel()
{
    
}

void CCDelayMixPanel::paint(Graphics& g)
{
    CCPanelBase::paint(g);
    
    if(mSlider){
        paintComponentLabel(g, &*mSlider);
    }
}

void CCDelayMixPanel::setParameterID(int inParameterID)
{
    mSlider.reset(new CCParameterSlider(mProcessor->parameters, CCParameterID[inParameterID], CCParameterLabel[inParameterID]));
    const int slider_size = 60;
    
    mSlider->setBounds((getWidth() * 0.5) - (slider_size *0.5),
                       (getHeight() * 0.5) - (slider_size * 0.5) - 10,
                       slider_size,
                       slider_size
                       );
    
    addAndMakeVisible(*mSlider);
}
