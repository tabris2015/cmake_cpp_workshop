# Definir version minima de cmake
cmake_minimum_required(VERSION 3.0)

# Declarar el proyecto
project(hola)

# Definir directorios de archivos de cabecera
include_directories(include)

# Definir standard (C++11)
set(CMAKE_CXX_STANDARD 11)

# Agregar ejecutable
add_executable(hola src/main.cpp src/saludo.cpp)
