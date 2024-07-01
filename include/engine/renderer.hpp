#pragma once
#include "glad/glad.h"

class Renderer {
public:
  Renderer();
  void update();

private:
  void clearScreen();
};
