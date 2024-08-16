#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    
    PersonList newPersonList;
    newPersonList.numPeople = pl.numPeople;

    newPersonList.people = pl.people;

    return newPersonList;
}

PersonList createPersonList(int n) {
    PersonList personList;
    personList.numPeople = n;
    personList.people = new Person[n];

    for (int i = 0; i < n; ++i) {
        personList.people[i].name = "Jane Doe";
        personList.people[i].age = 1;
    }

    return personList;
}
