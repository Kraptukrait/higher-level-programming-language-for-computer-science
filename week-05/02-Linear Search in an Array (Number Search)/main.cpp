#include <iostream>
using namespace std;

int main(){
    int input, storage[6], searchNumber;
    bool found = false;
    for(int i = 0; i < 6; i++){
        do{
            cout << "Please enter the " << (i + 1) << ". number: ? ";
            cin >> input;

        }while(input < 1 || input > 6);
        storage[i] = input;
    }
    cout << "Please enter the search number: ? ";
    cin >> searchNumber;
    for(int j = 0; j < 6; j++){
        if(searchNumber == storage[j]){
            found = true;
        }
    }
    if(found){
        cout << "The search number was among the entered numbers." << endl;
    }else{
        cout << "The search number was NOT among the entered numbers." << endl;
    }
    return 0;
}
