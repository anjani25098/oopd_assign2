#include "BibParser.h"
#include <iostream>

int main(int argc, char** argv) {
    BibParser parser;
    parser.parseFile(std::string("test.bib"));
return 0;
}
