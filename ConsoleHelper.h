#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Person.h"

void PrintPerson(string* person) {
    cout << person[0] << " " << person[1] << ", " << person[2] << endl;
}

void PrintPersons(Persons& persons) {
    for (int i = 0; i < persons.size(); ++i) {
        PrintPerson(persons[i]);
    }
}