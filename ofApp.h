#pragma once

#include "ofMain.h"
#include "ofxGui.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void keyPressed(int key);
    
    ofVideoPlayer myVidPlayer;
    ofSoundPlayer sound;
    
    ofxPanel Gui;
    ofParameter<float>volume;
    ofParameter<float>visDecay;
    ofParameter<float>myWidth;
    ofParameter<float>myHeight;
    ofParameter<int>myMultiplier;
   
    float*fft;
    float*soundSpectrum;
    
    int bands;
    
    bool bHide;
};
