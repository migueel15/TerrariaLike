#include "engine/renderer.hpp"
#include "engine/window.hpp"

int main(int argc, char *argv[]) {
  Window window(800, 600, "TerrariaGL");
  Renderer renderer;

  while (!window.shouldClose()) {
    window.update();
    renderer.update();
  }
  return 0;
}
