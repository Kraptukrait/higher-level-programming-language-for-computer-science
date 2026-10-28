#include <iostream>
using namespace std;

int main(){
    double input;
    cout << "Please enter the floating-point number: ? ";
    cin >> input;
    cout << "The fractional part is: " << (input - int(input)) << endl;
    return 0;
}
