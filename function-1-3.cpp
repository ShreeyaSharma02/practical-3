#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList newPersonList;
    newPersonList.numPeople = pl.numPeople;

    newPersonList.people = new Person[pl.numPeople];
    for (int i = 0; i < pl.numPeople; ++i) {
        newPersonList.people[i].name = pl.people[i].name;
        newPersonList.people[i].age = pl.people[i].age;
    }

    return newPersonList;
}