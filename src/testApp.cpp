#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    isStop = false;
    camSize.x = 800;
    camSize.y = 600;
    grabber.setVerbose(true);
    grabber.initGrabber((int)camSize.x, (int)camSize.y);
    ofBackground(100, 100, 100);
}

//--------------------------------------------------------------
void testApp::update(){
    if(isStop) return;
    grabber.grabFrame();
}

//--------------------------------------------------------------
void testApp::draw(){
    grabber.draw(0, 0, ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if (key == 's' || key == 'S'){
        grabber.videoSettings();
    }
    else if (key == ' '){
        isStop = !isStop;
    }
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

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