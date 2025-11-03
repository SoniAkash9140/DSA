// C++ program to illustrate the object like macros
#include <iostream>
using namespace std;

// Define a constant for the value of PI
#define PI 3.14159

int main()
{
    double radius = 4.0;

    // Calculate the area of the circle
    double area = PI * radius * radius;

    cout << "Area of circle with radius " << radius
         << " is " << area;

    return 0;
}