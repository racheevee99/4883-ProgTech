//////////////////////////////////////////////////////////////////////////////////
//
// Author:           Rachel Vetter
// Email:            racheevee99@gmail.com
// Label:            12403
// Title:            Save Setu
// Course:           CMPS 4883
// Semester:         Fall 2020
//
// Description:
//       Collects donations and displays total collections.
//
/////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main() {
  int T, num, total = 0;
  string op;
  cin >> T;
  for(int i = 0; i < T; i++)
  {
    cin >> op;
    if(op == "donate")
    {
      cin >> num;
      total += num;
    }
    else
      cout << total << endl;
  }
  return 0;
}
