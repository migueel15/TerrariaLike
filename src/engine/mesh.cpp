#include "engine/mesh.hpp"
#include "glad/glad.h"
#include <iostream>

Mesh::Mesh(std::vector<Vertex> vertices) {
  this->vertices = vertices;
  glGenBuffers(1, &VBO);
  glGenVertexArrays(1, &VAO);

  glBindVertexArray(VAO);
  glBindBuffer(GL_ARRAY_BUFFER, VBO);

  glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(Vertex),
               vertices.data(), GL_STATIC_DRAW);

  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex),
                        (void *)offsetof(Vertex, position));
  glEnableVertexAttribArray(0);

  glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex),
                        (void *)offsetof(Vertex, texturePos));
  glEnableVertexAttribArray(1);
}

void Mesh::draw() {
  glBindVertexArray(VAO);
  glDrawArrays(GL_TRIANGLES, 0, vertices.size());
  glBindVertexArray(0);
}

void Mesh::show() {
  for (int i = 0; i < vertices.size(); i++) {
    std::cout << "Vertex " << i << ": " << vertices[i].position[0] << ", "
              << vertices[i].position[1] << ", " << vertices[i].position[2]
              << std::endl;
  }
}
