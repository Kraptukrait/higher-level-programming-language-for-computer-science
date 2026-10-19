#include <iostream>
using namespace std;

int main(){
    int hoursInput, minutesInput, secondsInput;
    cout << "Please enter the hours of the first time: ? ";
    cin >> hoursInput;
    cout << "Please enter the minutes of the first time: ? ";
    cin >> minutesInput;
    cout << "Please enter the seconds of the first time: ? ";
    cin >> secondsInput;

    /*
    From hours to seconds,
    From minutes to seconds,
    Plus seconds
    */
    int secondsCalculation = ((hoursInput * 60) * 60) + (minutesInput * 60) + secondsInput;

    cout << hoursInput << ":" << minutesInput << " and " << secondsInput << " seconds in seconds since midnight: " << secondsCalculation;
    return 0;
}
