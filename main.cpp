// Assignment 1 - Fuel Range
// Maurice Brown

#include <iostream>
using namespace std;

int main() {
  // TODO: Declare your variables, with comments for each
  double gallons;
  double mpg;
  int percentage;

  // TODO: Prompt for and input the required values
  cout << "Enter the number of gallons: ";
  cin >> gallons;
  cout << "Enter the miles per gallon: ";
  cin >> mpg;
  cout << "Enter the percentage of which the tank is filled: ";
  cin >> percentage;

  // TODO: Calculate the results
  double range = gallons * (percentage / 100.0) * mpg;


  // TODO: Output the results
  cout << "The vehicle can be driven " << range << " miles on the ramaining fuel." << endl;
}
