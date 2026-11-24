#include <iostream>
#include <string>
using namespace std;

string trim(char character, string s)
{
    string temporary_storage = "";

    int start = 0;
    int end = s.length() - 1;

    while (start < s.length() && s[start] == character)
    {
        start++;
    }

    while (end >= start && s[end] == character)
    {
        end--;
    }

    for (int i = start; i <= end; i++)
    {
        temporary_storage += s[i];
    }

    return temporary_storage;
}

int main()
{
    string s = "";
    char character = 'x';

    cout << "Please enter the text line: ? ";
    getline(cin, s);

    cout << "Please enter the character: ? ";
    cin >> character;

    cout << "Before: " << s << endl;
    cout << "After: " << trim(character, s) << endl;

    return 0;
}
