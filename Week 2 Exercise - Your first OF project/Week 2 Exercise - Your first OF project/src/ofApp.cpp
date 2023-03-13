#include "ofApp.h"

void ofApp::setup(){
    ofSetBackgroundColor(255);
}

void ofApp::update(){
    // empty
}

void ofApp::draw(){
    ofSetColor(255, 0, 0);
    int segments = 1000;
    float spacing = 2*3.14 / segments;
    float radius = mouseX / 2;
    ofBeginShape();
    for (int i = 0; i < segments; i++) {
        float x = tan(spacing * i * (mouseX / 50)) * cos(spacing * i * (mouseY / 50)) * radius;
        float y = sin(spacing * i * (mouseX / 50)) * sin(spacing * i * (mouseY / 50)) * radius;
        ofVertex(x + radius, y + radius);
    }
    ofEndShape();
}

void ofApp::mouseMoved(int x, int y){
    mouseX = x;
    mouseY = y;
}

