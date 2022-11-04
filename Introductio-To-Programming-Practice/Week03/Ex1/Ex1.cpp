// Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int firstNumber, secondNumber;

	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	int result = max(firstNumber, secondNumber);

	cout << "The number " << result << " is the bigger one";
}


