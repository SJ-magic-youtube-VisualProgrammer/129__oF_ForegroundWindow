/************************************************************
************************************************************/
#include "ofApp.h"

/************************************************************
************************************************************/

/******************************
******************************/
void ofApp::setup(){
	/********************
	********************/
	ofSetWindowTitle("Foreground");
	
	ofSetWindowShape( WINDOW_WIDTH, WINDOW_HEIGHT );
	ofSetVerticalSync(false);	// trueとどっちがいいんだろう？
	ofSetFrameRate(30);
	
	ofSetEscapeQuitsApp(false);
	
	/********************
	********************/
	ofSeedRandom();
	
	ofEnableAntiAliasing();
	ofEnableBlendMode(OF_BLENDMODE_ALPHA); // OF_BLENDMODE_DISABLED, OF_BLENDMODE_ALPHA, OF_BLENDMODE_ADD
	
	/********************
	********************/
	ofEnableFloating(b_ForegroundWindow);
}

/******************************
******************************/
void ofApp::update(){

}

/******************************
******************************/
void ofApp::draw(){
	ofBackground(50);
}

/******************************
******************************/
void ofApp::keyPressed(int key){
	switch(key){
		case 'f':
			b_FullScreen = !b_FullScreen;
			
			if(b_FullScreen){
				ofSetFullscreen(true);
			}else{
				ofSetFullscreen(false);
				ofSetWindowShape(WINDOW_WIDTH, WINDOW_HEIGHT);
			}
			break;
			
		case ' ':
			b_ForegroundWindow = !b_ForegroundWindow;
			ofEnableFloating(b_ForegroundWindow);
			
			printf("b_ForegroundWindow = %d\n", b_ForegroundWindow);
			fflush(stdout);
			break;
	}
}

/******************************
******************************/
void ofApp::keyReleased(int key){

}

/******************************
******************************/
void ofApp::mouseMoved(int x, int y ){

}

/******************************
******************************/
void ofApp::mouseDragged(int x, int y, int button){

}

/******************************
******************************/
void ofApp::mousePressed(int x, int y, int button){

}

/******************************
******************************/
void ofApp::mouseReleased(int x, int y, int button){

}

/******************************
******************************/
void ofApp::mouseEntered(int x, int y){

}

/******************************
******************************/
void ofApp::mouseExited(int x, int y){

}

/******************************
******************************/
void ofApp::windowResized(int w, int h){

}

/******************************
******************************/
void ofApp::gotMessage(ofMessage msg){

}

/******************************
******************************/
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
