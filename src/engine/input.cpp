#include "engine/input.hpp"
#include <iostream>

void keyCallback(GLFWwindow *window, int key, int scancode, int action,
                 int mods) {
  if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
    glfwSetWindowShouldClose(window, GLFW_TRUE);
    std::cout << "Escape key pressed" << std::endl;
  }
}

void cursorPositionCallback(GLFWwindow *window, double xpos, double ypos) {
  std::cout << "Mouse position: " << xpos << ", " << ypos << std::endl;
}

void mouseButtonCallback(GLFWwindow *window, int button, int action, int mods) {
}
