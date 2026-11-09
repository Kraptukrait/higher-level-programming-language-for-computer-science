#include <iostream>
using namespace std;

int main(){
    int storage[4], comparisonNumber, matchCounter = 0;
    for(int i = 0; i < 4; i++){
        cout << "Please enter the " << (i + 1) << ". number: ? ";
        cin >> storage[i];
    }
    cout << "Please enter the comparison number: ? ";
    cin >> comparisonNumber;

    for(int j = 0; j < 4; j++){
        if(comparisonNumber == storage[j]){
            matchCounter += 1;
        }
    }
    cout << matchCounter << " entered numbers were equal to the comparison number." << endl;
    cout << (4 - matchCounter) << " entered numbers were not equal to the comparison number." << endl;
    return 0;
}
