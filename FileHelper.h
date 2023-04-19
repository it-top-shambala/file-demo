#pragma once

#include <string>
#include <fstream>
#include <vector>

#include "Parser.h"
#include "Person.h"

using namespace std;


void ImportFromFile(string path, LastNames& last_names, FirstNames& first_names, Ages& ages) {
    ifstream file;
    file.open(path);

    string line;
    while (getline(file, line)) {
        char delimiter = '|';
        last_names.push_back(Parser(line, delimiter));
        first_names.push_back(Parser(line, delimiter));
        ages.push_back(stoi(line));
    }

    file.close();
}
