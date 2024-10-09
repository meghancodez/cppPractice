#include <iostream>
using namespace std;

int main() {
  
  double startingBalance;
  int numChecks;
  int bankCharge;
  double serviceFee = 10;
  double finalBalance = 0;

  cout << "What is the starting balance? ";  // allow user to enter negative value... unsigned int?
  cin >> startingBalance;

    if (startingBalance <= 0)
    cout << "The account is overdrawn!\n";

    if (startingBalance < 400)
    startingBalance - 15;

  cout << "\nHow many checks did you write this month? This cannot be a negative number: ";
  cin >> numChecks;

    if (numChecks < 20)
      finalBalance = startingBalance - (numChecks * .10);

    if (numChecks >= 20 && numChecks <= 39)
      finalBalance = startingBalance - (numChecks * .08);

    if (numChecks >= 40 && numChecks <= 59)
      finalBalance = startingBalance - (numChecks * .06);

    if (numChecks >= 60)
      finalBalance = startingBalance - (numChecks * .04);

  finalBalance = finalBalance - serviceFee;

  cout << "\nYour starting balance is $" << startingBalance << ".\n";  // this may come out in scientific notation...
  cout << "You wrote " << numChecks << " checks.\n";
  cout << "Your final balance is $" << finalBalance << "." << endl;
}
