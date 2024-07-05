#include "engine/renderer.hpp"
#include "glad/glad.h"

Renderer::Renderer(std::vector<GameObject> objetos) { this->objetos = objetos; }

void Renderer::update() {
  clearScreen();
  for (auto obj = objetos.begin(); obj != objetos.end(); obj++) {
    obj->draw();
  }
}

void Renderer::clearScreen() {
  glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);
}
