# Hola mundo en c++

Este ejemplo sirve para ilustrar el uso de gcc para compilar y linkear
un programa simple usando el comando g++.

El proceso de compilación en C/C++ sigue cuatro pasos establecidos:

1. **Preprocesado**: En este paso, se toman los archivos *.cpp* y *.h* y se expanden las macros como tambien la inclusión de las cabeceras necesarias, la salida de este proceso es un archivo expandido con la extensión *.i* o *.ii*. Para poder realizar el proceso de preprocesado se utiliza el comando *cpp*.

    ```bash
    cpp hello.cpp > hello.i
    ```

2. **Compilación**: Este paso se encarga de transformar el código fuente de C/C++ a código de máquina o *assembly*. Utiliza el archivo intermedio *.i* obtenido del preprocesado y lo convierte en un archivo con código *assembly* con la extensión *.s*. Para poder realizar la compilación a assembly se puede usar el comando g++.

    ```bash
    gcc -S hello.i
    ```

3. **Ensamblado**: En este paso, el ensamblador, en base al archivo con código *assembly* genera un archivo objeto con código de máquina *.o*, *.obj*. Usualmente, este archivo objeto contiene toda la información para ejecutar el programa en el sistema (instrucciones) y también información para la depuración (símbolos, breakpoints). Para ensamblar el código generado por la compilación se usa el comando *as*.

    ```bash
    as -o hello.o hello.s
    ```

4. **Enlazado**: Finalmente, el último paso es el enlazado, que se encarga de enlazar el código objeto con las librerías y dependencias necesarias para obtener un archivo ejecutable. Se puede realizar el enlazado con el comando *ld*.

    ```bash
    ld -o hello hello.o [librerias]
    ```
