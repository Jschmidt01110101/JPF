#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);
void firstFunction();
void secondFunction();

int main() {
    cout << "Function Demo" << endl;
    firstFunction();
    secondFunction();
    cout << "Main ending" << endl;
    return 0;
}

void firstFunction() {
    cout << "Printing from firstFunction" << endl;
}

void secondFunction() {
    cout << "Printing from secondFunction" << endl;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
