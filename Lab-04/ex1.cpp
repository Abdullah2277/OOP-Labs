#include <iostream>
#include <cstring>
using namespace std;

class Employee{
    private:
        const int EmployeeId;
        char* EmployeeName;

    public:
        Employee(int Id, const char* Name): EmployeeId(Id) {
            EmployeeName = new char[strlen(Name)+1];
            strcpy(EmployeeName, Name);
        }
        void setName(const char* name){
            delete[] EmployeeName;
            EmployeeName = new char[strlen(name)+1];
            strcpy(EmployeeName, name);
        }
        int getEmpId(){
            return EmployeeId;
        }
        char* getEmpName(){
            return EmployeeName;
        }

};


int main(){
    Employee Employee1(300, "Ali");
    Employee Employee2(301, "Asad");
    Employee Employee3(302, "Abdullah");
    cout << "Information of Employee 1: ID: " << Employee1.getEmpId() << " Name: " << Employee1.getEmpName() << endl;
    cout << "Name of Employee 2 before modification: " << Employee2.getEmpName() << endl;
    Employee2.setName("Hamza");
    cout << "Name of Employee 2 after modification: " << Employee2.getEmpName() << endl;
    return 0;
}