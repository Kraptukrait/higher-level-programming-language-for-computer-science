// File: sudoku_validator_main.cpp

#include <iostream>
#include <string>
using namespace std;

const size_t sudoku_size = 9;
const size_t input_size = 11;


bool check_columns(int sudoku[][sudoku_size])
{
    bool valid = true;
    for (int i = 0; i < 9; i++)
    {
        int numbers[10] = {0};
        for (int j = 0; j < 9; j++)
        {
            int number = sudoku[j][i];
            numbers[number]++;
        }
        for (int j = 1; j <= 9; j++)
        {
            if (numbers[j] == 0)
            {
                cout << "Column " << i << ": Number " << j
                     << " is missing." << endl;
                valid = false;
            }
            else if (numbers[j] > 1)
            {
                cout << "Column " << i << ": Number " << j
                     << " appears more than once." << endl;
                valid = false;
            }
        }
    }
    return valid;
}


bool check_rows(int sudoku[][sudoku_size])
{
    bool valid = true;
    for (int i = 0; i < 9; i++)
    {
        int numbers[10] = {0};
        for (int j = 0; j < 9; j++)
        {
            int number = sudoku[i][j];
            numbers[number]++;
        }
        for (int j = 1; j <= 9; j++)
        {
            if (numbers[j] == 0)
            {
                cout << "Row " << i << ": Number " << j
                     << " is missing." << endl;
                valid = false;
            }
            else if (numbers[j] > 1)
            {
                cout << "Row " << i << ": Number " << j
                     << " appears more than once." << endl;
                valid = false;
            }
        }
    }
    return valid;
}


bool check_blocks(int sudoku[][sudoku_size])
{
    bool valid = true;
    int block = 0;
    for (int i = 0; i < 9; i += 3)
    {
        for (int j = 0; j < 9; j += 3)
        {
            int numbers[10] = {0};

            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    int number = sudoku[i + k][j + l];
                    numbers[number]++;
                }
            }
            for (int k = 1; k <= 9; k++)
            {
                if (numbers[k] == 0)
                {
                    cout << "Block " << block << ": Number " << k
                         << " is missing." << endl;
                    valid = false;
                }
                else if (numbers[k] > 1)
                {
                    cout << "Block " << block << ": Number " << k
                         << " appears more than once." << endl;
                    valid = false;
                }
            }
            block++;
        }
    }
    return valid;
}


void convert_input(string input[], int sudoku[][sudoku_size])
{
    int row = 0, column = 0;
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < input[i].length(); j++)
        {
            if (input[i][j] >= '1' && input[i][j] <= '9' && row < 9)
            {
                sudoku[row][column] = input[i][j] - '0';
                column++;
                if (column == 9)
                {
                    column = 0;
                    row++;
                }
            }
        }
    }
}

int main()
{
    int sudoku[sudoku_size][sudoku_size] = {0};
    string input[input_size];

    cout << "Please enter the Sudoku:" << endl;
    for (size_t i = 0; i < input_size; i++){
        getline(cin, input[i]);}

    convert_input(input, sudoku);

    bool columns_valid = check_columns(sudoku);
    bool rows_valid = check_rows(sudoku);
    bool blocks_valid = check_blocks(sudoku);

    if (columns_valid && rows_valid && blocks_valid)
    {
        cout << "The Sudoku is valid." << endl;
    }
    return 0;
}
