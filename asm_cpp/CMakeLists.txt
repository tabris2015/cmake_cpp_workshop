# Definir version minima de cmake
cmake_minimum_required(VERSION 3.0)

# Declarar el proyecto con assembly habilitado
project(asm_cpp CXX ASM)

# Definir directorios de archivos de cabecera
include_directories(include)

# Definir standard (C++11)
set(CMAKE_CXX_STANDARD 11)

set_source_files_properties(maxthree.s PROPERTIES COMPILE_FLAGS "-x assembler-with-cpp")

# Agregar ejecutable
add_executable(asm_cpp src/maxthree.s src/main.cpp)
