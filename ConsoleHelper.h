#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Person.h"

void PrintPerson(string last_name, string first_name, int age) {
    cout << last_name << " " << first_name << ", " << age << endl;
}

void PrintPersons(LastNames& last_names, FirstNames& first_names, Ages& ages) {
    for (int i = 0; i < last_names.size(); ++i) {
        PrintPerson(last_names[i], first_names[i], ages[i]);
    }
}