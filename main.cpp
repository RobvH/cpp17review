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

    writer->show(); // writer is a pointer of "BaseWriter" type; show is *not* virtual. Even those it's an instance
                    // of the derived type; the parent method "type()" will be called.

    derivedWriter->show();
                    // derivedWriter points to the same instance as writer, except that it itself is a point of type
                    // ConsoleWriter; so the method call will call the ConsoleWriter implementation of show

    // ( Lightbulb moment: pointer types are really similar to namespaces; you call an instance through a base type and
    // you get the base class' implementation. The runtime doesn't waste time to check the real type of the implemenation )

    // So... how can we be polymorphic and work base types instead of concrete ones?

    // Answer: On the base class declaration, we tell the compiler "hey! lookout! this method might be overridden"
    // We do this with the 'virtual' keyword. When a method declaration is 'virtual void print()' - the compiler
    // knows it might need to check for a derived instance behind the pointer. Without the virtual keyword, the
    // compiler saves a *bunch* of time and just calls the function from the type you told it (the base type).

    // the print() method on BaseWriter (BaseWriter.h) is virtual!
    cout << endl << "Print Methods, (BaseWriter::print() is virtual):" << endl << endl;

    baseWriter.print();

    writer->print();   // here's the key difference; writer is BaseWriter and it points to a ConsoleWriter instance;
                       // since print is virtual, the runtime will check and find BaseWriter is really a ConsoleWriter,
                       // and call ConsoleWriter's print() method!  Woot Wo! indeed.

    derivedWriter->print();

    return 0;
}