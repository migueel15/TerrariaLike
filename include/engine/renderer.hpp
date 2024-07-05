#pragma once
#include "engine/gameObject.hpp"

class Renderer {
public:
  Renderer(GameObject gObject);
  void update();

private:
  void clearScreen();
  int active;
  GameObject ob;
};
