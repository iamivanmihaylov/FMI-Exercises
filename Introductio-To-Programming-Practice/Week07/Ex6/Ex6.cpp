#include <iostream>

using namespace std;

void MutiplyArrayInt(int arr[], int arrLength, int number) {
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = arr[i] * number;
	}
}

void MutiplyArrayDouble(double arr[], int arrLength, int number) {
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = arr[i] * number;
	}
}

int main()
{
	double firstArr[5] = { 1.2, 2.3, 3.4, 4.5, 5.6 };
	int secondArr[5] = { 1, 2, 3, 4, 5 };

	MutiplyArrayDouble(firstArr, 5, 3);
	MutiplyArrayInt(secondArr, 5, 3);

	for (int i = 0; i < 5; i++)
	{
		cout << firstArr[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << secondArr[i] << " ";
	}
}
