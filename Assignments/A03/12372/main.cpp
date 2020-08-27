//////////////////////////////////////////////////////////////////////////////////
//
// Author:           Rachel Vetter
// Email:            racheevee99@gmail.com
// Label:            12372
// Title:            Packing for Holiday
// Course:           CMPS 4883
// Semester:         Fall 2020
//
// Description:
//       Determines if the dimensions of an object can fit inside the
//   dimensions of a given suitcase.
//
/////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main() {
  int T, L, W, H;
  string s;
  cin >> T;
  for(int i = 0; i < T; i++)
  {
    cin >> L >> W >> H;
    if(L > 20 || W > 20 || H > 20)
      s = "bad";
    else
      s = "good";
    cout << "Case " << i+1 << ": " << s << endl; 
  }
  return 0;
}