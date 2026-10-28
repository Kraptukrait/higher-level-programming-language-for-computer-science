#include <iostream>
using namespace std;

int main(){
    int validVotesInput, candidate1VotesInput, candidate2VotesInput, candidate3Calculation;
    cout << "Please enter the total number of valid votes cast: ? ";
    cin >> validVotesInput;
    cout << "Please enter the number of votes for the first candidate: ? ";
    cin >> candidate1VotesInput;
    cout << "Please enter the number of votes for the second candidate: ? ";
    cin >> candidate2VotesInput;
    candidate3Calculation = (validVotesInput - candidate1VotesInput - candidate2VotesInput);
    cout << "Therefore, " << candidate3Calculation << " votes went to the third candidate." << endl;
    return 0;
}
