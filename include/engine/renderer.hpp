#pragma once
#include "engine/gameObject.hpp"
#include <vector>

class Renderer {
public:
  Renderer(std::vector<GameObject> objetos);
  void update();

private:
  void clearScreen();
  int active;
  std::vector<GameObject> objetos;
};
