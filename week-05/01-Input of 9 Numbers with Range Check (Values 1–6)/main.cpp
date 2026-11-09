#include <iostream>
using namespace std;

int main(){
    int storage[9];
    int input;

    for(int counter = 0; counter < 9; counter++){
        do{
            cout << "Please enter the " << counter + 1 << ". number: ? ";
            cin >> input;
        }while(input < 1 || input > 6);
        storage[counter] = input;
    }

    for(int counter = 0; counter < 9; counter++){
        cout << "The " << counter + 1 << ". entered number was: " << storage[counter] << endl;
    }
    return 0;
}
