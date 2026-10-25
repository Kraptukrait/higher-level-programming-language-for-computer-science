#include <iostream>
using namespace std;

int main(){
    char inputLowerCaseLetter, upperCaseLetter;
    int letterValue, calculation;
    cout << "Please enter the lowercase letter: ? ";
    cin >> inputLowerCaseLetter;
    letterValue = inputLowerCaseLetter;
    calculation = (letterValue - 32);
    upperCaseLetter = calculation;
    cout << "The corresponding uppercase letter is: " << upperCaseLetter << endl;
    return 0;
}
