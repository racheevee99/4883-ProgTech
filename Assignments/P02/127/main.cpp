//////////////////////////////////////////////////////////////////////////////////
//
// Author:           Rachel Vetter
// Email:            racheevee99@gmail.com
// Label:            127
// Title:            "Accordian" Patience
// Course:           CMPS 4883
// Semester:         Fall 2020
//
// Description:
//       Simulates the card game patience.
//
/////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Pile
{
protected:
	class Cards
	{
	private:
		char num;
		char suit;
	public:
		Cards()
		{
			num = '0';
			suit = 'N';
		}
		char getNum()
		{
			return num;
		}
		char getSuit()
		{
			return suit;
		}
		void setNum(char n)
		{
			num = n;
		}
		void setSuit(char s)
		{
			suit = s;
		}
		bool compareCard(Cards c, Cards d)
		{
			if (c.num == d.num)
				return true;
			else if (c.suit == d.suit)
				return true;
			else
				return false;
		}
	};
	struct Node
	{
		Node *next;
		Cards card;
		Node(Cards c, Node *n = NULL)
		{
			card = c;
			next = n;
		}
	};

private:
	Node *head;
	Cards card;

public:
	//Default constructor
	Pile();
	//Load array
	Pile loadCard(Pile a, char n, char s);
	//Gameplay functions

	void push(Cards c);
	Pile::Cards pop();
	bool compare3left(Pile a, Pile b);
	bool compare1left(Pile a, Pile b);
	void swap3left(Pile a, Pile b);
	void swap1left(Pile a, Pile b);
	void closeGap(Pile a[52]);
	int size(Pile p);
	bool isEmpty();
	//Destructor
	~Pile();
};

//Default constructor
Pile::Pile()
{
	head = NULL;
	Cards();
}

Pile Pile::loadCard(Pile a, char n, char s)
{
	Cards c;
	c.setNum(n);
	c.setSuit(s);
	a.card = c;
	cout << a.card.getNum() << a.card.getSuit() << endl;
	return a;
}

void Pile::push(Cards c)
{
	head = new Pile::Node(c, head);
}

Pile::Cards Pile::pop()
{
	Node *tmp = head;
	Cards x;
	if (!Pile::isEmpty())
	{
		x = tmp->card;
		head = tmp->next;
		delete tmp;
		tmp = NULL;
	}
	return x;
}

bool Pile::compare3left(Pile a, Pile b)
{
	Cards x = a.card;
	Cards y = b.card;
	return x.compareCard(x, y);
}

bool Pile::compare1left(Pile a, Pile b)
{
	Cards x = a.card;
	Cards y = b.card;
	return x.compareCard(x, y);
}

void Pile::swap3left(Pile a, Pile b)
{
	Cards c;
	bool x = false;
	x = a.compare3left(a, b);
	while (x == true)
	{
		c = b.pop();
		a.push(c);
		x = a.compare3left(a, b);
	}
}

void Pile::swap1left(Pile a, Pile b)
{
	Cards c;
	bool x = false;
	x = a.compare1left(a, b);
	while (x == true)
	{
		c = b.pop();
		a.push(c);
		x = a.compare1left(a, b);
	}
}

void Pile::closeGap(Pile a[52])
{
	for (int i = 1; i < 52; i++)
	{
		if (&a[i + 1] == NULL)
		{
			a[i + 1] = a[i + 2];
		}
	}
}

int Pile::size(Pile p)
{
	Node *tmp = head;
	int s = 0;
	while (tmp != NULL)
	{
		s++;
		tmp = tmp->next;
	}
	return s;
}

bool Pile::isEmpty()
{
	if (head == NULL)
		return true;
	else
		return false;
}

//Destructor
Pile::~Pile()
{
	if (!Pile::isEmpty())
	{//Destruct pointers
		Node *tmp = head;
		while ((tmp != NULL) && (tmp->next != NULL))
		{
			head = head->next;
			delete tmp;
			tmp = head;
		}
	}
}

