//
//  SoundString.cpp
//  strummer
//
//  Created by Clay Ewing on 9/2/13.
//
//

#include "SoundString.h"

void SoundString::display() {
    ofSetRectMode(OF_RECTMODE_CENTER);
    if (plucked) {
        ofSetColor(255, 0, 0);
        if (timeToMute <= ofGetElapsedTimeMillis()) {
            plucked = false;
        }
    }
    else {
        ofSetColor(255, 255, 255);
    }
    ofRect(x, ofGetHeight()/2, STRING_SIZE, ofGetHeight());
    ofSetRectMode(OF_RECTMODE_CORNER);
}

void SoundString::create(int _x, float _pitch) {
    sound.loadSound("sounds/synth.wav");
    x = _x;
    pitch = _pitch;
}

void SoundString::pluck(float y) {
    plucked = true;
    float speed = ofMap(y, 0, ofGetHeight(), pitch + .1, pitch + 1.1);
    sound.setSpeed(speed);
    sound.play();
    timeToMute = ofGetElapsedTimeMillis() + 50;
}