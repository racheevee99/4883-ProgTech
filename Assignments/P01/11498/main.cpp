//////////////////////////////////////////////////////////////////////////////////
//
// Author:           Rachel Vetter
// Email:            racheevee99@gmail.com
// Label:            11498
// Title:            Division of Nlogonia
// Course:           CMPS 4883
// Semester:         Fall 2020
//
// Description:
//       This program determines the quadrant on graph that a certain point 
//  is in based on a given center point.
//
/////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main() {
  int K, x, y;
  cin >> K;
  while(K != 0)
  {
    cin >> x >> y;
    int divisa[2] = {x, y};
    for(int i = 0; i < K; i++)
    {
      cin >> x >> y;
      if(x > divisa[0])
      {
        if(y > divisa[1])
          cout << "NE\n";
        else if(y < divisa[1])
          cout << "SE\n";
        else 
          cout << "divisa\n";
      }
      else if(x < divisa[0])
      {
        if(y > divisa[1])
          cout << "NO\n";
        else if(y < divisa[1])
          cout << "SO\n";
        else 
          cout << "divisa\n";
      }
      else
        cout << "divisa\n";
    }
    cin >> K;
  }
  return 0;
}