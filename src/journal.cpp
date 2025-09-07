#include "Journal.h"
#include <iostream>

// Constructor
Journal::Journal(const std::string& title,
                 const std::string& author,
                 int year,
                 const std::string& journalName,
                 int volume,
                 int issue)
    : Publication(title, author, year), journalName(journalName), volume(volume), issue(issue) {}

// Display function
void Journal::display() const {
    std::cout << "Journal: " << title
              << ", Author: " << author
              << ", Year: " << year
              << ", Journal Name: " << journalName
              << ", Volume: " << volume
              << ", Issue: " << issue << std::endl;
}
