#pragma once
#include <string>
#include <ctime>
#include <fstream>
#include <iostream>

namespace Log {
    class SD {
        public:
            SD();

            std::string getRoot();
            std::string getPath();
            void createLogfile();
            void setPath(std::string path_);
            void setTimestamp();
        private:
            std::string path;
            std::string root;
            std::string timestamp;
    };
}