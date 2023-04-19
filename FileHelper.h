#pragma once

#include <string>
#include <fstream>
#include <vector>

#include "Parser.h"
#include "Person.h"

using namespace std;


Persons ImportFromFile(string path) {
    ifstream file;
    file.open(path);

    Persons result;
    string line;
    while (getline(file, line)) {
        char delimiter = '|';
        string* person = new string[SIZE];

        person[0] = Parser(line, delimiter);
        person[1] = Parser(line, delimiter);
        person[2] = line;
        result.push_back(person);
    }

    file.close();

    return result;
}
