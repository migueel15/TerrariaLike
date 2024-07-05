#pragma once

#include "glad/glad.h"
// dont change order
#include "GLFW/glfw3.h"

class Window {
public:
  Window(int width, int height, const char *title);
  ~Window();

  GLFWwindow *getWindow() { return window; }
  void update();
  bool shouldClose();

private:
  static void onResizeWindow(GLFWwindow *window, int width, int height);
  GLFWwindow *window;
};
