#include <iostream>
using namespace std;

int main(){
    for(int z = 1, value2 = 10, value3 = 10; z <= 10 ; value2 *= 2 , value3 *= 3 , z++){
        cout << "Row: " << z
             << " Doubler: " << value2
             << " Tripler: " << value3
             << endl;
    }
    return 0;
}
