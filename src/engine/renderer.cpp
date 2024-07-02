#include "engine/renderer.hpp"
#include "engine/mesh.hpp"
#include "engine/object.hpp"
#include "engine/texture.hpp"
#include <vector>

Renderer::Renderer(Object ob) : ob(ob) {}

void Renderer::update() {
  clearScreen();
  ob.draw();
}

void Renderer::clearScreen() {
  glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);
}
