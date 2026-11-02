#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    bool valid = false;

    while (!valid) {
        cout << "Text: ? ";
        getline(cin, text);
        
        valid = true;
        for (int i = 0; i < text.length(); i++) {
            if (text[i] < 'a' || text[i] > 'z') {
                valid = false;
                break;
            }
        }
    }

    bool palindrome = true;
    for (int i = 0; i < text.length() / 2; i++) {
        if (text[i] != text[text.length() - 1 - i]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome) {
        cout << "The entered word is a palindrome." << endl;
    } else {
        cout << "The entered word is NOT a palindrome." << endl;
    }
    return 0;
}
