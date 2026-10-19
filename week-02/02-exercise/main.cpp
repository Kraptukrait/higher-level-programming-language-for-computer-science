#include <iostream>
using namespace std;

int main(){
    int v1, v2, v_temp;
    cout << "Please enter the integer value of the first variable: ? ";
    cin >> v1;
    cout << "Please enter the integer value of the second variable: ? ";
    cin >> v2;

    v_temp = v1;
    v1 = v2;
    v2 = v_temp;

    cout << "After swapping:\nValue of the first variable: " << v1 << endl << "Value of the second variable: " << v2 << endl;

    return 0;
}
