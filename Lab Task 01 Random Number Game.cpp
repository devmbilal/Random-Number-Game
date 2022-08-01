// Random Number Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int secret, guess;
	char answer;
	
	do
	{
		srand(time(0));
		secret = 0 + rand() % (0 - 10 + 1);
		int i;
		for (i=1;i<=3;i++)
		{
			cout << "Enter the Guess between o and 10 : ";
			cin >> guess;
			while (guess>10 || guess<0)
			{
				cout << "Enter the Guess between o and 10 : ";
				cin >> guess;
			}
			if (guess < secret)
			{
				cout << "Sorry ,too small" << endl;
			}
			if (guess > secret)
			{
				cout << "Sorry ,too Large" << endl;
			}
			if (guess == secret)
			{
				cout << "Congratulations!Your Guess is Right!" << endl;
				break;
			}
			
		}
	
		cout << "Do you want to play Again" << endl;
		cout << "If yes enter ' y' otherwise 'n' : ";
		cin >> answer;
		

	} while (answer == 'Y' || answer == 'y');
	
}
