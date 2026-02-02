#include <iostream>
#include <string>
using namespace std;

int main(){
    float temperature;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> temperature;

    float celsius = (temperature - 32) / 1.8;
    cout << "Temperature in Celsius is: " << celsius << endl;
    return 0;
}