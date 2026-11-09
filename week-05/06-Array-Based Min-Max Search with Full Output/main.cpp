#include <iostream>
using namespace std;

int main(){
    int storage[5], smallestNumber, largestNumber;
    for(int i = 0; i < 5; i++){
        cout << "Please enter the " << (i + 1) << ". number: ? ";
        cin >> storage[i];
    }

    for(int j = 0; j < 5; j++){
        cout << "The " << (j + 1) << ". entered number was: ";
        cout << storage[j] << endl;
    }
    
    smallestNumber = storage[0];
    largestNumber = storage[0];

    for(int x = 0; x < 5; x++){
        if(smallestNumber > storage[x]) smallestNumber = storage[x];
        if(largestNumber < storage[x]) largestNumber = storage[x];
    }

    cout << "The smallest entered number was: " << smallestNumber << endl;
    cout << "The largest entered number was: " << largestNumber << endl;
    return 0;
}
