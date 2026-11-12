#include <iostream>
using namespace std;

int main() {

    int bar[5], inputCounter = 0;

    while (inputCounter < 5) {

        do {
            cout << "Please enter number " << inputCounter + 1 << ": ? ";
            cin >> bar[inputCounter];

        } while (bar[inputCounter] < 1 || bar[inputCounter] > 9);

        inputCounter++;
    }

    for (int i = 9; i > 0; i--) {

        cout << i;

        for (int j = 0; j < 5; j++) {

            if (bar[j] == i) {
                cout << "*";
            }
            else if (bar[j] < i) {
                cout << ".";
            }
            else {
                cout << "+";
            }
        }

        cout << endl;
    }

    cout << " 12345" << endl;

    return 0;
}
