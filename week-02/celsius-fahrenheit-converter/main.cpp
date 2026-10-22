#include <iostream>
using namespace std;

int main(){
    double input(0);
    double calculation = 0;
    cout << "Please enter the temperature in degrees Celsius: " << endl << "?";
    cin >> input;
    calculation = (input * 1.8) + 32;
    cout << "\nThe temperature in Fahrenheit is: " << calculation << endl;
    return 0;
}