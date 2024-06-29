#include "engine/mesh.hpp"
#include <iostream>

Mesh::Mesh(std::vector<float> vertices, std::vector<unsigned int> indices) {
  setupMesh();
}

Mesh::~Mesh() {
  glDeleteVertexArrays(1, &VAO);
  glDeleteBuffers(1, &VBO);
}

void Mesh::draw() {
  glBindVertexArray(VAO);
  glDrawElements(GL_TRIANGLES, indices.size(), GL_UNSIGNED_INT, 0);
  glBindVertexArray(0);
}

void Mesh::setupMesh() {
  std::cout << "Setting up mesh" << std::endl;

  glGenVertexArrays(1, &VAO);
  glGenBuffers(1, &VBO);
  glGenBuffers(
      1, &EBO); // Add this line to generate the Element Buffer Object (EBO)

  glBindVertexArray(VAO);

  // Bind VBO and copy vertex data to buffer
  glBindBuffer(GL_ARRAY_BUFFER, VBO);
  glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(float),
               vertices.data(), GL_STATIC_DRAW);

  // Bind EBO and copy index data to buffer
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size() * sizeof(unsigned int),
               indices.data(), GL_STATIC_DRAW);

  // Set vertex attribute pointers
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(
      0, 2, GL_FLOAT, GL_FALSE, 2 * sizeof(float),
      (void *)0); // Assuming each vertex has 3 floats for position

  // Unbind VAO (optional: it's good practice to unbind VAO to prevent
  // accidental modification)
  glBindVertexArray(0);

  std::cout << "Mesh setup complete" << std::endl;
}
