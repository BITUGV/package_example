#include <iostream>
#include "lib2.hpp"

ivrc::Lib2::Lib2() :
        display_(false) {
    std::cout << "Constructor of lib2." << std::endl;
}


void ivrc::Lib2::sayHelloFromLib2() {
    std::cout << "Hello from lib2." << std::endl;
}

