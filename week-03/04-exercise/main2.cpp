#include <iostream>
using namespace std;

int main(){
    string greetings[6] = {"Good night.", "Good morning.", "Enjoy your meal.", "Good afternoon.", "Good evening.", "Invalid hour input."};
    int inputHour;
    cout << "Please enter the hour of the current time: ? ";
    cin >> inputHour;

    if(inputHour == 23 || (inputHour >= 0 && inputHour <= 5)){
        cout << greetings[0] << endl;
    }else if(inputHour >= 6 && inputHour <= 10){
        cout << greetings[1] << endl;
    }else if(inputHour >= 11 && inputHour <= 13){
        cout << greetings[2] << endl;
    }else if(inputHour >= 14 && inputHour <= 17){
        cout << greetings[3] << endl;
    }else if(inputHour >= 18 && inputHour <= 22){
        cout << greetings[4] << endl;
    }else{
        cout << greetings[5] << endl;
    }

    return 0;
}
