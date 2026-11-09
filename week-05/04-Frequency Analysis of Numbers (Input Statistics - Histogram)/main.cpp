#include <iostream>
using namespace std;

int main(){
    int storage[9], input, frequency[6] = {0};

    for(int i = 0; i < 9; i++){
        do{
            cout << "Please enter the " << (i + 1) << ". number: ? ";
            cin >> input;
        }while(input < 1 || input > 6);

        storage[i] = input;
        frequency[input - 1]++;
    }

    for(int j = 0; j < 9; j++){
        cout << "The " << (j + 1) << ". entered number was: " << storage[j] << endl;
    }

    for(int k = 0; k < 6; k++){
        cout << "The number " << (k + 1) << " was entered " << frequency[k] << " times." << endl;
    }

    return 0;
}
