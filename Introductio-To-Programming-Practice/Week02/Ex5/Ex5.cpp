#include <iostream>

using namespace std;

int main()
{
	double a = 4.0;
	double k = 6.0;
	double h = 5.0;

	double s = a * a;
	double p = 4.0 * a;
	double v = (s * h) / 3;
	double s1 = (p * k) / 2.0 + s;

	cout << "The volume of the pyramid is: " << v << endl;
	cout << "The surface of the pyramid is: " << s1 << endl;

	return 0;
}
