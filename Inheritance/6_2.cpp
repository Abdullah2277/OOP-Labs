#include <iostream>
#include <string>
using namespace std;

class Person{
	private:
		string name;
	public:
		Person() : name("person"){
		}
		Person(string x) : name(x){
		}
		void setName(string x){
			name = x;
		}
		void displayDetails(){
			cout << "Name is: " << name << endl;
		}		
};

class Student : public Person{
	private:
		double cgpa;
	public:
		Student() : Person(),cgpa(1.0){
		}
		Student(string x, double y) : Person(x), cgpa(y){
		}
		void setCGPA(double x){
			cgpa = x;
		}
		void displayDetails(){
			Person::displayDetails();
			cout << "CGPA is: " << cgpa << endl;
		}
};

class Faculty : public Person{
	private:
		string dept;
	public:
		Faculty() : Person(), dept("department"){
		}
		Faculty(string x, string y) : Person(x), dept(y){
		}
		void setDepartment(string x){
			dept = x;
		}
		void displayDetails(){
			Person::displayDetails();
			cout << "Department is: " << dept << endl;
		}
};

int main(void){
	//create five student objects. assign them attribute values. display each one details	
	return 0;	
}







