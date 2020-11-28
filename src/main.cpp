#include <fstream> // file strem objects
#include <iostream>
#include <string>
#include "../include/sd.h"

int main() {
    std::string PATH = "usd/";
    std::cout << "Udit" << std::endl;
    std::cout << "Subramanya" << std::endl;
    std::cout << PATH << std::endl;
    std::cout << PATH << "opcontrol.txt" << std::endl;
    return 0;
}

/**
 * 
 * Base class for input: <istream> (cin)
 * Base class for outupt: <ostream> (cout)
 * 
 * base class for both file operations: <fstream>
 *  this is a subclass of iostream
 *  maintains a filebuf object as their internal stream buffer which performs the operations
 *  filebuf is created when open operator is called
 *  there is an intermediate input buffer and intermediate output buffer that store the i/o operatorations
 *      this can be triggered when once the buffer is filled up, when the sync is called or when the object is closed
 *      for more filebuf see: http://www.cplusplus.com/reference/fstream/filebuf/
 * base class for file writing stream: <ofstream>
 * base class for file reading stream: <ifstream>
 * 
 */