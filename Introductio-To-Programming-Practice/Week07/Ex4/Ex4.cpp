#include <iostream>

using namespace std;

const int MAX_LEN = 100;

int getLenOfArr(char arr[MAX_LEN]) {
	int count = 0;
	while (arr[count] != '\0') {
		count++;
	}

	return count;
}

int main()
{
	char arr[MAX_LEN];

	cin.getline(arr, MAX_LEN);

	int len = getLenOfArr(arr);

	cout << len;

}

