#ifndef BIBLIOGRAPHY_H
#define BIBLIOGRAPHY_H

#include "Publication.h"
#include <vector>
using namespace std;

class Bibliography {
private:
    vector<Publication> publications;

public:
    Bibliography();
    void addPublication(const Publication& pub);
    void printAll() const;

    // Operator overloading

