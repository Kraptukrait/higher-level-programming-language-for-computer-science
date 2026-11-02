#include <iostream>
using namespace std;

int main(){
    int width, height;

    cout << "Please enter the width of the parallelogram: ? ";
    cin >> width;
    cout << "Please enter the height of the parallelogram: ? ";
    cin >> height;

    for (int i = 0; i < height; i++) {
        for (int s = 0; s < i; s++) {
            cout << ".";
        }
        if (i == 0 || i == height - 1) {
            for (int j = 0; j < width; j++) {
                cout << "*";
            }
        }
        else {
            cout << "*";
            for (int j = 0; j < width - 2; j++) {
                cout << "+";
            }
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
