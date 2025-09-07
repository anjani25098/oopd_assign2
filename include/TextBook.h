#ifndef TEXTBOOK_H
#define TEXTBOOK_H

#include "Publication.h"
#include <string>

class TextBook : public Publication {
private:
    std::string publisher;
    int edition;

public:
    TextBook(const std::string& title, const std::string&
