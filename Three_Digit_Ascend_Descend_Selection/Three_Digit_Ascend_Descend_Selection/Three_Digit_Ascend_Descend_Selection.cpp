/*

Sam Bryant & Dorothy Bui - 10/5/17 - 2

Assignment Name : Three digit Ascend Descend Selection

Take in 3 digits from the user, seperate those digits and say whether they ascend descend or neither.

*/

// Libraries

#include <iostream>// gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {

	//define variables:
	int userNumber;
	int digit1;
	int digit2;
	int digit3;

	//ask for variable
	
		cout << "Give me a three digit number!" << endl;

		// take in variable

		cin >> userNumber;

		// seperate number to 3 digits;

		digit1 = userNumber / 100; //int division
		digit2 = (userNumber / 10) % 10;
		digit3 = userNumber % 10;

		// removed section because it was unnecessary 
		//calculate ascending descending or neither:

		if (digit1 > digit2 && digit2 > digit3) {
			cout << "Your number is descending!" << endl;
		}
		else if (digit1 < digit2 && digit2 < digit3) {
			cout << "Your number is ascending!" << endl;
		}
		else {
			cout << "Your number is neither ascending nor descending." << endl;
		}

		for (int i = 1; i < 30; i++) {

			cout << "Give me a three digit number!" << endl;

			// take in variable

			cin >> userNumber;

			digit1 = userNumber / 100; //int division
			digit2 = (userNumber / 10) % 10;
			digit3 = userNumber % 10;

			// removed section because it was unnecessary 
			//calculate ascending descending or neither:
			if (digit1 > digit2 && digit2 > digit3) {
				cout << "Your number is descending!" << endl;
			}
			else if (digit1 < digit2 && digit2 < digit3) {
				cout << "Your number is ascending!" << endl;
			}
			else {
				cout << "Your number is neither ascending nor descending." << endl;
			}
		}
	
	pause(); // pauses to see the displayed text
}
