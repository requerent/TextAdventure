#include "Dialog.h"
#include <iostream>
using namespace std;

int TwoChoices(char *prompt, char *choice1, char *choice2)
{
	cout << prompt << endl;
	cout << "\t1) " << choice1 << endl;
	cout << "\t2) " << choice2 << endl;

	while (true)
	{
		cout << "What is your choice? ==> ";

		char input[1];
		cin.getline(input, 1);// '1', '2'

		switch (input[0])
		{
		case '1': case '2':
				return input[0] - '0'; // converts it from the
									   // character '1' or '2' 
									   // to the integer 1 or 2

		default: cout << "Your choice is invalid." << endl;
		}
	}
}