#include <fstream> // file strem objects
#include <iostream>
#include <string>
#include "../include/sd.hpp"

using namespace Log;

int main() {
    SD card{"/usd"};
    std::cout << card.getPath() << std::endl;
    return 0;
}