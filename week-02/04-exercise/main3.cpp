#include <iostream>
#include <cmath> // Recommended for abs()
using namespace std;

int main() {
    int hoursInput1, minutesInput1, secondsInput1;

    cout << "Please enter the hours of the first time: ? ";
    cin >> hoursInput1;

    cout << "Please enter the minutes of the first time: ? ";
    cin >> minutesInput1;

    cout << "Please enter the seconds of the first time: ? ";
    cin >> secondsInput1;

    int calculation1 = (hoursInput1 * 3600) + (minutesInput1 * 60) + secondsInput1;

    cout << hoursInput1 << ":" << minutesInput1 << " o'clock and " << secondsInput1 << " seconds in seconds since midnight: " << calculation1 << endl << endl;

    

    int hoursInput2, minutesInput2, secondsInput2;

    cout << "Please enter the hours of the second time: ? ";
    cin >> hoursInput2;

    cout << "Please enter the minutes of the second time: ? ";
    cin >> minutesInput2;

    cout << "Please enter the seconds of the second time: ? ";
    cin >> secondsInput2;

    int calculation2 = (hoursInput2 * 3600) + (minutesInput2 * 60) + secondsInput2;

    cout << hoursInput2 << ":" << minutesInput2 << " o'clock and " << secondsInput2 << " seconds in seconds since midnight: " << calculation2 << endl << endl;

    int difference = abs(calculation2 - calculation1);

    int hours = difference / 3600;
    int minutes = (difference % 3600) / 60;
    int seconds = difference % 60;

    cout << "The difference between the two times is:" << endl;

    cout << hours << " hours, " << minutes << " minutes and " << seconds << " seconds." << endl;
    return 0;
}
