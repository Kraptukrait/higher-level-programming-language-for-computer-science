#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    string result;
    cout << "Please enter text (with spaces if applicable): ? ";
    getline(cin, input);
    
    for(int i = input.length() - 1; i >= 0; i--){
        result += input[i];
    }
    
    cout << "Input text: " << input << endl;
    cout << "Result: " << result << endl; 
    return 0;
}
