# How compilation works in C++

<img src="/img/1728313025749.jpg" alt="Compilation Process" width="400" height="300">

**<u>Preprocessing:</u>**

The preprocessor takes your source code files (e.g., v3.cpp, particle.cpp, main.cpp) and header files (e.g., v3.h, particle.h).
It handles directives like #include (which inserts the contents of header files) and #define (which creates macros).
The output is a "pure" C++ file without preprocessor directives, ready for the next step.

**<u>Compilation:**</u>

The compiler takes the preprocessed code and translates it into assembly code specific to your target machine's architecture.
It performs syntax checks and optimizations.
The output is object files (e.g., v3.o, particle.o, main.o) containing machine code but not yet in an executable format.

**<u>Linking:**</u>

The linker takes the object files and any necessary libraries.
It resolves references between different object files and libraries, ensuring that all function calls and variable accesses are correctly connected.
The output is a single executable file that can be run on your system.