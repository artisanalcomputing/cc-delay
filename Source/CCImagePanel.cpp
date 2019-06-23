/*
  ==============================================================================

    CCImagePanel.cpp
    Created: 22 Jun 2019 3:10:27pm
    Author:  accraze

  ==============================================================================
*/

#include "CCImagePanel.h"

CCImagePanel::CCImagePanel(CcdelayAudioProcessor* inProcessor)
:    CCPanelBase(inProcessor)
{
    setSize(470, 130);
    mImage = ImageCache::getFromMemory(BinaryData::bumper_jpg,BinaryData::bumper_jpgSize);
}

CCImagePanel::~CCImagePanel()
{
}

void CCImagePanel::paint(Graphics& g)
{
    CCPanelBase::paint(g);
    g.drawImage(mImage, getLocalBounds().toFloat());
}

