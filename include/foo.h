#pragma once

#include <iostream>

class Foo {
    public:
        inline void run() {
            std::cout << "foo::run\n";
        }
};
