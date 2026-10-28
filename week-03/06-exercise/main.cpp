#include <iostream>
using namespace std;

int main(){
    int comparisonNumberOne, comparisonNumberTwo, comparisonNumberThree, comparisonNumberFour, counterEqualNumber = 0, counterUnequalNumber = 0;
    cout << "Please enter the 1st number: ? ";
    cin >> comparisonNumberOne;
    cout << "Please enter the 2nd number: ? ";
    cin >> comparisonNumberTwo;
    cout << "Please enter the 3rd number: ? ";
    cin >> comparisonNumberThree;
    cout << "Please enter the 4th number: ? ";
    cin >> comparisonNumberFour;

    if(comparisonNumberOne == 99){
        counterEqualNumber += 1;
    }else{
        counterUnequalNumber += 1;
    }
    if(comparisonNumberTwo == 99){
        counterEqualNumber += 1;
    }else{
        counterUnequalNumber += 1;
    }
    if(comparisonNumberThree == 99){
        counterEqualNumber += 1;
    }else {
        counterUnequalNumber += 1;
    }
    if(comparisonNumberFour == 99){
        counterEqualNumber += 1;
    }else{
        counterUnequalNumber += 1;
    }
    cout << counterEqualNumber << " entered numbers were equal to the comparison number 99." << endl;
    cout << counterUnequalNumber << " entered numbers were unequal to the comparison number 99." << endl;
    return 0;
}
