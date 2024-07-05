#pragma once
#include "glm/glm.hpp"
class Transform {
public:
  Transform();
  void setPosition(const glm::vec3 &newPosition);
  void setRotation(const glm::vec3 &newPosition);
  void setScale(const glm::vec3 &newPosition);
  const glm::mat4 &getModelMatrix() const;
  const glm::vec3 &getPosition() const;
  const glm::vec3 &getRotation() const;
  const glm::vec3 &getScale() const;

private:
  glm::vec3 position;
  glm::vec3 rotation;
  glm::vec3 scale;
  glm::mat4 modelMatrix;
  void updateModel();
};
