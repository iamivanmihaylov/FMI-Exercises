#include <iostream>

using namespace std;

int main()
{
	int inputNumber;

	cout << "Enter a 3 digit number: ";
	cin >> inputNumber;

	int firstDigit = inputNumber % 10;
	inputNumber /= 10;

	int secondDigit = inputNumber % 10;
	inputNumber /= 10;

	int thirDigit = inputNumber % 10;
	inputNumber /= 10;

	int resultNumber = 0;

	resultNumber += firstDigit;
	resultNumber *= 10;

	resultNumber += secondDigit;
	resultNumber *= 10;

	resultNumber += thirDigit;

	cout << "The result number is: " << resultNumber;

}
