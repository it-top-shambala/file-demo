#include <iostream>

#include "FileHelper.h"
#include "ConsoleHelper.h"

using namespace std;

int main() {
    string path = "J:\\Temp\\file_demo\\input.psv";

    LastNames last_names;
    FirstNames first_names;
    Ages ages;
    ImportFromFile(path, last_names, first_names, ages);
    PrintPersons(last_names, first_names, ages);


    return 0;
}
