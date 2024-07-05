#include "engine/gameObject.hpp"

GameObject::GameObject(const Mesh &mesh, const Shader &shader,
                       const Texture &texture)
    : mesh(mesh), shader(shader), texture(texture) {
  transform = Transform();
}

void GameObject::draw() {
  shader.use();
  shader.setMat4("model", transform.getModelMatrix());
  texture.bind();
  mesh.draw();
}
