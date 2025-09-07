#ifndef BIBPARSER_H
#define BIBPARSER_H

#include "Bibliography.h"
#include <string>
using namespace std;

class BibParser {
public:
    BibParser();
    Bibliography parseFile(const string& filename) const;
};

#endif
