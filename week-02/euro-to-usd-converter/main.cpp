#include <iostream>
using namespace std;

int main(){
    double input = 0;
    double calculation = 0;
    cout << "Please enter the amount in Euros: " << endl << "?";
    cin >> input;
    calculation = (input * 1.2957);
    cout << "\nThe amount in US Dollars is: " << calculation << endl;
    return 0;
}