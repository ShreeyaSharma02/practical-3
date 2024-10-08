#include <iostream>
#include "Person.h"

Person* createPersonArray(int n);

int main() {
    int n = 5; 

    Person* persons = createPersonArray(n);

    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ": " << persons[i].name << ", " << persons[i].age << std::endl;
    }

    delete[] persons;

    return 0;
}