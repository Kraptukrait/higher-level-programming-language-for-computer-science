#include <iostream>
#include <string>
using namespace std;

string replace(string line, char character_to_replace, string replacement_text)
{
    string temporary_storage = "";

    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == character_to_replace)
        {
            temporary_storage += replacement_text;
        }
        else
        {
            temporary_storage += line[i];
        }
    }

    return temporary_storage;
}

int main()
{
    string s1 = "", s2 = "";
    char c;

    cout << "Please enter the text line: ? ";
    getline(cin, s1);

    cout << "Please enter the character to replace: ? ";
    cin >> c;
    cin.ignore();

    cout << "Please enter the replacement text: ? ";
    getline(cin, s2);

    cout << "Result: " << replace(s1, c, s2) << endl;

    return 0;
}
