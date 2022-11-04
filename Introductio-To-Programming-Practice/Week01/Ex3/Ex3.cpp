#include <iostream>

using namespace std;

int main()
{
	int firstNumber, secondeNumber, thirdNumber;

	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondeNumber;

	firstNumber = firstNumber + secondeNumber;
	secondeNumber = firstNumber - secondeNumber;
	firstNumber = firstNumber - secondeNumber;

	cout << "The value of the first number is now: " << firstNumber << ", and the value of the second number is: " << secondeNumber;

	return 0;
}


