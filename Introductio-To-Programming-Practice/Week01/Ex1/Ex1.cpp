#include <iostream>

using namespace std;

int main()
{
	int firstNumber, secondeNumber, thirdNumber;

	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondeNumber;

	cout << "Enter the third number: ";
	cin >> thirdNumber;

	int result = firstNumber + secondeNumber + thirdNumber;

	cout << "The sum of the numbers is: " << result;

	return 0;

}
