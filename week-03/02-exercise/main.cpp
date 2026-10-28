#include <iostream>
using namespace std;

int main(){
    char inputChar;
    cout << "Please enter the character: ? ";
    cin >> inputChar;
    if(inputChar == 'y' || inputChar == 'Y'){
        cout << "This is a Yes input." << endl;
    }else if(inputChar == 'n' || inputChar == 'N'){
        cout << "This is a No input." << endl;
    }else{
        cout << "This is another input." << endl;
    }
    return 0;
}
