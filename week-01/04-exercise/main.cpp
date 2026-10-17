#include <iostream>
using namespace std;

int main(){
    int amount, count50, remainder50, count10, remainder10, count5, remainder5;
    cout << "Please enter the amount of money: ? ";
    cin >> amount;
    cout << "The amount of money can be paid in" << endl;

    // Calculation for the required 50-euro bills
    count50 = amount / 50;
    remainder50 = amount - (count50 * 50);

    // Calculation for the required 10-euro bills
    count10 = remainder50 / 10;
    remainder10 = remainder50 - (count10 * 10);

    // Calculation for the required 5-euro bills
    count5 = remainder10 / 5;
    remainder5 = remainder10 - (count5 * 5);

    // Output to the console
    cout << count50 << " 50-euro bill(s)," << endl << count10 << " 10-euro bill(s) and" << endl << count5 << " 5-euro bill(s)." << endl;
    return 0;
}
