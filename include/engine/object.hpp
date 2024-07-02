#pragma once

#include "engine/mesh.hpp"
#include "engine/shader.hpp"
#include "engine/texture.hpp"

class Object {
public:
  Object(const Mesh &mesh, const Shader &shader, const Texture &texture);
  void draw();
  // Transform transform;

private:
  Mesh mesh;
  Shader shader;
  Texture texture;
};
