#include <iostream>
#include <foo.h>

int main(int argc, char** argv) {
    std::cout << "hello world!\n";
    Foo().run();
    return 0;
}
