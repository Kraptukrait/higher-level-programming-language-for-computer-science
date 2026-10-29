#include <iostream>
using namespace std;

int main()
{
    char inputDigitOne, inputDigitTwo;
    int number1, number2;
    cout << "Please enter the first digit: ?";
    cin >> inputDigitOne;

    cout << "Please enter the second digit: ? ";
    cin >> inputDigitTwo;
    if (inputDigitOne == 'q' || inputDigitTwo == 'q')
    {
        cout << "The program was terminated by entering q." << endl;
        return 1;
    }
    else
    {
        number1 = inputDigitOne - '0';
        number2 = inputDigitTwo - '0';
        cout << number1 << " + " << number2 << " = " << (number1 + number2);
        return 0;
    }
}
