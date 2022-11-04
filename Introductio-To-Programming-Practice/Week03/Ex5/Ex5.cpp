#include <iostream>

using namespace std;

int main()
{
	double firstNumber, secondNumber;

	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	int positiveCount = 0;

	if (firstNumber > 0) {
		positiveCount++;
	}

	if (secondNumber > 0) {
		positiveCount++;
	}

	cout << "There are " << positiveCount << " positive numbers.";
}

