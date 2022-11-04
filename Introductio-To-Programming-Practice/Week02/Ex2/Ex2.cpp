// Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int firstNumber, secondNumber;

	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	cout << "The sum of the numbers is: " << firstNumber + secondNumber << endl;
	cout << "The diference of the numbers is: " << firstNumber - secondNumber << endl;
	cout << "The product of the numbers is: " << firstNumber * secondNumber << endl;

	return 0;
}

