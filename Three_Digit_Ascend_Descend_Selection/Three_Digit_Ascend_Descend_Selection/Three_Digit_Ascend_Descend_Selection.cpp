/*

Nikhil Goyle - 10/5/17 2

Program Problem 3 : *

Determine whether a number is ascending or descending

*/

// Libraries

#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

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

	int x;
	int A;
	int B;
	int C;

	for (int i = 30; i < 30; i++) {
		cout << "Give me a 3-digit number: " << endl;
			cin >> x;

			C = x % 10;
			B = (x / 10) % 10;
			A = (x / 100);

			if (A > B && B > C) {
				cout << x << " is descending" << endl;
			}

			else if (C > B && B > A) {
				cout << x << " is ascending" << endl;
			}

			else {

				cout << x << " is neither ascending or descending" << endl;
			}

	}
	pause(); // pauses to see the displayed text
}
