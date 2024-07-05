#include "engine/window.hpp"
#include "engine/input.hpp"
#include <iostream>

Window::Window(int width, int height, const char *title) {
  if (!glfwInit()) {
    std::cerr << "Failed to initialize GLFW" << std::endl;
    exit(EXIT_FAILURE);
  }

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  window = glfwCreateWindow(width, height, title, NULL, NULL);
  if (!window) {
    std::cerr << "Failed to create window" << std::endl;
    glfwTerminate();
    exit(EXIT_FAILURE);
  }

  glfwMakeContextCurrent(window);
  //
  // quita Vsync
  glfwSwapInterval(0);

  // attach callbacks for inputs
  glfwSetKeyCallback(window, keyCallback);
  glfwSetCursorPosCallback(window, cursorPositionCallback);
  glfwSetMouseButtonCallback(window, mouseButtonCallback);
  glfwSetFramebufferSizeCallback(window, onResizeWindow);

  // init glad
  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    std::cerr << "Failed to initialize GLAD" << std::endl;
    glfwTerminate();
  }

  // set viewport
  glViewport(0, 0, width, height);
}

Window::~Window() {
  glfwDestroyWindow(window);
  glfwTerminate();
}

void Window::update() {
  glfwSwapBuffers(window);
  glfwPollEvents();
}

bool Window::shouldClose() { return glfwWindowShouldClose(window); }

void Window::onResizeWindow(GLFWwindow *window, int width, int height) {
  glViewport(0, 0, width, height);
}
