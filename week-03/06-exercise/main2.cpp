#include <iostream>
using namespace std;

int main(){
    int comparisonNumber[4];
    int counterEqualNumber = 0, counterUnequalNumber = 0;
    for(int i=1; i <= 4; i++){
        cout << "Please enter the " << i << ". number: ? ";
        cin >> comparisonNumber[i];

        if(comparisonNumber[i] == 99){
            counterEqualNumber += 1;
        }else{
            counterUnequalNumber += 1;
        }
    }
    cout << counterEqualNumber << " entered numbers were equal to the comparison number 99." << endl;
    cout << counterUnequalNumber << " entered numbers were unequal to the comparison number 99." << endl;
    return 0;
}
