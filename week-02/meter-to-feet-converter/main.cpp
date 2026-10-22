#include <iostream>
using namespace std;

int main(){
    double input = 0;
    double calculation = 0;
    cout << "Please enter the length in meters: " << endl << "?";
    cin >> input;
    calculation = input * 3.2808;
    cout << "\nThe length in feet is: " << calculation << endl;
    // system("PAUSE");
    return 0;
}