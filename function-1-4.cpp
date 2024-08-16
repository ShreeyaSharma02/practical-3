#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    
    PersonList newPersonList;
    newPersonList.numPeople = pl.numPeople;

    newPersonList.people = pl.people;

    return newPersonList;
}