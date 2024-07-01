#include "engine/renderer.hpp"
#include "engine/mesh.hpp"
#include <vector>

Renderer::Renderer() {}

void Renderer::update() {
  clearScreen();
  std::vector<Vertex> vertices = {{
                                      .position = {-0.5, 0.0, 0.0},
                                  },
                                  {
                                      .position = {0.0, 0.5, 0.0},
                                  },
                                  {
                                      .position = {0.5, 0.0, 0.0},
                                  }};
  Mesh mesh(vertices);
  mesh.draw();
}

void Renderer::clearScreen() {
  glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);
}
