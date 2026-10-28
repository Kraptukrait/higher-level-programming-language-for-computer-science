#include <iostream> // ... makes cout, cin etc. available
using namespace std;

#include <climits> // ... makes INT_MIN, INT_MAX etc. available

int main(){
    cout << "Smallest storable int number: " << INT_MIN << endl;
    cout << "Largest storable int number: " << INT_MAX << endl << endl;

    cout << "Smallest storable int number - 1: " << INT_MIN - 1 << endl;
    cout << "Largest storable int number + 1: " << INT_MAX + 1 << endl;
    return 0;
}

/*
What happens when you "go beyond the boundary"?

Wrap-around: The values "wrap around" (start over from the other end).
*/
