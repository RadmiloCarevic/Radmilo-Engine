#include <stdio.h>

int getCurrentOS() {
    string guessed = "unknown";
    
    #ifdef _WIN32
        guessed = "windows32";
        #ifdef _WIN64
            guessed = "windows64";
        #endif
    #elif __APPLE__
        #include "TargetConditionals.h"
        #elif TARGET_OS_IPHONE
            guessed = "ios";
        #elif TARGET_OS_MAC
            guessed = "macos";
        #endif
    #elif BSD
        guessed = "bsd";
    #elif __linux__
        guessed = "linux";
	#elif __unix__
	    guessed = "unix";
	#endif

    printf("Current OS is",guessed);
    return guessed;
}
