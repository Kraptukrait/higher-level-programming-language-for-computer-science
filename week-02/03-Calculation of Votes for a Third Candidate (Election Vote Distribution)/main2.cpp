#include <iostream>
using namespace std;

int main(){
    int validVotesInput, candidate1VotesInput, candidate2VotesInput, candidate3Calculation;
    double candidate1PercentageCalculation, candidate2PercentageCalculation, candidate3PercentageCalculation;
    cout << "Please enter the total number of valid votes cast: ? ";
    cin >> validVotesInput;
    cout << "Please enter the number of votes for the first candidate: ? ";
    cin >> candidate1VotesInput;
    cout << "Please enter the number of votes for the second candidate: ? ";
    cin >> candidate2VotesInput;
    candidate3Calculation = (validVotesInput - candidate1VotesInput - candidate2VotesInput);
    cout << "Therefore, " << candidate3Calculation << " votes went to the third candidate." << endl;

    candidate1PercentageCalculation = ((double)candidate1VotesInput / validVotesInput) * 100;
    candidate2PercentageCalculation = ((double)candidate2VotesInput / validVotesInput) * 100;
    candidate3PercentageCalculation = ((double)candidate3Calculation / validVotesInput) * 100;

    cout << "Candidate 1 received " << candidate1PercentageCalculation << "% of the votes." << endl;

    cout << "Candidate 2 received " << candidate2PercentageCalculation << "% of the votes." << endl;

    cout << "Candidate 3 received " << candidate3PercentageCalculation << "% of the votes." << endl;
    return 0;
}
