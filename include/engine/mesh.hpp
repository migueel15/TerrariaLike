#pragma once

#include "glad/glad.h"
#include <vector>

struct Vertex {
  float position[3];
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
