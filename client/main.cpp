#include <iostream>
#include "GLFW/glfw3.h"
#include "ccode.c"

using namespace std;

int main() {
    GLFWwindow* window;
    glfwInit();
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    glfwMakeContextCurrent(window);
    while (!glfwWindowShouldClose(window)) {
        // cook.
    }
    glfwTerminate();
    return 0;
}

