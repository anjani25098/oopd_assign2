#ifndef BIBPARSER_H
#define BIBPARSER_H

#include <string>
#include <iostream>
#include <fstream>

class BibParser {
public:
    BibParser() {}
    void parseFile(const std::string &filename);
};

#endif

