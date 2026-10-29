#include <iostream>
using namespace std;

int main()
{
    int inputOneDay, inputOneMonth, inputOneYear;
    int inputTwoDay, inputTwoMonth, inputTwoYear;

    // First input
    cout << "Please enter the day of the first date: ";
    cin >> inputOneDay;
    cout << "Please enter the month of the first date: ";
    cin >> inputOneMonth;
    cout << "Please enter the year of the first date: ";
    cin >> inputOneYear;

    // Second input
    cout << "Please enter the day of the second date: ";
    cin >> inputTwoDay;
    cout << "Please enter the month of the second date: ";
    cin >> inputTwoMonth;
    cout << "Please enter the year of the second date: ";
    cin >> inputTwoYear;

    if (inputOneYear < inputTwoYear)
    {
        cout << "The first date is before the second date." << endl;
    }
    else if (inputOneYear > inputTwoYear)
    {
        cout << "The second date is before the first date." << endl;
    }
    else
    {
        if (inputOneMonth < inputTwoMonth)
        {
            cout << "The first date is before the second date." << endl;
        }
        else if (inputOneMonth > inputTwoMonth)
        {
            cout << "The second date is before the first date." << endl;
        }
        else
        {
            if (inputOneDay < inputTwoDay)
            {
                cout << "The first date is before the second date." << endl;
            }
            else if (inputOneDay > inputTwoDay)
            {
                cout << "The second date is before the first date." << endl;
            }
            else
            {
                cout << "Both dates are the same." << endl;
            }
        }
    }

    return 0;
}
