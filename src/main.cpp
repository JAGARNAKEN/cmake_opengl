#include <iostream>
#include "config/OpenGLConfig.h"
#include "super_printer.h"

int main(int argc, char* argv[]) {
    std::cout << "Hello world" << "\n";
    if (argc > 1) {
        std::cout << "Value: " << std::stod(argv[1]) << "\n";
    }
    SuperPrinter::mrPrint();
    std::cout << "Version: " << OpenGL_VERSION_MAJOR << "." << OpenGL_VERSION_MINOR << "\n";
    return 1;
}