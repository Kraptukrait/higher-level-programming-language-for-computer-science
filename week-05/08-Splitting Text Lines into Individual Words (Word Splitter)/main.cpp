#include <iostream>
#include <string>
using namespace std;

int main(){
    string storage[5];
    int count = 0;

    for(int i = 0; i < 5; i++){
        cout << "Input line = ? ";
        getline(cin, storage[i]);

        if(storage[i] == "") break;
        count++;
    }

    for(int i = 0; i < count; i++){
        string word = "";

        for(int j = 0; j < storage[i].length(); j++){
            if(storage[i].at(j) == ' '){
                cout << word << endl;
                word = "";
            }
            else{
                word += storage[i].at(j);
            }
        }

        if(word != ""){
            cout << word << endl;
        }
    }

    return 0;
}
