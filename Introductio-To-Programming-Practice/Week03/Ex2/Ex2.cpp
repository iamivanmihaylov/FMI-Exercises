#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int inputMonth;

	cout << "Enter the first number: ";
	cin >> inputMonth;

	if (inputMonth >= 1 && inputMonth <= 12) {
		cout << "The month is valid!";
	}
	else
	{
		cout << "The month is invalid!";
	}

}


