#include <iostream>
using namespace std;

int main(){
    char inputLetter;
    cout << "Please enter the character: ? ";
    cin >> inputLetter;
    if(int(inputLetter) >= 97 && int(inputLetter) <= 122){
        cout << "A lowercase letter (a-z) was entered." << endl;
    }else{
        cout << "NO lowercase letter (a-z)." << endl;
    }
    return 0;
}
