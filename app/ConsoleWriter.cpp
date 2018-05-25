#include <iostream>
#include "ConsoleWriter.h"

namespace App {
    void ConsoleWriter::print() {
        std::cout << "ConsoleWriter print." << std::endl;
    }

    void ConsoleWriter::show() {
        std::cout << "ConsoleWriter show." << std::endl;
    }
}