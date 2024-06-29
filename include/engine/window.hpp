#pragma once

#include <GLFW/glfw3.h>

class Window {
public:
  Window(int width, int height, const char *title);
  ~Window();

  GLFWwindow *getWindow() { return window; }
  void update();
  bool shouldClose();

private:
  GLFWwindow *window;
};
