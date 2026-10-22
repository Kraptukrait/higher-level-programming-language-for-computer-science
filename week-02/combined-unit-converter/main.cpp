#include <iostream>
using namespace std;

int main()
{
    double input = 0;
    int selection = 0;
    double calculation = 0;
    
    cout << "Your input:" << endl
         << "?";
    cin >> input;
    
    cout << "\nYour conversion selection:" << endl
         << "1 - Celsius to Fahrenheit" << endl
         << "2 - Meters to Feet" << endl
         << "3 - Euros to US Dollars" << endl;
    cin >> selection;

    // calculation = (input * 1.8 + 32) * (selection == 1) + (input * 3.2808) * (selection == 2) + (input * 1.2957) * (selection == 3);
    
    // Mathematical interpolation for selection choice
    calculation = (input * 1.8 + 32.0) * (selection - 2.0) * (selection - 3.0) / 2.0 
    + (input * 3.2808) * (selection - 1.0) * (selection - 3.0) / (-1.0) 
    + (input * 1.2957) * (selection - 1.0) * (selection - 2.0) / 2.0;
    
    cout << "\nThe result is: " << calculation << endl;
    return 0;
}

/*
Logical Calculations (Interpolation)

For choice 1:
How to calculate with 1 so that the result is 1:
(1-2) * (1-3) / 2
-1 * (-2) / 2
= 2 / 2
= 1

For choice 2:
(2-1) * (2-3) / (-1)
1 * (-1) / (-1)
-1 / (-1)
= 1

For choice 3:
(3-1) * (3-2) / 2
2 * 1 / 2
= 2 / 2
= 1
*/