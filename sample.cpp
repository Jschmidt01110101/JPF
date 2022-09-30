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
    string o, p, b;
    double a, w;
    int i;
    
    i = 1;
    while (i == 1) {
        cout << "owner's name" << endl;
        cin >> o;
        int pname;
        
        cout << "pet's name" << endl;
        cin >> p;
        cout << "breed" << endl;
        cin >> b;
        cout << "age" << endl;
        cin >> a;
        cout << "weight in lb" << endl;
        cin >> w;
        if (w < 20 || w > 100) {
            cout << "Name: " << p << endl;
        } else {
            cout << "Not Acceptable" << endl;
        }
        cout << "enter a number other than 1 to end" << endl;
        cin >> i;
    }
    cout << "owner's name" << endl;
    cout << o << endl;
    cout << "pet's name" << endl;
    cout << p << endl;
    cout << "breed" << endl;
    cout << b << endl;
    cout << "age" << endl;
    cout << a << endl;
    cout << "weight in lb" << endl;
    cout << w << endl;
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
