#include <iostream>
using namespace std;

int main(){
    double sideLengthInput;
    cout << "Please enter the side length (in cm): ? ";
    cin >> sideLengthInput;
    cout << "The perimeter of the square is (in cm): " << (4 * sideLengthInput) << endl;
    cout << "The area of the square is (in cm*cm): " << (sideLengthInput * sideLengthInput) << endl;
    return 0;
}
