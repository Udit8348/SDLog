#pragma once
#include <string>

namespace Log {
    class SD {
        public:
            SD(std::string path_);

            std::string getPath();
        private:
            std::string path;
    };
}