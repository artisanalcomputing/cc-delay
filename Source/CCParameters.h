/*
  ==============================================================================

    CCParameters.h
    Created: 3 Jun 2019 9:33:02pm
    Author:  accraze

  ==============================================================================
*/

#pragma once

enum CCParameter
{
    kParameter_DelayTime = 0,
    kParameter_DelayFeedback,
    kParameter_DelayWetDry,
    kParameter_TotalNumParameters
};

static String CCParameterLabel [kParameter_TotalNumParameters] =
{
    "Time",
    "Feedback",
    "Wet Dry"
};

static String CCParameterID [kParameter_TotalNumParameters] =
{
    "Time",
    "Feedback",
    "WetDry"
};
