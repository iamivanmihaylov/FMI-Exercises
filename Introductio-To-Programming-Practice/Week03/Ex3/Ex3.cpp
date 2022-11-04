// Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int low, high, x;

	cout << "Enter lower bound: ";
	cin >> low;

	cout << "Enter upper bound: ";
	cin >> high;

	cout << "Enter the number x: ";
	cin >> x;

	if (x > low && x < high) {
		cout << "The number is in the range (" << low << ", " << high << ")";
	}
	else
	{
		cout << "The number is outside the range (" << low << ", " << high << ")";
	}
}


