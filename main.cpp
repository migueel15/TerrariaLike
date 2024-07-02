#include "engine/renderer.hpp"
#include "engine/window.hpp"

int main(int argc, char *argv[]) {
  Window window(800, 600, "TerrariaGL");

  std::vector<Vertex> vertices = {
      {.position = {-0.5, -0.5, 0.0}, .texturePos = {0.0, 0.0}},
      {.position = {-0.5, 0.5, 0.0}, .texturePos = {0.0, 1.0}},
      {.position = {0.5, 0.5, 0.0}, .texturePos = {1.0, 1.0}},
      {.position = {-0.5, -0.5, 0.0}, .texturePos = {0.0, 0.0}},
      {.position = {0.5, 0.5, 0.0}, .texturePos = {1.0, 1.0}},
      {.position = {0.5, -0.5, 0.0}, .texturePos = {1.0, 0.0}}};
  Texture texture("../assets/sprites/image-test.jpg");
  Mesh mesh(vertices);
  Shader shader("../assets/shaders/default.vs", "../assets/shaders/default.fs");

  Object ob(mesh, shader, texture);
  Renderer renderer(ob);

  while (!window.shouldClose()) {
    window.update();
    renderer.update();
  }
  return 0;
}
