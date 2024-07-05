#pragma once
#include "engine/mesh.hpp"
#include "engine/shader.hpp"
#include "engine/texture.hpp"
#include "engine/transform.hpp"

class GameObject {
public:
  GameObject(const Mesh &mesh, const Shader &shader, const Texture &texture);
  void draw();
  Transform transform;

private:
  Mesh mesh;
  Shader shader;
  Texture texture;
};
