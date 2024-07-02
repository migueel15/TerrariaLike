#include "engine/renderer.hpp"

Renderer::Renderer(Object ob) : ob(ob) {}

void Renderer::update() {
  clearScreen();
  ob.draw();
}

void Renderer::clearScreen() {
  glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);
}
