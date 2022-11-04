#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2;

    cout << "Enter x1: ";
    cin >> x1;

    cout << "Enter y1: ";
    cin >> y1;

    cout << "Enter x2: ";
    cin >> x2;

    cout << "Enter y2: ";
    cin >> y2;

    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    cout << "The distance between (x1, y1) and (x2, y2) is: " << distance;

    return 0;
}


