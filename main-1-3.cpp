#include <iostream>
#include "Person.h"
#include <list>

PersonList createPersonList(int n);
PersonList deepCopyPersonList(PersonList pl);

int main() {
    int n = 4;  

    PersonList originalList = createPersonList(n);

    PersonList copiedList = deepCopyPersonList(originalList);

    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < originalList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": " << originalList.people[i].name << ", " << originalList.people[i].age << std::endl;
    }

    originalList.people[0].name = "Modified Name";
    originalList.people[0].age = 99;

    std::cout << "\nCopied List (after modifying the original):" << std::endl;
    for (int i = 0; i < copiedList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": " << copiedList.people[i].name << ", " << copiedList.people[i].age << std::endl;
    }

    delete[] originalList.people;
    delete[] copiedList.people;

    return 0;
}
