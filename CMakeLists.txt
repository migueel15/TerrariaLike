cmake_minimum_required(VERSION 3.10)

project(TerrariaLike)

# Especificar el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Incluir directorios
include_directories(include vendor/glad/include vendor/glfw/include vendor/glm)

# Archivos fuente
file(GLOB_RECURSE SOURCES "src/*.cpp" "main.cpp")

# Añadir ejecutable
add_executable(game ${SOURCES})

# GLFW
# Desactivar los avisos como errores para GLFW
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-error")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-error")

add_subdirectory(vendor/glfw)
target_link_libraries(game glfw)

# GLAD
add_library(glad STATIC vendor/glad/src/glad.c)
target_include_directories(glad PUBLIC vendor/glad/include)
target_link_libraries(game glad)

# GLM
add_subdirectory(vendor/glm)
target_link_libraries(game glm)

