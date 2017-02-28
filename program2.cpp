#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


	/*
	int  randomInt;
	srand((unsigned)time(0));
	randomInt = (rand() % 3) + 1;
	*/


int main()
{
	int userChoice;
	
	cout << "Pick from the following menu: \n";
	cout << "1.  Let's play MASH!\n";
	cout << "2.  End program.\n";
	cin >> userChoice;
	
	switch(userChoice)
	{
		case 1:
				while(userChoice != 2)
				{
					cout << "You chose to play MASH: \n";
					
				}
		
		case 2:
				cout << "You chose to end the program.\n";
				cout << "Bye!";
	}
	return 0;
}
