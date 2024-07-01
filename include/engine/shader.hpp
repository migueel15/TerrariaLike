#pragma once
#include "engine/mesh.hpp"
#include "iostream"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

class Shader {
public:
  Shader(const char *vertexPath, const char *fragmentPath);
  unsigned int ID;
  void use();
  void setBool(const std::string &name, bool value) const;
  void setInt(const std::string &name, int value) const;
  void setFloat(const std::string &name, float value) const;

private:
};
