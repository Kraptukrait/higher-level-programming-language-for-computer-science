#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "Please enter the string (6 characters): ? ";
    cin >> text;

    if (text[0] == text[5] && text[1] == text[4] && text[2] == text[3]) {
        cout << "The entered word is a palindrome." << endl;
    } else {
        cout << "The entered word is NOT a palindrome." << endl;
    }
    return 0;
}
