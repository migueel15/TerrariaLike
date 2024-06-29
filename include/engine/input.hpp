#pragma once

#include <GLFW/glfw3.h>

void keyCallback(GLFWwindow *window, int key, int scancode, int action,
                 int mods);
void cursorPositionCallback(GLFWwindow *window, double xpos, double ypos);
void mouseButtonCallback(GLFWwindow *window, int button, int action, int mods);
