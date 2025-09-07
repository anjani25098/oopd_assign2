#ifndef PUBLICATION_H
#define PUBLICATION_H

#include <string>
using namespace std;

class Publication {
private:
    string title;
    string author;
    int year;
    string pdfURL;
    string srcURL;
    string presURL;

public:
    Publication();
    Publication(string t, string a, int y, string pdf, string src, string pres);

     void print() const;

    bool operator<(const Publication& other) const; // for sorting

    int getYear() const;
    string getTitle() const;
};

#endif

