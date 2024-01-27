#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cout << "ofApp:setup()" << endl;
    vector<string> vMidiIn = midiIn.getInPortList();
    for(int i=0; i<vMidiIn.size(); i++){
        cout << "Midi input: " + vMidiIn[i] << endl;
    }

    vector<string> vMidiOut = midiOut.getOutPortList();
    for(int i=0; i<vMidiOut.size(); i++){
        cout << "Midi output: " + vMidiOut[i] << endl;
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::exit(){
    cout << "ofApp::exit()" << endl;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    cout << "Key pressed(): " + key << endl;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
