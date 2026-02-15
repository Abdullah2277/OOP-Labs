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
		double getCGPA(){
			return cgpa;
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
		string getDepartment(){
			return dept;
		}
};

int main(void){
	//create five student objects. assign them attribute values. display name of student with highest cgpa
	//create five faculty objects. assign them attribute values. display list of faculty in "CSIT" department
	return 0;	
}







