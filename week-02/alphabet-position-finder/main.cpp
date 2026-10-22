#include <iostream>
using namespace std;

int main(){
    char input;
    cout << "Please enter the letter:" << endl << "?";
    cin >> input;
    cout << "The letter " << input << " is at position " << int(input - 96) << " in the alphabet." << endl;
    return 0;
}