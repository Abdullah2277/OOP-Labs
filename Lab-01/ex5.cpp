#include <iostream>
#include <cmath>
using namespace std;

const double pi = 22.0 / 7.0;
double calculateSurfaceArea(double radius){
    return 4.0 * pi * pow(radius, 2.0);
}

double calculateVolume(double radius){
    return (4.0 / 3.0) * pi * pow(radius, 3.0);
}

int main(){
    double radius;
    cout << "Enter Radius of the Sphere: ";
    cin >> radius;
    double surfaceArea = calculateSurfaceArea(radius);
    double volume = calculateVolume(radius);
    cout << "The Surface Area of the Sphere is: " << surfaceArea << endl;
    cout << "The Volume of the Spehere is: " << volume << endl;

    return 0;
}