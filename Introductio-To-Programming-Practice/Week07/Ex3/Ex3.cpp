#include <iostream>

using namespace std;

const int MAX_LEN = 100;

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

	int counter = 0;

	for (int i = 1; i < n - 1; i++)
	{
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
			counter++;
		}
	}

	cout << counter;
}

