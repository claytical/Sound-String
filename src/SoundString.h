//
//  SoundString.h
//  strummer
//
//  Created by Clay Ewing on 9/2/13.
//
//

#pragma once
#include "ofMain.h"
#define STRING_SIZE 20

class SoundString {
    
public:
	
	void display();
	void create(int _x, float _pitch);
    void pluck(float _force);
    
    int x;
    float pitch;
    bool plucked;
    float timeToMute;
    ofSoundPlayer sound;

};

