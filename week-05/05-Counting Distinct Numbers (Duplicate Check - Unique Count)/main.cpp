#include <iostream>
using namespace std;

int main() {
    int storage[9], input;
    int uniqueCount = 0;

    for (int i = 0; i < 9; i++) {
        do {
            cout << "Please enter the " << (i+1) << ". number: ? ";
            cin >> input;
        } while (input < 1 || input > 6);

        storage[i] = input;
    }

    for (int i = 0; i < 9; i++) {
        bool found = false;

        for (int j = 0; j < i; j++) {
            if (storage[i] == storage[j]) {
                found = true;
            }
        }

        if (found == false) {
            uniqueCount++;
        }
    }

    cout << "There were " << uniqueCount 
         << " distinct numbers in the input." << endl;

    return 0;
}
