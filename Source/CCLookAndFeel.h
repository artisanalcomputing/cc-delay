/*
  ==============================================================================

    CCLookAndFeel.h
    Created: 8 Jun 2019 9:20:49am
    Author:  accraze

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"
#include "CCInterfaceDefines.h"

class CCLookAndFeel
:    public LookAndFeel_V4
{
public:
    CCLookAndFeel()
    {
        //button text colours
        setColour(TextButton::buttonColourId, CCColour_1);
        setColour(TextButton::textColourOnId, CCColour_1);
        setColour(TextButton::textColourOffId, CCColour_1);
    }
    virtual ~CCLookAndFeel(){};

    //** sliders */
    void drawRotarySlider (Graphics& g, int x, int y, int width, int height,
                           float sliderPosProportional, float rotaryStartAngle,
                           float rotaryEndAngle, Slider& slider) override
    {
        
        auto radius = jmin (width / 2, height / 2) - 4.0f;
        auto centreX = x + width  * 0.5f;
        auto centreY = y + height * 0.5f;
        auto rx = centreX - radius;
        auto ry = centreY - radius;
        auto rw = radius * 2.0f;
        auto angle = rotaryStartAngle + sliderPosProportional * (rotaryEndAngle - rotaryStartAngle);
        
        // fill
        g.setColour (CCColour_8);
        g.fillEllipse (rx, ry, rw, rw);
        // outline
        g.setColour (CCColour_8);
        g.drawEllipse (rx, ry, rw, rw, 1.0f);
        
        Path p;
        auto pointerLength = radius * 0.66f;
        auto pointerThickness = 2.0f;
        p.addRectangle (-pointerThickness * 0.5f, -radius, pointerThickness, pointerLength);
        p.applyTransform (AffineTransform::rotation (angle).translated (centreX, centreY));
        
        g.setColour (Colours::whitesmoke);
        g.fillPath (p);
    }
private:

};
