/*
  ==============================================================================

    CCPanelBase.cpp
    Created: 4 Jun 2019 12:08:23pm
    Author:  accraze

  ==============================================================================
*/

#include "CCPanelBase.h"

#include "CCInterfaceDefines.h"

CCPanelBase::CCPanelBase(CcdelayAudioProcessor* inProcessor)
: mProcessor(inProcessor)
{
    
}

CCPanelBase::~CCPanelBase()
{
    mProcessor = nullptr;
}

void CCPanelBase::mouseEnter(const MouseEvent& event)
{
    repaint();
}

void CCPanelBase::mouseExit(const MouseEvent& event)
{
    repaint();
}

void CCPanelBase::paint (Graphics &g)
{
    g.setColour(Colours::seagreen);
    g.fillAll();
    
    g.setColour(Colours::whitesmoke);
    g.drawRoundedRectangle(0, 0, getWidth(), getHeight(), 10, 8);
}
