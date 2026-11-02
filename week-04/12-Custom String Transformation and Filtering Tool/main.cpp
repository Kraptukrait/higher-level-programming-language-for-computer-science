#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, result = "";

    cout << "Please enter text (with spaces if applicable): ? ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        char c = input[i];

        if (c >= 'a' && c <= 'z') {
            result += c;
            result += c;
        } 
        else if (c >= 'A' && c <= 'Z') {
            result += c;
            result += c;
            result += c;
        } 
        else if (c >= '0' && c <= '9') {
            result += '.';
        } 
        else if (c == '!' || c == '?') {
            // Remove punctuation ('!' and '?')
        } 
        else if (c == ' ') {
            result += '_';
        } 
        else {
            result += c;
        }
    }
    cout << "The text after transformation: " << result << endl;
    return 0;
}
