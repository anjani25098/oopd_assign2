#include "BibParser.h"
#include <fstream>
#include <iostream>

void BibParser::parseFile(const std::string &filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: cannot open file " << filename << std::endl;
        return;
    }

    std::cout << "Parsing file: " << filename << std::endl;

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;  // abhi sirf file ka content print karega
    }

    file.close();
}
