#include "engine/mesh.hpp"
#include "engine/window.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
  Window window(800, 600, "Hello World");

  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    std::cerr << "Failed to initialize GLAD" << std::endl;
    glfwTerminate();
  }
  Mesh mesh({0.4f, 1.0f, 0.0f, 0.4f, -0.4f, 0.0f}, {0, 1, 2});

  while (!window.shouldClose()) {
    mesh.draw();
    window.update();
  }
  return 0;
}
