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
    string answer;
    
    cout << "Do you want to continue (Y/N)?" << endl;
    cin >> answer;
    while (answer != "Y" && answer != "N") {
        cout << "You must type a Y or an N" << endl;
        cout << "Do you want to continue (Y/N)?" << endl;
        cin >> answer;
    }
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
