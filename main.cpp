#include "engine/gameObject.hpp"
#include "engine/renderer.hpp"
#include "engine/window.hpp"
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<GameObject> objetos;
  Window window(800, 600, "TerrariaGL");

  std::vector<Vertex> vertices = {
      {.position = {-0.1, -0.1, 0.0}, .texturePos = {0.0, 0.0}},
      {.position = {-0.1, 0.1, 0.0}, .texturePos = {0.0, 1.0}},
      {.position = {0.1, 0.1, 0.0}, .texturePos = {1.0, 1.0}},
      {.position = {-0.1, -0.1, 0.0}, .texturePos = {0.0, 0.0}},
      {.position = {0.1, 0.1, 0.0}, .texturePos = {1.0, 1.0}},
      {.position = {0.1, -0.1, 0.0}, .texturePos = {1.0, 0.0}}};
  Texture texture("../assets/sprites/image-test.jpg");
  Mesh mesh(vertices);
  Shader shader("../assets/shaders/default.vs", "../assets/shaders/default.fs");

  GameObject gO1(mesh, shader, texture);
  GameObject gO2(mesh, shader, texture);
  gO2.transform.setPosition({.2, 0, 0});
  objetos.push_back(gO1);
  objetos.push_back(gO2);
  Renderer renderer(objetos);

  while (!window.shouldClose()) {
    window.update();
    renderer.update();
  }
  return 0;
}
