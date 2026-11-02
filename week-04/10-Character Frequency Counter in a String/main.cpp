#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    char searchChar;
    int counter = 0;
    cout << "Please enter text (with spaces if applicable): ? ";
    getline(cin, input);
    cout << "Please enter character: ? ";
    cin.get(searchChar);

    for (int i = 0; i < input.length(); i++)
    {
        if (searchChar == input.at(i))
        {
            counter += 1;
        }
    }
    cout << "The character " << searchChar << " appears " << counter << " time(s) in the text." << endl;
    return 0;
}
