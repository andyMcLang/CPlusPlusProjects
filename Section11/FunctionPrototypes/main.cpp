// Section 11
// Function Prototypes
// Area of Circle and Volyme of a Cylinder
// 104. Function Prototypes
#include <iostream>

using namespace std;

double calc_area_circle(double);
double calc_volume_cylinder(double, double);
void area_circle();
void volume_cylinder();

const double pi{ 3.14159 };

int main()
{
    area_circle();
    volume_cylinder();

    return 0;
}

double calc_area_circle(double radius) { return pi * radius * radius; }

double calc_volume_cylinder(double radius, double height)
{
    // return pi * radius * radius * height;
    return calc_area_circle(radius) * height;
}

void area_circle()
{
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;

    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder()
{
    double radius{};
    double height{};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is "
         << calc_volume_cylinder(radius, height) << endl;
}
