#include <iostream>
#include <string>
using namespace std;

int main() {

    string input[11];
    unsigned int sudoku[9][9] = {0};
    char character;
    int row = 0;
    int column = 0;

    cout << "Please enter the Sudoku:\n";

    // Read Sudoku input
    for (int i = 0; i < 11; i++) {
        cin >> input[i];
    }

    // Store numbers
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < input[i].length(); j++) {
            character = input[i][j];
            if (character >= '1' && character <= '9') {
                sudoku[row][column] = character - '0';
                column++;
                if (column == 9) {
                    column = 0;
                    row++;
                }
            }
        }
    }

    // Print Sudoku
    cout << "\nThe Sudoku is:\n";
    for (int i = 0; i < 9; i++) {
        if (i == 3 || i == 6) {
            cout << "=======MM=======MM=======\n";
        }
        for (int j = 0; j < 9; j++) {
            if (j == 3 || j == 6) {
                cout << ";MM";
            }
            cout << ";" << sudoku[i][j];
        }
        cout << endl;
    }
    return 0;
}
