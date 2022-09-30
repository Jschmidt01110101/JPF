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
    int age;
    
    cout << "What is the students's age?" << endl;
    cin >> age;
    if (age < 10) {
        cout << "The age cannot be less than 10. " << endl;
        cout << "Try Again. " << endl;
        cout << "What is the student's age? " << endl;
        cin >> age;
    }
    cout << "Thank You. you entered a valid age." << endl;
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
