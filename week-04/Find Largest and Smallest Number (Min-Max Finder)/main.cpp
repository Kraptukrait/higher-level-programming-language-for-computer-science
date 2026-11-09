#include <iostream>
using namespace std;

int main(){
    int input[5];
    int counter = 0;
    int storageOne = 1, storageTwo = 1; 
    while(counter < 5){
        cout << "Please enter the " << (counter+1) << ". number: ? ";
        cin >> input[counter];
        counter ++;
    }

    int maxNumber = input[0];
    int minNumber = input[0];

    for(int i = 0; i < 5; i++){
       if(maxNumber < input[i]){
            maxNumber = input[i];
            storageOne = (i + 1);
       }
       // also possible with else if (but then it skips checks)
       if(minNumber > input[i]){
            minNumber = input[i];
            storageTwo = (i + 1);
       }
    }
    cout << "The " << storageTwo << ". number was the smallest of the entered numbers and is: " << minNumber << endl;
    cout << "The " << storageOne << ". number was the largest of the entered numbers and is: " << maxNumber << endl;

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
