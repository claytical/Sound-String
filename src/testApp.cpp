#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetBackgroundColor(0, 0, 0);
    for (int i = 0; i < ofGetWidth(); i += ofGetWidth()/6) {
        SoundString soundString;
        soundString.create(i, i*.01);
        strings.push_back(soundString);
  
  }
    
}

//--------------------------------------------------------------
void testApp::update(){
    for (int i = 0; i < strings.size(); i++) {
        if (!strings[i].plucked) {
            if (ofDist(ofGetMouseX(), 0, strings[i].x, 0) <=STRING_SIZE/2) {
                strings[i].pluck(ofGetMouseY());
                
            }
        }
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    for (int i = 0; i < strings.size(); i++) {
        strings[i].display();
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
