#include "BibParser.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

BibParser::BibParser() {}

Bibliography BibParser::parseFile(const string& filename) const {
    Bibliography bib;
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Could not open file " << filename << endl;
        return bib;
    }

    string line, title, author, yearStr, pdf, src, pres;
    int year = 0;

    while (getline(file, line)) {
        if (line.find("title") != string::npos) {
            title = line.substr(line.find('=') + 1);
        } else if (line.find("author") != string::npos) {
            author = line.substr(line.find('=') + 1);
        } else if (line.find("year") != string::npos) {
            yearStr = line.substr(line.find('=') + 1);
            year = stoi(yearStr);
        } else if (line.find("pdf") != string::npos) {
            pdf = line.substr(line.find('=') + 1);
        } else if (line.find("src") != string::npos) {
            src = line.substr(line.find('=') + 1);
        } else if (line.find("pres") != string::npos) {
            pres = line.substr(line.find('=') + 1);
        } else if (line.find("}") != string::npos) {
            Publication pub(title, author, year, pdf, src, pres);
            bib.addPublication(pub);

            // Reset values for next entry
            title = author = pdf = src = pres = "";
            year = 0;
        }
    }

    file.close();
    return bib;
}
