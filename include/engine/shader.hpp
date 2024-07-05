#pragma once
#include "glm/glm.hpp"
#include <string>

class Shader {
public:
  Shader(const char *vertexPath, const char *fragmentPath);
  void use();
  void setBool(const std::string &name, bool value) const;
  void setInt(const std::string &name, int value) const;
  void setFloat(const std::string &name, float value) const;
  void setMat4(const std::string &name, const glm::mat4 &matrix);

private:
  unsigned int ID;
};
