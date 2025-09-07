P#ifndef RESOURCE_H
#define RESOURCE_H

#include <string>
#include <iostream>
using namespace std;

class Resource {
protected:
    string title;
    string creator;
    int year;
public:
    Resource(string t, string c, int y) : title(t), creator(c), year(y) {}
    virtual void display() const = 0;  // pure virtual function
    virtual ~Resource() {}
};

#endif
