#include <iostream>
#include <string>
using namespace std;

void split_at_first(char character, string input, string& first_part, string& second_part)
{
    int position = -1;

    string before_temporary_storage, after_temporary_storage;

    for(int i = 0; i < input.length(); i++){
        if(character == input[i]){
            position = i;
            break;
        }
    }

    if(position == -1){
        first_part = input;
        second_part = "";
    }
    else{

        for(int j = 0; j < position; j++){
            before_temporary_storage += input[j];
        }

        for(int x = position + 1; x < input.length(); x++){
            after_temporary_storage += input[x];
        }

        first_part = before_temporary_storage;
        second_part = after_temporary_storage;
    }
}

int main(){

    string input, first_part, second_part;
    char input_character;

    cout << "Please enter a single-line string: ? ";
    getline(cin, input);

    cout << "Please enter the character: ? ";
    cin >> input_character;

    split_at_first(input_character, input, first_part, second_part);

    cout << "The first part of the string is: " << first_part << endl;
    cout << "The second part of the string is: " << second_part << endl;

    return 0;
}
