#pragma once
#include <string>
#include <vector>
#include <ctime>
#include <fstream>
#include <iostream>
#define COMP

namespace Log {
    enum FileType {LOG, CSV, TXT};
    enum FileMode {APPEND, OVERWRITE};
    class SD {
        private:
            std::string root;
            std::string timestamp;
            /**
             *  Helper Methods
             */
            std::string createPath(std::string path);
            std::string createTimestamp();
            void write(FileType type, FileMode mode, std::vector<std::string> messages);
            void read(FileType type);
        public:
            SD();
            /**
             * Useful User Wrapper Methods
             */
            void logData();
            void logData(std::vector<std::string> messages);
    };
}