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

class CCMainPanel
: public CCPanelBase
{
public:
    CCMainPanel(CcdelayAudioProcessor* inProcessor);
    ~CCMainPanel();
private:
    
//    std::unique_ptr<KAPTopPanel> mTopPanel;
//    std::unique_ptr<KAPGainPanel> mInputGainPanel;
//    std::unique_ptr<KAPGainPanel> mOutputGainPanel;
//    std::unique_ptr<KAPCenterPanel> mCenterPanel;
};
