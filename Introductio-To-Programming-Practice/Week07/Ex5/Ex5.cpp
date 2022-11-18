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

bool isPalindrom(char arr[]) {

	int len = getLenOfArr(arr);

	for (int i = 0; i < len / 2; i++)
	{
		if (arr[i] != arr[len - i - 1]) {
			return false;
		}
	}

	return true;
}

int main()
{
	char arr[MAX_LEN];

	cin.getline(arr, MAX_LEN);

	bool isPalindrome = isPalindrom(arr);

	cout << boolalpha << isPalindrome;

}

