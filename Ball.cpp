/*
  ==============================================================================

    Ball.cpp
    Created: 31 Aug 2019 9:50:33pm
    Author:  xiaoyu.fan

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "Ball.h"

//==============================================================================
Ball::Ball()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

Ball::~Ball()
{
}

void Ball::paint (Graphics& g)
{
	addAndMakeVisible(uppercaseLabel);
	uppercaseLabel.setText("Key:", dontSendNotification);
	uppercaseLabel.attachToComponent(&uppercaseText, true);
	uppercaseLabel.setColour(Label::textColourId, Colours::orange);
	uppercaseLabel.setJustificationType(Justification::right);

	addAndMakeVisible(uppercaseText);
	uppercaseText.setColour(Label::backgroundColourId, Colours::orange);
	
	addAndMakeVisible(showa);
	showa.setColour(Label::backgroundColourId, Colours::transparentBlack);
	showa.setColour(Label::textColourId, Colours::black);

	addAndMakeVisible(showb);
	showb.setColour(Label::backgroundColourId, Colours::transparentBlack);
	showb.setColour(Label::textColourId, Colours::black);

	showa.setText("Level Averaging Time", dontSendNotification);
	showb.setText("Level Offset dB", dontSendNotification);
}

void Ball::resized()
{
	uppercaseText.setBounds(100, 50, 100, 20);
	showa.setBounds(10, 90, 200, 20);
	showb.setBounds(10, 190, 200, 20);
	;
	// This method is where you should set the bounds of any child
    // components that your component contains..

}
