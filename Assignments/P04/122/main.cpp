//////////////////////////////////////////////////////////////////////////////////
//
// Author:           Rachel Vetter
// Email:            racheevee99@gmail.com
// Label:            122
// Title:            Trees on the Level
// Course:           CMPS 4883
// Semester:         Fall 2020
//
// Description:
//       Displays level order of a binary tree using maps and 
// unordered maps.
//
/////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

void sort(unordered_map<string, string> &m);

int main() 
{
  int i=0, len, count;
  char c;
  string num = "", place = "", str = "";
  bool empty, complete;
  stack <char >s;
  unordered_map <string, string> m; 
  unordered_map <string, string>::iterator itr, itr2;

  while(cin >> c)
  {
    str += c; //load input into string
  }

  while (i < str.length())
  {
    empty = false;
    count = 0;
    complete = false;
    while(!empty)
    {
    if(str[i] == '(' || str[i] == ',')
      {
        s.push(str[i]);
        place = "";
      }
    else if(str[i] == ')')
    {
      if(s.top() == ',')
      {
        s.pop();
        s.pop();
        m.insert(make_pair(place, num));
        count++;
        num = "";
      }
      else 
      {  
        empty = true;
        s.pop();
      }
    }
    else if((str[i] == 'L' || str[i] == 'R') && !s.empty())
    {
      place += str[i];
    }
    else 
    {
       num += str[i];
    }
    i++;
    }

    if(count > m.size())
      complete = false;
    else 
      complete = true;
    count = 0;
    

      for(itr = m.begin(); itr != m.end() && complete; itr++)
      {
      place = "";
      len = itr->first.length();

      
        complete = false;
        //Check for parents
        for(int n = 0; n < len - 1; n++)
        {
          place += itr->first[n];
        }

        for(itr2 = m.begin(); itr2 != m.end() && !complete; itr2++)
        {
          if(itr2->first == place)
            complete = true;
        }
      }

    if(complete)
    {
      sort(m);
    }
    else 
      cout << "not complete\n";
      
    m.clear();
  }


  return 0;
}

void sort(unordered_map <string, string> &m)
{
  int len = 0; 
  unordered_map <string, string>::iterator itr;
  map <string, string> temp;
  map <string, string>::iterator t;
  string output = "";

  //finds length of longest string
  for (itr = m.begin(); itr != m.end(); itr++)
  {
    if(itr->first.length() > len)
    {
      len = itr->first.length();
    }
  }

  for(int i = 0; i <= len; i++)
  {
    //Puts in sorted map one length at a time
    for (itr = m.begin(); itr != m.end(); itr++)
    {
      if(itr->first.length() == i)
      {
        temp.insert(make_pair(itr->first, itr->second));
      }
    }
    
    //Prints map
    for (t = temp.begin(); t != temp.end(); t++)
    {
      output += t->second + " ";
    }
    temp.clear();
  }

  for(int i = 0; i < output.length()-1; i++)
  {
    cout << output[i];
  }
  cout << "\n";
}