#include "../include/sd.hpp"

namespace Log {
    SD::SD() {
        this->root = "/Users/imacudit/Documents/CompPro/CPP/SDLog/usd";
        setTimestamp();
    }

    std::string SD::getRoot() {
        return root;
    }
    std::string SD::getPath() {
        return path;
    }
    void SD::setPath(std::string path_) {
        this->path = root + "/" + path_;
    }
    void SD::setTimestamp(){
        // current date/time based on current system
        time_t now = time(0);
        // convert now to string form
        std::string dt = ctime(&now);
        dt.erase(remove_if(dt.begin(), dt.end(), isspace), dt.end());
        this->timestamp = dt;
    }
    // maybe give the option to customize the type of log file
    void SD::createLogfile(){
        std::string name = this->timestamp + "-log.txt";
        setPath(name);
        std::string path = getPath();
        std::fstream logfile;
        try
        {
            logfile.open(path);
            logfile << "udt" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << "Error Opening File" << '\n';
            std::cout << e.what() << '\n';
        }
        if(logfile.is_open()) {
            logfile.close();
        }
        std::cout << path << std::endl;

        std::ofstream outfile;
        outfile.open(path);
        if(outfile.is_open()) {
            outfile << "my text here!" << std::endl;
        }
        outfile.close();
    }
}