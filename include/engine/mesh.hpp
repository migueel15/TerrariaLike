#pragma once

#include <glad/glad.h>
#include <vector>

class Mesh {
public:
  Mesh(std::vector<float> vertices, std::vector<unsigned int> indices);
  ~Mesh();
  void draw();

private:
  std::vector<float> vertices;
  std::vector<unsigned int> indices;
  unsigned int VAO, VBO, EBO;
  void setupMesh();
};
