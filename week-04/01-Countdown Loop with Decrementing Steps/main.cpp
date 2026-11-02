#include <iostream>
using namespace std;

int main(){
    int maxNumber = 50;
    int steps = 5;
    for(maxNumber; maxNumber >= 0; maxNumber -= steps){
        cout << maxNumber << endl;
    }
    return 0;
}
