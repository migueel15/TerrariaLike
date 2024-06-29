#pragma once

#include "engine/mesh.hpp"
class Renderer {
public:
  Renderer();
  ~Renderer();

  void renderMesh(Mesh &mesh);
};
