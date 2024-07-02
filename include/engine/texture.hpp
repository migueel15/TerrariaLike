#pragma once
#include "glad/glad.h"
#include "iostream"
#include "stb_image.h"

class Texture {
public:
  Texture(const char *filename);
  void bind();

private:
  unsigned int ID;
  int width, height, nrChannels;
};
