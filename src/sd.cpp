#include "../include/sd.hpp"

namespace Log {
    SD::SD(std::string path_) {
        this->path = path_;
    }
    std::string SD::getPath() {
        return path;
    }
}