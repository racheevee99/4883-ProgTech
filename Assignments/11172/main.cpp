//////////////////////////////////////////////////////////////////////////////////
//
// Author:           Rachel Vetter
// Email:            racheevee99@gmail.com
// Label:            11172
// Title:            Relational Operators
// Course:           CMPS 4883
// Semester:         Fall 2020
//
// Description:
//       Compares 2 numbers in a file and displays their relationship.
//
/////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int main() {
  int t, a, b;
  cin >> t;
  for(int i = 0; i < t; i++)
  {
    cin>>a >>b;
    if (a > b)
      cout << ">\n";
    else if(a < b)
      cout << "<\n";
    else 
      cout << "=\n";
  }
return 0;
}