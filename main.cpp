#include <iostream>

#include "FileHelper.h"
#include "ConsoleHelper.h"

using namespace std;

int main() {
    string path = "J:\\Temp\\file_demo\\input.psv";

    auto persons = ImportFromFile(path);
    PrintPersons(persons);


    return 0;
}
