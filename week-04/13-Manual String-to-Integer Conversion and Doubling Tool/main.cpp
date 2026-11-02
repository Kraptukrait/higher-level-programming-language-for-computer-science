#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    string input;

    cout << "Please enter the number or the word 'end': ? ";
    while (getline(cin, input)) {
        if (input == "end") {
            cout << "The program is now terminating." << endl;
            break;
        }

        number = 0;
        for (int i = 0; i < input.length(); i++) {
            number = number * 10 + (input[i] - '0');
        }

        int result = number * 2;
        cout << "The doubled value is: " << result << endl;
    }
    return 0;
}
