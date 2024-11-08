#include <iostream>
using namespace std;

double CircleArea(double PI, double Radius)
{
    return PI * Radius * Radius;
}

int main()
{
    const double PI = 3.141592653589793;  
    double radius = 0.0;
    double area = 0.0;

    cout << "Enter the Radius: ";
    cin >> radius;

    area = CircleArea(PI, radius);

    cout << "The area of the circle is: " << area << endl;

    return 0;
}
