#pragma once

#include <glm/ext/vector_float2.hpp>
#include <glm/ext/vector_float3.hpp>
#include <vector>

struct Vertex {
  glm::vec3 position;
  glm::vec2 texturePos;
};

class Mesh {
public:
  Mesh(std::vector<Vertex> vertices);
  void draw();
  void show();

private:
  std::vector<Vertex> vertices;
  unsigned int VAO;
  unsigned int VBO;
};
