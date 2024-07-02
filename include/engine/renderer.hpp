#pragma once
#include "engine/object.hpp"
#include "glad/glad.h"

class Renderer {
public:
  Renderer(Object ob);
  void update();

private:
  void clearScreen();
  int active;
  Object ob;
};
