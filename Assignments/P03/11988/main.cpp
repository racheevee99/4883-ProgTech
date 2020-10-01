//////////////////////////////////////////////////////////////////////////////////
//
// Author:           Rachel Vetter
// Email:            racheevee99@gmail.com
// Label:            11988
// Title:            Broken Keyboard (a.k.a. Beiju Text)
// Course:           CMPS 4883
// Semester:         Fall 2020
//
// Description:
//       Displays correct sequence of a long line of text from a 
// "broken keyboard" using a list data structure.
//
/////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main() 
{
  string s;
  char c;
  list <char> text;
  list <char> ::iterator itr;

  while(cin >> s)
  {
    itr = text.begin();
    for(int i = 0; i < s.length(); i++)
    {
      c = s[i];
      switch(c)
      {
        case '[':
        {
          itr = text.begin();
          break;
        }
        case ']':
        {
          itr = text.end();
          break;
        }
        default:
        {
          text.insert(itr, c);
          break;
        }
      }
    }
    for(char t : text)
    {
      cout << t;
    }
    cout << "\n";
    text.clear();
  }
 return 0;
}