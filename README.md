# Taller de CMake y C++ moderno

Este es el repositorio de codigo y ejemplos para el taller de CMake y C++ moderno que se llevo a cabo en la Carrera de Ingeniería Electrónica de la Facultad de Inveniería de la UMSA.

Este taller tiene el objetivo de brindar a los asistentes el conocimiento necesario para configurar y desarrollar proyectos completos usando una suite Open Source para el lenguaje de programación C++11. La suite Open Source se compone de los siguientes componentes:

- **Sistema Operativo**: Fedora 28 (Linux 4.16.3).
- **Compilador**: GCC v8.3.1 (Fedora 28).
- **Generador de configuración**: CMake v3.14.1 (Fedora 28).
- **Depurador**: GDB v8.1.1.
- **Editor de texto**: Visual Studio Code v1.33 (Abril 2019).

> Dado que el curso esta orientado al desarrollo de aplicaciones con C++11, la compatibilidad debería mantenerse con versiones anteriores del compilador GCC hasta la versión 4.8.x.

## Instalación de dependencias

Se puede instalar todas las dependencias corriendo el siguiente comando en un terminal:

```bash
sudo apt-get install build-essential cmake gdb gdb-server
```

### Instalación de Visual Studio Code

No es un requisito, pero el editor VS Code, de Microsoft, presenta una serie de ventajas y beneficios para el desarrollo de software en general, algunas de ellas son:

- Resaltado de sintaxis y autocompletado de código.
- Terminal integrada.
- Depurador integrado (compatible con GDB).
- Integración con CMake (a través de extensiones).
- Gratis.
- Compatible con Windows, Mac OS y Linux.

Para instalar VS Code en su estación de trabajo debe ingresar a la [página oficial](https://code.visualstudio.com/) y seguir las instrucciones.

## Descripción del Taller

El taller abordará un enfoque práctico de configuración y uso de las herramientas libres y open source disponibles y más utilizadas para el desarrollo de sistemas y aplicaciones con C++ moderno. El objetivo del taller es el de brindar un entorno de trabajo altamente versátil para el desarrollo con C++ que pueda replicarse y extenderse fácilmente en otros sistemas y plataformas. Además se pretende mostrar el flujo de trabajo típico para desarrollos profesionales y compilación cruzada orientado al desarrollo de sistemas.

El taller contará con 5 sesiones presenciales de 1.5 horas cada dedicadas enteramente a aspectos prácticos y demostrativos de los temas abordados.

### Contenido del taller

El contenido propuesto del taller es el siguiente:

1. Introducción a C++ moderno.
   * C++11 vs C++98.

2. Introducción a Linux y la línea de comandos.
   * Entorno de linea de comandos.
   * Comandos básicos de navegación y manejo de archivos.

3. Toolchain y proceso de compilación en Linux.
   * Preprocesado.
   * Compilación.
   * Ensamblado.
   * Enlazado.

4. GNU Make
   * Introducción al uso de Makefiles.

5. Introducción a CMake.
   * Configuración básica.
   * Compilación de librerías.
   * Integración con dependencias.
   * Flujo de trabajo.

6. Proyecto de aplicación.

