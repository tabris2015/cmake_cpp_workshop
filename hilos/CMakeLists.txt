# Definir version minima de cmake
cmake_minimum_required(VERSION 3.0)

# Declarar el proyecto
project(hilos)

# Definir directorios de archivos de cabecera
include_directories(include)

# Definir standard (C++11)
set(CMAKE_CXX_STANDARD 11)

# Agregar ejecutable
add_executable(hilos src/main.cpp)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

target_link_libraries(hilos Threads::Threads)