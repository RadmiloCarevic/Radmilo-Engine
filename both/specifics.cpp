string getCurrentOS() {
    #ifdef _WIN32
        #ifdef _WIN64
            return "win64";
        #endif
        return "win32";
    #endif
    #ifdef __APPLE__
        #include "TargetConditionals.h"
        #ifdef TARGET_OS_IPHONE
            return "ios";
        #endif
        #ifdef TARGET_OS_MAC
            return "macos";
        #endif
    #endif
    #ifdef BSD
        return "bsd";
    #endif
	#ifdef __unix__
        #ifdef __linux__
            #ifdef __ANDROID__
                return "android";
            #endif
            return "linux";
        #endif
        return "unix";
	#endif
    return "unknown";
}

/*struct rad {

}*/
