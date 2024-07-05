#include "engine/transform.hpp"
#include "glm/gtc/matrix_transform.hpp"

Transform::Transform()
    : position(0.0f), rotation(0.0f), scale(1.0f), modelMatrix(1.0f) {
  updateModel();
}

void Transform::updateModel() {
  modelMatrix = glm::mat4(1.0f);
  modelMatrix = glm::translate(modelMatrix, position);
  modelMatrix =
      glm::rotate(modelMatrix, glm::radians(rotation.x), glm::vec3(1, 0, 0));
  modelMatrix =
      glm::rotate(modelMatrix, glm::radians(rotation.y), glm::vec3(0, 1, 0));
  modelMatrix =
      glm::rotate(modelMatrix, glm::radians(rotation.z), glm::vec3(0, 0, 1));
  modelMatrix = glm::scale(modelMatrix, scale);
}

void Transform::setPosition(const glm::vec3 &newPos) {
  position = newPos;
  updateModel();
}
void Transform::setRotation(const glm::vec3 &newRotation) {
  rotation = newRotation;
  updateModel();
}
void Transform::setScale(const glm::vec3 &newScale) {
  scale = newScale;
  updateModel();
}

const glm::vec3 &Transform::getPosition() const { return position; }
const glm::vec3 &Transform::getRotation() const { return rotation; }
const glm::vec3 &Transform::getScale() const { return scale; }
const glm::mat4 &Transform::getModelMatrix() const { return modelMatrix; }
