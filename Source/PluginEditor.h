/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "CCMainPanel.h"
#include "CCInterfaceDefines.h"
#include "CCLookAndFeel.h"

//==============================================================================
/**
*/
class CcdelayAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    CcdelayAudioProcessorEditor (CcdelayAudioProcessor&);
    ~CcdelayAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    CcdelayAudioProcessor& processor;
    
    std::unique_ptr<CCLookAndFeel> mLookAndFeel;
    std::unique_ptr<CCMainPanel> mMainPanel;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CcdelayAudioProcessorEditor)
};
