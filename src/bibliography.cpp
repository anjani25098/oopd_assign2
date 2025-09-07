#include "Bibliography.h"
#include <iostream>
#include <algorithm>
using namespace std;

Bibliography::Bibliography() {}

void Bibliography::addPublication(const Publication& pub) {
    publications.push_back(pub);
}

void Bibliography::printAll() const {
    vector<Publication> sorted = publications;
    sort(sorted.begin(), sorted.end());

    for (const auto& pub : sorted) {
        pub.print();
    }
}

Bibliography Bibliography::operator+(const Bibliography& other) const {
    Bibliography result = *this;
    for (const auto& pub : other.publications) {
        result.publications.push_back(pub);
    }
    return result;
}

