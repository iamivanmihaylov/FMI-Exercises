// Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	char character;

	cout << "Enter a character: ";
	cin >> character;

	int characterAsInt = (int)character;

	if ((65 <= characterAsInt && characterAsInt <= 90) ||
		(97 <= characterAsInt && characterAsInt <= 122)) {
		cout << "This is a letter!";
	}
	else {
		cout << "This is not a letter...";
	}
}


