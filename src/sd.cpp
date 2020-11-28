#include "../include/sd.hpp"

SD::SD(std::string path_) {
    std::cout << "The path is: " << path_ << std::endl;
    this->path = path_;
}
std::string SD::getPath() {
    return path;
}