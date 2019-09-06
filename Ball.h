/*
  ==============================================================================

    Ball.h
    Created: 31 Aug 2019 9:50:33pm
    Author:  xiaoyu.fan

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class Ball    : public Component
{
public:
    Ball();
    ~Ball();

    void paint (Graphics&) override;
    void resized() override;
	
	Label uppercaseLabel;
	Label uppercaseText;
	Label showa;
	Label showb;
private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Ball)
};
