//
// Created by Rob Van Hoose on 5/25/18.
//

#include <iostream>
#include "BaseWriter.h"

namespace App {

    void BaseWriter::show() {
        std::cout << "BaseWriter show." << std::endl;
    }

    void BaseWriter::print() {
        std::cout << "BaseWriter print." << std::endl;
    }
}
