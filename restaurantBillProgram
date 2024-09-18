#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  double mealCost = 88.67;
  double taxAmount = (6.75 * mealCost) / 100;
  double total_after_tax = mealCost + taxAmount;
  double tip = .20 * total_after_tax;
  double total_after_tip = tip + total_after_tax;

  cout << fixed << setprecision(2)
       << "\n\n" << "The meal cost $" << mealCost << " dollars."  
       << "\n" << "The tax amount was $" << taxAmount << " dollars."                                              
       << "\n" << "The tip amount was $" << tip << " dollars."                                            
       << "\n" << "The total bill came out to $" << total_after_tip << " dollars.";            

  return 0;
}