void load(Pile a[52]);
int play(Pile a[52]);
void displayResults(Pile a[52], int s[52]);

int main()
{
	int pileSizes[53];

	//Allocate stack
	Pile *pileArray = new Pile[52];

	//Read in cards to array
	//load(pileArray, infile);

	//Play
	pileSizes[52] = play(pileArray);

	//Display results
	displayResults(pileArray, pileSizes);

	return 0;
}

void load(Pile a[52])
{
	char c, d;
	int i = 0;


	while ((cin >> c >> d) && (i < 52))
	{
		if ((c != '#') && (d != '#'))
		{

			a[i].loadCard(a[i], c, d);
			i++;

			cout << c << d << "\n";

		}
	}
}

int play(Pile a[52])
{
	char c, d;
	int i = 0;


	while ((cin >> c >> d) && (i < 52))
	{
		if ((c != '#') && (d != '#'))
		{

			a[i] = a[i].loadCard(a[i], c, d);
			i++;

			cout << c << d << "\n\n";

		}
	}

	int x[53];
	int y = 0;
	do
	{
		//Compare and swap 3 left
		for (int i = 1; i < 52; i++)
		{
			if (i>2)
				a[i].swap3left(a[i], a[i - 3]);
			a[i].swap1left(a[i], a[i - 1]);
			y++;
		}
	} while (a[y].compare1left(a[y], a[y - 1]) || a[y].compare3left(a[y], a[y - 3]));
	//Find size of piles
	for (int i = 0; i < 52; i++)
	{
		x[i] = a[i].size(a[i]);
	}
	return x[52];
}

void displayResults(Pile a[52], int s[52])
{
	int piles = 0;
	for (int i = 0; i < 52; i++)
	{
		if (a[i].size(a[i]) != 0)
			piles++;
		else
			piles = piles;
	}

	cout << piles << " piles remaining: ";

	for (int i = 0; i < piles; i++)
	{
		cout << a[i].size(a[i]) << " ";
	}
	cout << "\n";
}






while(left1 && left3)
    {
      done = false;
      left1 = left3 = true;
      cout << "in play loop\n";
      
      for (int i = 1; i < d.size(); i++)
      {
        cout << "in for loop\n";
        //Check (and swap) 3 to the left
        while(i > 2)
        {
          cout << i << d[i].top() <<  " - in left3 loop\n";
          if(d[i].top()[0] == d[i - 3].top()[0])
          {
            cout << "if1 left3\n";
            d[i - 3].push(d[i].top());
            d[i].pop();
            left3 = true;
          }
          else if(d[i].top()[1] == d[i - 3].top()[1])
          {
            cout << "if2 left3\n";
            d[i - 3].push(d[i].top());
            d[i].pop();
            left3 = true;
          }
          else 
          {
            left3 = false;
          }

          //Decrement i
          if(left3 && i > 3)
          {
            i-=3;
          }

          //Erase gap between piles
          if(d[i].empty())
          {
            cout << i << " - erase left3\n";
            d.erase(d.begin()+i);
          }
        }

        //Check (and swap) 1 to the left
        while(i > 0)
        {
          cout << i << d[i].top() <<  " - in left1 loop\n";
          if(d[i].top()[0] == d[i - 1].top()[0])
          {
            cout << "if1 left1\n";
            d[i - 1].push(d[i].top());
            d[i].pop();
            left1 = true;
          }
          else if(d[i].top()[1] == d[i - 1].top()[1])
          {
            cout << "if2 left1\n";
            d[i - 1].push(d[i].top());
            d[i].pop();
            left1 = true;
          }
          else 
          {
            left1 = false;
          }

          //Decrement i
          if(left1 && i > 1)
          {
            i--;
          }

          //Erase gap between piles
          if(d[i].empty())
          {
            cout << i << " - erase left1\n";
            d.erase(d.begin()+i);
          }
        }
      }
    }