#include <iostream>

using namespace std;

int main()
{
	int inputNumber;

	cout << "Enter a number: ";
	cin >> inputNumber;

	int sumOfNumbers = 0;

	sumOfNumbers += inputNumber % 10;
	inputNumber /= 10;

	sumOfNumbers += inputNumber % 10;
	inputNumber /= 10;

	sumOfNumbers += inputNumber % 10;

	cout << "The sum of the digits is: " << sumOfNumbers;
}


