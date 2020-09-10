//////////////////////////////////////////////////////////////////////////////////
//
// Author:           Rachel Vetter
// Email:            racheevee99@gmail.com
// Label:            727
// Title:            Equation
// Course:           CMPS 4883
// Semester:         Fall 2020
//
// Description:
//       Reads in an equation line by line and uses a stack and switch 
//  statements to display the postfix expression of this equation.
//
/////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main() {
  int n;
  string s = "";
  char c;
  stack <char> st;
  bool blank;
  int si = 2;

  cin >> n;
  while(cin >> noskipws >> c)
  {
    s+=c;
  }

  for(int i = 0; i < n; i++)
  {
    while(s[si] != '\n' && si < s.length())
    { 
      c = s[si];
      switch(c)
      {
        case '(':
          st.push(c);
        break;
        case ')':
        {
          while(st.top() != '(')
          {
            cout << st.top();
            st.pop();
          }
          st.pop();
        break;
        }
        case '+':
        {
          while(!st.empty() && st.top() != '(')
          {
            cout << st.top();
            st.pop();
          }
          st.push(c);
        break;
        }
        case '-':
        {
          while(!st.empty() && st.top() != '(')
          {
            cout << st.top();
            st.pop();
          }
          st.push(c);
        break;
        }
        case '*':
        {
          if(!st.empty() && (st.top() == '*'|| st.top() == '/'))
          {
            cout << st.top();
            st.pop();
          }
          st.push(c);
        break;
        }
        case '/':
        {
          if(!st.empty() && (st.top() == '*'|| st.top() == '/'))
          {
            cout << st.top();
            st.pop();
          }
          st.push(c);
        break;
        }
        default:
          cout << c;
        break;
      }
      si+=2;
    }
    while(!st.empty())
    {
      cout << st.top();
      st.pop();
    }
    if(i < n-1)
      cout << "\n";
    cout << "\n";
    si++;
  }
  return 0;
}