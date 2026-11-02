#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    char searchChar;
    int memory = -1; // Alternatively: lastIndex = -1
    cout << "Please enter text (with spaces if applicable): ? ";
    getline(cin, input);
    cout << "Please enter character: ? ";
    cin >> searchChar;

    for (int i = 0; i < input.length(); i++)
    {
        if (searchChar == input.at(i))
        {
            if (i > memory)
            {
                memory = i;
            }
        }
    }
    if(memory != -1){
        cout << "The character " << searchChar << " occurs in the text at position " << memory << "." << endl;
    } else {
        cout << "The character " << searchChar << " does not occur in the text." << endl;
    }
    return 0;
}
