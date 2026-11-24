#include <iostream>
using namespace std;

int recursive_addition(int i, int k)
{
    int result;
    result = i + k;
    return result;
}

int recursive_subtraction(int i, int k)
{
    int result;
    result = i - k;
    return result;
}

int main()
{
    int i = 0, k = 0;

    cout << "Please enter the first number: ? ";
    cin >> i;

    cout << "Please enter the second number: ? ";
    cin >> k;

    cout << i << " + " << k << " = "
         << recursive_addition(i, k) << endl;

    cout << i << " - " << k << " = "
         << recursive_subtraction(i, k) << endl;

    return 0;
}
