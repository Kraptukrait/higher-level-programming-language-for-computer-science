#include <iostream>
using namespace std;

int main(){
    int number, maxNumber, minNumber, maxPosition, minPosition;
    for (int i = 1; i <= 5; i++) {
        cout << "Please enter the " << i << ". number: ? ";
        cin >> number;

        if (i == 1) {
            maxNumber = number;
            minNumber = number;
            maxPosition = i;
            minPosition = i;  
        }

        if (number > maxNumber) {
            maxNumber = number;
            maxPosition = i;
        }

        if (number < minNumber) {
            minNumber = number;
            minPosition = i;
        }
    }
    cout << "The " << minPosition << ". number was the smallest of the entered numbers and is: " << minNumber << endl;
    cout << "The " << maxPosition << ". number was the largest of the entered numbers and is: " << maxNumber << endl;

    return 0;
}

/* 
Also possible:
for (int i = 1; i <= 5; i++) {
        cout << "Please enter the " << i << ". number: ? ";
        cin >> number;

        if (i == 1) {
            maxNumber = number;
            minNumber = number;
        }

        if (number > maxNumber) {
            maxNumber = number;
            maxPosition = i;
        }

        if (number < minNumber) {
            minNumber = number;
            minPosition = i;
        }
    }
*/
