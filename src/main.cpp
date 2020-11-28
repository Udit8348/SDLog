#include "../include/sd.hpp"

using namespace Log;

int main() {
    SD card{};
    card.setPath("Bot.txt");
    std::cout << card.getRoot() << std::endl;
    std::cout << card.getPath() << std::endl;
    card.createLogfile();
   return 0;
}