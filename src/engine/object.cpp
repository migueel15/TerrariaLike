#include "engine/object.hpp"

Object::Object(const Mesh &mesh, const Shader &shader, const Texture &texture)
    : mesh(mesh), shader(shader), texture(texture) {}

void Object::draw() {
  shader.use();
  texture.bind();
  mesh.draw();
}
