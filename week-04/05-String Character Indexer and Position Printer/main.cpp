#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    cout << "Please enter a single-line text: ? ";
    getline(cin, input);

    for(int i = 0; i < input.length(); i++){
        cout << "Position: " << i << " Character: " << input.at(i) << endl;
    }
    return 0;
}
