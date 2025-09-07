#ifndef BIBLIOGRAPHY_H
#define BIBLIOGRAPHY_H

#include <vector>
#include <string>
#include "Publication.h"

class Bibliography {
private:
    std::vector<Publication> publications;
public:
    void add(const Publication& pub);
    void display() const;
};

#endif
