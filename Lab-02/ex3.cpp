#include <iostream>
#include <cstring>  
#include <string>    
using namespace std;

class Employee {
private:
    char* firstName;   
    string lastName;
    int monthlySalary;

public:
    Employee() {
        firstName = nullptr;
        lastName = "";
        monthlySalary = 0;
    }

    void setEmployee(const char* fName, string lName, int salary) {
        firstName = new char[strlen(fName) + 1];
        strcpy(firstName, fName);

        lastName = lName;

        if (salary > 0)
            monthlySalary = salary;
        else
            monthlySalary = 0;
    }

    char* getFirstName() {
        return firstName;
    }

    string getLastName() {
        return lastName;
    }

    int getMonthlySalary() {
        return monthlySalary;
    }

    int getYearlySalary() {
        return monthlySalary * 12;
    }

    void giveRaise(double percent) {
        monthlySalary = monthlySalary + (monthlySalary * percent / 100);
    }

    ~Employee() {
        delete[] firstName;
    }
};

int main() {
    Employee emp1, emp2;

    emp1.setEmployee("Syed Muhammad", "Abdullah", 150000);
    emp2.setEmployee("Sara", "Ali", 120000);

    cout << emp1.getFirstName() << " " << emp1.getLastName() << " yearly salary: " << emp1.getYearlySalary() << endl;

    cout << emp2.getFirstName() << " " << emp2.getLastName() << " yearly salary: " << emp2.getYearlySalary();

    emp1.giveRaise(10);
    emp2.giveRaise(10);

    cout << "\nAfter 10% raise:\n";
    cout << emp1.getFirstName() << " " << emp1.getLastName() << " yearly salary: " << emp1.getYearlySalary() << endl;

    cout << emp2.getFirstName() << " " << emp2.getLastName() << " yearly salary: " << emp2.getYearlySalary() << endl;

    return 0;
}
