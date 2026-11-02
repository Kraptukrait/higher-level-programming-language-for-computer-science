#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    char searchChar, replacementChar;
    cout << "Please enter text (with spaces if applicable): ? ";
    getline(cin, input);
    cout << "Please enter the character to be replaced: ? ";
    cin.get(searchChar);
    cin.ignore();
    cout << "Please enter the replacement character: ? ";
    cin.get(replacementChar);

    for(int i = 0; i < input.length(); i++){
        if(searchChar == input.at(i)){
            input.at(i) = replacementChar;
        }
    }
    cout << "The text after replacement: " << input << endl;
    return 0;
}
