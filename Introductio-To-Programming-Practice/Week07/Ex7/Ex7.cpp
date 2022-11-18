#include <iostream>

using namespace std;

const int MAX_LEN = 100;

void reverse(int arr[], int arrLen) {
	for (int i = 0; i < arrLen / 2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[arrLen - i - 1];
		arr[arrLen - i - 1] = temp;
	}
}

int main()
{
	int arrLen;
	cin >> arrLen;

	int arr[MAX_LEN];

	for (int i = 0; i < arrLen; i++)
	{
		int input;
		cin >> input;
		arr[i] = input;
	}

	reverse(arr, arrLen);

	for (int i = 0; i < arrLen; i++)
	{
		cout << arr[i] << " ";
	}


}

