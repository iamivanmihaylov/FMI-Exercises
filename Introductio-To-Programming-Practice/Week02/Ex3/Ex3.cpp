#include <iostream>

using namespace std;

int main()
{
	int inputSeconds;

	cout << "Enter the seconds: ";
	cin >> inputSeconds;

	int days = inputSeconds / 86400;
	int hours = (inputSeconds % 86400) / 3600;
	int minutes = (inputSeconds % 86400 % 3600) / 60;
	int seconds = inputSeconds % 86400 % 3600 % 60;

	cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds.";

	return 0;
}
