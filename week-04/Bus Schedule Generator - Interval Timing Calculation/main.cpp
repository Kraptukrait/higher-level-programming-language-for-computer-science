#include <iostream>
using namespace std;

int main(){
    int inputHour, inputMinute, inputIntervalTime;
    do{
        cout << "Please enter the hours of the start time: ? ";
        cin >> inputHour;
    }while(inputHour < 0 || inputHour > 23);

    do{
        cout << "Please enter the minutes of the start time: ? ";
        cin >> inputMinute;
    }while(inputMinute > 59 || inputMinute < 0);

    cout << "So the first bus departs at " << inputHour << ":" << inputMinute << " o'clock." << endl;

    do{
        cout << "Please enter the interval time in minutes: ? ";
        cin >> inputIntervalTime;
    }while(inputIntervalTime > 180 || inputIntervalTime <= 0);

    while(inputHour < 24){
        for(inputMinute; inputMinute <= 59; inputMinute += inputIntervalTime){
            cout << inputHour << ":" << inputMinute << " ";
        }
        inputHour += inputMinute / 60;
        inputMinute = inputMinute % 60;
        cout << "\n";
    }

    return 0;
}


/*
Also possible:
while (inputMinute <= 59) {
    cout << inputHour << ":" << inputMinute << " ";

    inputMinute += inputIntervalTime;
}
*/
