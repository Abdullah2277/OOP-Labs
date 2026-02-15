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
		string getName(){
			return name;
		}		
};

class Student : private Person{
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
		double getCGPA(){
			return cgpa;
		}
};

int main(void){
	Student s1;
	s1.setName("Abdullah"); //public method of parent now NOT ACCESSIBLE due to PRIVATE Inheritance
	s1.setCGPA(3.4);
	cout << "Student name is: " << s1.getName() << " and CGPA is " << s1.getCGPA() << endl;
	return 0;	
}







