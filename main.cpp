#include <iostream>
#include "app/BaseWriter.h"
#include "app/ConsoleWriter.h"

using namespace std;

int main() {
    App::BaseWriter baseWriter;
    App::ConsoleWriter consoleWriter;
    App::BaseWriter *writer;
    App::ConsoleWriter *derivedWriter;

    writer = &consoleWriter;
    derivedWriter = &consoleWriter;

    cout << "Show methods, none are virtual:" << endl << endl;

    baseWriter.show();

    writer->show();

    derivedWriter->show();

    cout << endl << "Print Methods, (BaseWriter::print() is virtual):" << endl << endl;

    baseWriter.print();

    writer->print();

    derivedWriter->print();

    return 0;
}