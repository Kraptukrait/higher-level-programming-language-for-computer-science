#include <iostream>
using namespace std;

int main(){
    int inputHour;
    cout << "Please enter the hour of the current time: ? ";
    cin >> inputHour;

    if(inputHour == 23 || (inputHour >= 0 && inputHour <= 5)){
        cout << "Good night." << endl;
    }else if(inputHour >= 6 && inputHour <= 10){
        cout << "Good morning." << endl;
    }else if(inputHour >= 11 && inputHour <= 13){
        cout << "Enjoy your meal." << endl;
    }else if(inputHour >= 14 && inputHour <= 17){
        cout << "Good afternoon." << endl;
    }else if(inputHour >= 18 && inputHour <= 22){
        cout << "Good evening." << endl;
    }else{
        cout << "Invalid hour input." << endl;
    }

    return 0;
}
