#include <iostream>

using namespace std;

void sort(int arr[], int len) {
	bool isSorted = false;

	while (!isSorted) {
		for (int i = 0; i < len - 1; i++)
		{
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				isSorted = false;
				break;
			}

			isSorted = true;
		}
	}
}

int main()
{
	int arr[10] = { 5, 1, 2, 3, 4, 6, 10, -3, 4, 8 };

	sort(arr, 10);

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
}


