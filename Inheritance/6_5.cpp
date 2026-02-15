#include <iostream>
#include <string>
using namespace std;

class Vehicle {
	protected:
	    string brand;	
	public:	  
	    Vehicle(string b) : brand(b) {
	        cout << "Vehicle Constructor called (Brand: " << brand << ")" << endl;
	    }	
	    void startEngine() {
	        cout << brand << " engine started." << endl;
	    }
};

class Car : public Vehicle {
	protected:
	    int numberOfDoors;	
	public:	   
	    Car(string b, int doors) : Vehicle(b), numberOfDoors(doors) {
	        cout << "Car Constructor called (" << numberOfDoors << " doors)" << endl;
	    }	
	    void drive() {
	        cout << brand << " is driving on " << numberOfDoors << " doors." << endl;
	    }
};

class ElectricCar : public Car {
	private:
	    int batteryCapacity;	
	public:	   
	    ElectricCar(string b, int doors, int battery) 
	        : Car(b, doors), batteryCapacity(battery) {
	        cout << "ElectricCar Constructor called (" << batteryCapacity << " kWh)" << endl;
	    }	
	    void showStatus() {
	        cout << "\n--- Vehicle Status ---" << endl;
	        cout << "Brand: " << brand << endl;
	        cout << "Doors: " << numberOfDoors << endl;
	        cout << "Battery: " << batteryCapacity << " kWh" << endl;
	    }
};

int main() {

    ElectricCar myTesla("Tesla", 4, 100);

    myTesla.startEngine(); // Inherited from Vehicle
    myTesla.drive();       // Inherited from Car
    myTesla.showStatus();  // Defined in ElectricCar

    return 0;
}
