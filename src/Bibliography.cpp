#include "Bibliography.h"
#include <iostream>
using namespace std;

void Bibliography::display() const {
    for (const auto& pub : publications) {
        pub.print();
        cout << "--------------------" << endl;
    }
}
