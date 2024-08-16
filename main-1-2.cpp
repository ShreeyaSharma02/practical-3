#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);

int main() {
    int n = 3;
    PersonList personList = createPersonList(n);

    for (int i = 0; i < personList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": " << personList.people[i].name << ", " << personList.people[i].age << std::endl;
    }

    delete[] personList.people;

    return 0;
}
