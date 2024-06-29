#include "GLFW/glfw3.h"
#include "engine/input.hpp"
#include "engine/window.hpp"

int main(int argc, char *argv[]) {
  Window window(800, 600, "Hello World");

  while (!window.shouldClose()) {
    window.update();
  }
  return 0;
}
