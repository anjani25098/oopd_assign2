#include "Publication.h"
#include <iostream>
using namespace std;

Publication::Publication() : title(""), author(""), year(0), pdfURL(""), srcURL(""), presURL("") {}

Publication::Publication(string t, string a, int y, string pdf, string src, string pres)
    : title(t), author(a), year(y), pdfURL(pdf), srcURL(src), presURL(pres) {}

void Publication::print() const {
    cout << "Title: " << title << endl;
    cout << "Author(s): " << author << endl;
    cout << "Year: " << year << endl;
    cout << "PDF: " << pdfURL << endl;
    cout << "Source Code: " << srcURL << endl;
    cout << "Presentation: " << presURL << endl;
    cout << "-----------------------------" << endl;
}

bool Publication::operator<(const Publication& other) const {
    if (year != other.year)
        return year > other.year; // Descending by year
    return title < other.title;   // Alphabetical if same year
}

int Publication::getYear() const {
    return year;
}

string Publication::getTitle() const {
    return title;
}

