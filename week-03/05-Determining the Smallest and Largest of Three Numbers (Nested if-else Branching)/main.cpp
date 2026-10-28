#include <iostream>
using namespace std;

int main() {
    int inputNumberOne, inputNumberTwo, inputNumberThree;

    cout << "Please enter the 1st number: ? ";
    cin >> inputNumberOne;

    cout << "Please enter the 2nd number: ? ";
    cin >> inputNumberTwo;

    cout << "Please enter the 3rd number: ? ";
    cin >> inputNumberThree;

    if (inputNumberOne > inputNumberTwo &&
        inputNumberOne > inputNumberThree) {

        if (inputNumberTwo > inputNumberThree) {
            cout << "The smallest entered number is: "
                 << inputNumberThree << endl;
        } else {
            cout << "The smallest entered number is: "
                 << inputNumberTwo << endl;
        }

        cout << "The largest entered number is: "
             << inputNumberOne << endl;

    } else if (inputNumberOne < inputNumberTwo &&
               inputNumberTwo > inputNumberThree) {

        if (inputNumberOne > inputNumberThree) {
            cout << "The smallest entered number is: "
                 << inputNumberThree << endl;
        } else {
            cout << "The smallest entered number is: "
                 << inputNumberOne << endl;
        }

        cout << "The largest entered number is: "
             << inputNumberTwo << endl;

    } else {

        if (inputNumberOne > inputNumberTwo) {
            cout << "The smallest entered number is: "
                 << inputNumberTwo << endl;
        } else {
            cout << "The smallest entered number is: "
                 << inputNumberOne << endl;
        }

        cout << "The largest entered number is: "
             << inputNumberThree << endl;
    }

    return 0;
}
