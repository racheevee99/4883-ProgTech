//////////////////////////////////////////////////////////////////////////////////
//
// Author:           Rachel Vetter
// Email:            racheevee99@gmail.com
// Label:            673
// Title:            Parentheses Balance
// Course:           CMPS 4883
// Semester:         Fall 2020
//
// Description:
//       Checks for balanced parantheses and brackets in a string 
//  using switch statements and a stack.
//
/////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main() {
  int n;
  stack <char> st;
  string set;
  
  cin >> n;
  getline(cin,set);
  for(int i=0; i < n; i++)
  {
    bool b = false;
    getline(cin, set);
    if (set == "")
    {
      cout << "Yes\n";
      b = true;
    }
    for(int j=0; j < set.length() && b == false; j++)
    {
      switch(set[j])
      {
        case '(':
          st.push(set[j]);
          break;
        case '[':
          st.push(set[j]);
          break;
        case ')':
        {
          if(!st.empty())
          {
            if (st.top()=='(')
              st.pop();
            else
            {
              cout << "No\n";
              b = true;
            }
          }
          else
          {
            cout << "No\n";
            b = true;
          }
          break;
        }
        case ']':
        {
          if(!st.empty())
          {
            if (st.top()=='[')
              st.pop();
            else
            {
              cout << "No\n";
              b = true;
            }
          }
          else
          {
            cout << "No\n";
            b = true;
          }
          break;
        case ' ':
          break;
        }
      }
    }
    if(b == false)
    {
      if(st.empty())
        cout << "Yes\n";
      else
      {
        cout << "No\n";
      }
    }
    //empty stack
    while(!st.empty())
    {
      st.pop();
    }
  }
  return 0;
}