#include "engine/renderer.hpp"
#include "engine/gameObject.hpp"
#include "glad/glad.h"

Renderer::Renderer(GameObject gObject) : ob(gObject) {}

void Renderer::update() {
  clearScreen();
  ob.draw();
}

void Renderer::clearScreen() {
  glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);
}
