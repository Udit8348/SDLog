#pragma once
#include <iostream>

class SD {
    public:
        SD(std::string path_);

        std::string getPath();
    private:
        std::string path;
};