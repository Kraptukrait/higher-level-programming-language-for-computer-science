#include <iostream>
using namespace std;

int main(){
    int rectangleWidth, rectangleHeight;

    cout << "Please enter the width of the rectangle: ? ";
    cin >> rectangleWidth;
    cout << "Please enter the height of the rectangle: ? ";
    cin >> rectangleHeight;

    for(int i = 1; i <= rectangleHeight; i++){
        for(int j = 1; j <= rectangleWidth; j++){
            if(i == 1 || i == rectangleHeight || j == 1 || j == rectangleWidth){
                cout << "*";
            } else {
                cout << "+";
            }
        }
        cout << endl;
    }
    return 0;
}
