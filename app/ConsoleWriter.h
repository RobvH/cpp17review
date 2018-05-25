#ifndef CPP17TEST_CONSOLEWRITER_H
#define CPP17TEST_CONSOLEWRITER_H

#include "BaseWriter.h"

namespace App {

    class ConsoleWriter: public BaseWriter {
    public:
        void print();

        void show();
    };

}

#endif //CPP17TEST_CONSOLEWRITER_H
