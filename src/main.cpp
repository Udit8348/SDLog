#include <fstream> // file strem objects
#include <iostream>
#include <string>
#include "../include/sd.hpp"

class SDUDIT {
    public:
        SDUDIT(std::string path_) {
            std::cout << "The path is: " << path_ << std::endl;
            this->path = path_;
        }

        std::string getPath() {
            return path;
        }
    private:
        std::string path;
};

int main() {
    SDUDIT card{"/usd"};
    std::cout << card.getPath() << std::endl;
    test();
    return 0;
}