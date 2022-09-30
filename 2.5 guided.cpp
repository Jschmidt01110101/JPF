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

int main() {
    int number;
    
    cout << "What is your number?" << endl;
    cin >> number;
    if (number > 0) {
        cout << "More than 0." << endl;
    } else {
        cout << "Less than or equal to 0." << endl;
    }
    cout << "End of program." << endl;
    return 0;
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
