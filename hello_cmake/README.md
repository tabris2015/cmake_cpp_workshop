# Projecto CMAKE de ejemplo

Este proyecto muestra las configuraciones mínimas para configurar y compilar un proyecto usando CMake.

La configuración del proyecto se define en un archivo llamado *CMakeLists.txt* en el cual se establecen todos los detalles acerca de los directorios, archivos de código fuente, dependencias, librerías, modos de compilación y muchos otros más.

## Estructura de un proyecto usando CMake

CMake es una herramienta que permite generar archivos de compilación y administrar dependencias y modos de compilación para proyectos que usen C, C++ y ASM. Se necesita definir algunos detalles en el archivo *CMakeLists.txt*. Los pasos para crear un proyecto usando **CMake** son los siguientes:

1. **Definir version minima de cmake.** Se debe definir la versión mímina de CMake que posea todas las herramientas y funciones que se utilizan en el proyecto.

    ```
    cmake_minimum_required(VERSION 3.0)
    ```

2. **Declarar el proyecto.** Se declara el nombre del proyecto y algunas propiedades para el mismo, como la versión o los lenguajes habilitados para el uso de los toolchains correctos. El nombre del proyecto está disponible en una variable llamada *PROJECT_NAME*.
    ```
    project(mi_proyecto)
    ```

3. **Definir directorios de archivos de cabecera.** Se definen los directorios en los cuales estan los archivos de cabecera (.h, .hpp) para el proyecto.

    ```
    include_directories(include)
    ```

4. **Definir standar.** Se define el estandar de C++ usado en el proyecto, desde GCC 4.8.1, el estandar C++11 es completamente soportado. En GCC 8 se cuenta con el estandar C++14 y C++17.

    ```
    set(CMAKE_CXX_STANDARD 11)
    ```

5. **Declarar ejecutable.** Para cada ejecutable del proyecto se debe agregar una linea definiendo los archivos de codigo fuente que lo componen.

    ```
    add_executable(mi_proyecto src/main.cpp)
    ```

Con todo, el archivo CMakeLists.txt tendría la siguiente forma:
```
cmake_minimum_required(VERSION 3.0)
project(mi_proyecto)
include_directories(include)
set(CMAKE_CXX_STANDARD 11)
add_executable(mi_proyecto src/main.cpp)
```

## Compilar un proyecto usando CMake y GNU Make

Una vez definido el archivo CMakeLists.txt, CMake se encarga de configurar la compilación y generar los archivos intermedios necesarios. Para poder configurar y compilar un proyecto, se siguen los siguientes pasos:

1. **Crear una carpeta para los archivos de compilación.** Con el fin de no contaminar la estructura del proyecto, es recomendable crear una carpeta en la que se almacenarán todos los archivos intermedios generados por CMake. Esta carpeta suele llamarse *build*.
    ```bash
    mkdir build
    cd build
    ```
2. **Generar los archivos de compilación.** Para generar los archivos de configuración del proyecto se usa el comando *cmake* pasando como parámetro el directorio en el que se encuentra el archivo *CMakeLists.txt*.
    ```bash
    cmake ..
    ```

3. **Compilar el proyecto.** Una vez generados los archivos necesarios, y según la plataforma y entorno en el que se usa CMake, se puede compilar el proyecto, en este caso, usando GNU Make.
    ```bash
    make
    ```

Al terminar todo el proceso, se generán los targets del proyecto en la carpeta build.
