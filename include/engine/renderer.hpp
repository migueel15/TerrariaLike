#pragma once
#include "engine/object.hpp"

class Renderer {
public:
  Renderer(Object ob);
  void update();

private:
  void clearScreen();
  int active;
  Object ob;
};
