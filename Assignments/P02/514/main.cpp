//////////////////////////////////////////////////////////////////////////////////
//
// Author:           Rachel Vetter
// Email:            racheevee99@gmail.com
// Label:            514
// Title:            Rails
// Course:           CMPS 4883
// Semester:         Fall 2020
//
// Description:
//       Determines if a certain configuration can be achieved given
//  the initial sequential configuration using a stack.
//
/////////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include <bits/stdc++.h> 

using namespace std;

int main() 
{
  int numCars, car;
  int a, b;
  stack <int> train; //Stack of intitial configuration
  vector <int> A, B; //holds end configuration
  bool done;

  cin >> numCars;
  do//loops through file
  { 
    //Set up initial configuration A
    for(int i = 1; i <= numCars; i++)
    {
      A.push_back(i);
    }

    //Set up final configuration B
    cin >> car;
    do 
    {
      B.push_back(car);
      cin >> car;
    }while(car != 0);

    for(int i = 0; i < (B.size() + 1)/numCars; i++)
    {
      a = 0;
      b = 0;
      done = false;

      //Tests configuration
      while(!done)
      {
        if(a < numCars )
        {
          train.push(A[a]);
          a++;
        }
        while(train.top() != B[b+(numCars*i)] && a < numCars)
        {
          train.push(A[a]);
          a++;
        }
        while(!train.empty() && train.top() == B[b+(numCars*i)])
        {
          train.pop();
          b++;
        }
        if(a == numCars)
            done = true;
      }

      //Displays results
      if(train.empty())
        cout << "Yes\n";
      else 
        cout << "No\n";

      //Clears case
      while(!train.empty())
        train.pop();
    }
    cout << "\n";

    //Resets configurations
    A.clear();
    B.clear();

    cin >> numCars;
  }while(numCars != 0);

 return 0;
}