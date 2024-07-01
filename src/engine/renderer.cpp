#include "engine/renderer.hpp"
#include "engine/mesh.hpp"
#include "engine/object.hpp"
#include <vector>

Renderer::Renderer() {}

void Renderer::update() {
  clearScreen();
  std::vector<Vertex> vertices = {
      {.position = {-0.5, 0.0, 0.0}},
      {.position = {0.0, 0.5, 0.0}},
      {.position = {0.5, 0.0, 0.0}},
  };

  std::vector<Vertex> vert2 = {{.position = {-0.7, 0.5, 0.0}},
                               {.position = {-0.7, 1.0, 0.0}},
                               {.position = {-0.1, 0.75, 0.0}}};

  Mesh mesh(vertices);
  Shader shader("../assets/shaders/default.vs", "../assets/shaders/default.fs");
  Mesh mesh2(vert2);

  Object ob1(mesh, shader);
  Object ob2(mesh2, shader);

  ob1.draw();
  ob2.draw();
}

void Renderer::clearScreen() {
  glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);
}
