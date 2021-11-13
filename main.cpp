#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Main.hpp>

#include <foo.h>

int main(int argc, char** argv) {
    std::cout << "hello world!\n";
    Foo().run();
    sf::Int64 bar = 5;
    std::cout << bar << "\n";
    return 0;
}
