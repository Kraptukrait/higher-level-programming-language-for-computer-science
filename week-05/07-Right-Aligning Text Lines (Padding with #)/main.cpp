#include <iostream>
using namespace std;
#include <string>

int main(){
    string storage[4];
    int maxLength = 0;
    int count = 0;

    for(int i = 0; i < 4; i++){
        cout << "Text line = ? ";
        getline(cin, storage[i]);

        if(storage[i] == "") break;

        count++;
    }

    for(int j = 0; j < count; j++){
        if(maxLength < storage[j].length())
            maxLength = storage[j].length();
    }

    for(int x = 0; x < count; x++){
        int calculation = maxLength - storage[x].length();

        for(int y = 0; y < calculation; y++){
            cout << "#";
        }

        cout << storage[x] << endl;
    }

    return 0;
}
