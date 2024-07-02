#pragma once

class Texture {
public:
  Texture(const char *filename);
  void bind();

private:
  unsigned int ID;
  int width, height, nrChannels;
};
