#pragma once

#include "engine/mesh.hpp"
#include "engine/shader.hpp"

class Object {
public:
  Object(const Mesh &mesh, const Shader &shader);
  void draw();
  // Transform transform;

private:
  Mesh mesh;
  Shader shader;
};
