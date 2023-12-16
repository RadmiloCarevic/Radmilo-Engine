#include <iostream>
#include <stdio.h>
#include <string>
#include <thread>

using namespace std;
//#include "prerequisites.cpp"
#include "specifics.cpp"
//#include "plugins.cpp"
#include "world.cpp"

string currentOS = "";
bool shouldGoOffline = false;

int main(int argc,char *argv[],char *envp[]) {
// make printer noises while starting up.
    currentOS = getCurrentOS();

    if (currentOS == "win32" or
        currentOS == "win64") {
        //#include <Windows.h>
    } else if (currentOS == "linux") {

    } else if (currentOS == "android") {

    } else if (currentOS == "ios") {

    } else if (currentOS == "macos") {

    } else if (currentOS == "bsd") {

    } else if (currentOS == "unix") {

    } else {
        return -1;
    }
    
    setupWorld();
    // here networking goes. 
    while (!shouldGoOffline) {
        // finished, printer is readeh to print.   
    }
    /* delete *currentOS;
    delete *shouldGoOffline;
    delete *getCurrentOS;
    delete *setupWorld; */
    return 0;
}

