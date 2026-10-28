#include <iostream>
using namespace std;

int main() {
    char inputChar;
    int number, calculation;
    cout << "Please enter the character: ? ";
    cin >> inputChar;

    if (inputChar == 'e') {
        cout << "The program is now terminating." << endl;
    } else {
        number = inputChar;

        if (number >= 48 && number <= 57) {
            calculation = (number - 48) + 5;
            cout << number - 48 << " + 5 = " << calculation << endl;
        } else {
            cout << "Neither 'e' nor digit" << endl;
        }
    }

    return 0;
}
