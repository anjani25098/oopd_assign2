git#ifndef JOURNAL_H
#define JOURNAL_H

#include "Publication.h"
#include <string>

class Journal : public Publication {
private:
    std::string journalName;
    int volume;
    int issue;

public:
    // Constructor
    Journal(const std::string& title,
            const std::string& author,
            int year,
            const std::string& journalName,
            int volume,
            int issue);

    // Display function (override)
    void display() const override;
};

#endif // JOURNAL_H
