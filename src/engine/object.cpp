#include "engine/object.hpp"

Object::Object(const Mesh &mesh, const Shader &shader)
    : mesh(mesh), shader(shader) {}

void Object::draw() {
  shader.use();
  mesh.draw();
}
