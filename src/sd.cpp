#include "../include/sd.hpp"

namespace Log {
    SD::SD() {
        this->root = "/Users/imacudit/Documents/CompPro/CPP/SDLog/usd";
        this-> timestamp = createTimestamp();
        logData();
    }
    
    std::string SD::createPath(std::string path) {
        return root + "/" + path;
    }

    std::string SD::createTimestamp(){
        #ifdef V5
            std::cout << "read from the non volitile memory" << std::endl;
            // read in from file to get the coded timestamp
            std::ifstream counter;
            std::string coded;
            std::string decoded;
            counter.open("/Users/imacudit/Documents/CompPro/CPP/SDLog/usd/memory/counter.csv");
            if (counter.is_open()) {
                counter >> coded;
            }
            counter.close();
            // std::cout << coded << std::endl;
            // decode the timestamp
            //set the timestamp private variable
            return coded;
            // the createLogfile method should work in either case; no compilier macros
        #endif

        #ifndef V5
        time_t now = time(0);
        std::string dt = ctime(&now);
        dt.erase(remove_if(dt.begin(), dt.end(), isspace), dt.end());
        return dt;
        #endif
    }

    void SD::write(FileType type, FileMode option, std::vector<std::string> messages) {
        std::ofstream outf;
        std::string path;
        std::vector<std::string>::iterator s;
        switch (type)
        {
        case LOG:
            path = createPath("logs/" + this->timestamp + ".log");
            break;
        
        case CSV:
            /* code */
            break;

        case TXT:
            /* code */
            break;
        
        default:
            std::cout << "Invalid File Type" << std::endl;
            break;
        }

        try
        {
            std::ios_base::openmode mode = (option == APPEND ? std::ofstream::app : std::ofstream::trunc);
            outf.open(path, mode);
            if(outf.is_open()) {
                for (s = messages.begin(); s != messages.end(); s++) {
                    outf << *s << std::endl;
                }
            }
            outf.close();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    void SD::logData() {
        std::vector<std::string> s = {"- Log -"};
        logData(s);
    }

    void SD::logData(std::vector<std::string> messages){
        write(LOG, APPEND, messages);
    }    
}