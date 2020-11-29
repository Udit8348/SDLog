#include "../include/sd.hpp"

using namespace Log;

int main() {
    SD card{};

    std::vector<std::string> m;
    m.push_back("Udit");
    m.push_back("Cat");
    m.push_back("Dog");

    card.logData(m);

    std::vector<std::string> me;
    me.push_back("Three");
    me.push_back("Four");
    card.logData(me);

    std::cout << "udit" << std::endl;

   return 0;
}