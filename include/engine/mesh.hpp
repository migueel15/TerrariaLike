#pragma once

#include "glad/glad.h"
#include <glm/ext/vector_float3.hpp>
#include <vector>

struct Vertex {
  glm::vec3 position;
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
