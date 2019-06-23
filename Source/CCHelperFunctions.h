/*
  ==============================================================================

    CCHelperFunctions.h
    Created: 5 Jun 2019 9:05:06pm
    Author:  accraze

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"
#include "CCInterfaceDefines.h"

inline void paintComponentLabel(Graphics& g, Component* inComponent)
{
    const int x = inComponent->getX() - (inComponent->getWidth() * 0.25f);
    const int y = inComponent->getY() + inComponent->getHeight() + 10;
    const int w = inComponent->getWidth() * 1.5f;
    const int h = 20;
    const float cornerSize = 3.0f;
    
//    g.setColour(KAPColour_3);
//    g.fillRoundedRectangle(x, y, w, h, cornerSize);
    
    g.setColour(juce::Colours::whitesmoke);
    g.setFont(font_1);
    
    const String label = inComponent->getName();
    
    g.drawFittedText(label, x, y, w, h, Justification::centred, 1);
}
