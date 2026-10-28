#include <iostream>
using namespace std;

int main(){
    int hoursInput1, minutesInput1, secondsInput1;
    cout << "Please enter the hours of the first time: ? ";
    cin >> hoursInput1;
    cout << "Please enter the minutes of the first time: ? ";
    cin >> minutesInput1;
    cout << "Please enter the seconds of the first time: ? ";
    cin >> secondsInput1;

    /*
    From hours to seconds,
    From minutes to seconds,
    Plus seconds
    */
    int secondsCalculation1 = ((hoursInput1 * 60) * 60) + (minutesInput1 * 60) + secondsInput1;

    cout << hoursInput1 << ":" << minutesInput1 << " and " << secondsInput1 << " seconds in seconds since midnight: " << secondsCalculation1 << endl;

    // Second run: 

    int hoursInput2, minutesInput2, secondsInput2;
    cout << "\nPlease enter the hours of the second time: ? ";
    cin >> hoursInput2;
    cout << "Please enter the minutes of the second time: ? ";
    cin >> minutesInput2;
    cout << "Please enter the seconds of the second time: ? ";
    cin >> secondsInput2;

    /*
    From hours to seconds,
    From minutes to seconds,
    Plus seconds
    */
    int secondsCalculation2 = ((hoursInput2 * 60) * 60) + (minutesInput2 * 60) + secondsInput2;

    cout << hoursInput2 << ":" << minutesInput2 << " and " << secondsInput2 << " seconds in seconds since midnight: " << secondsCalculation2;
    return 0;
}
