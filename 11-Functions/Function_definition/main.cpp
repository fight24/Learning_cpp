#include <iostream>
using namespace std;

#define PI 3.14159; // const double PI 

double calc_area_circle(double r)
{
    return r*r*PI;
}

double calc_volume_cylinder(double r, double h)
{
    return calc_area_circle(r)*h;
}

void area_circle()
{
    double radius {};
    cout << "\n Enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of circle with radius  " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder()
{
    double radius {}, height {};
    cout << "\n Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "\n Enter the height of the cylinder: ";
    cin >> height;
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}
int main()
{
    cout << "----------------------------------------------";
    area_circle(); // tinh dien tich hinh tron 
    volume_cylinder(); // tinh the tich hinh tru
    cout << "----------------------------------------------";
    return 0;
}