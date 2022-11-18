// Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

const int MAX_LEN = 100;

bool isEven(int number) {
	return number % 2 == 0;
}

int main()
{
	int arr[MAX_LEN];
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		arr[i] = input;
	}

	for (int i = 0; i < n; i+= 2)
	{
		if (isEven(i)) {
			cout << arr[i] << " ";
		}
	}
}

