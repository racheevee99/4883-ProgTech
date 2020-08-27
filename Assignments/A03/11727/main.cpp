//////////////////////////////////////////////////////////////////////////////////
//
// Author:           Rachel Vetter
// Email:            racheevee99@gmail.com
// Label:            11172
// Title:            Cost Cutting
// Course:           CMPS 4883
// Semester:         Fall 2020
//
// Description:
//       Finds the middle value between 3 numbers.
//
/////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int main() {
  int T, sal[3];
  cin >> T;
  for(int i = 0; i < T; i++)
  {
    cin >> sal[0] >> sal[1] >> sal[2];
    //Bubble Sort
    for(int x = 0; x < 2; x++)
    {
      for(int y = 0; y < 2 - x; y++)
      {
        if(sal[y] > sal[y+1])
        {
          int temp = sal[y];
          sal[y] = sal[y+1];
          sal[y+1] = temp;
        }
      }
    }
    cout << "Case " << i+1 << ": " << sal[1] << endl;
  }
  return 0; 
}