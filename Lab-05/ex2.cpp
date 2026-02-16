// WITH POLYMORPHISM IMPLEMENTED
// class Teacher {
// protected:
//     string name, institute;
//     int age;
// public:
//     Teacher(): name(""), age(18), institute("") {}

//     string getName(){return name;}
//     string getInstitute(){return institute;}
//     int getAge(){return age;}

//     void setName(string Name){name = Name;}
//     void setInstitute(string Institute){institute = Institute;}
//     void setAge(int Age){age = Age;}

//     virtual void displayInfo() const { // virtual function
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Institute: " << institute << endl;
//     }

//     virtual ~Teacher() {} // virtual destructor for safety
// };
// class HumanitiesTeacher: public Teacher {
// private:
//     const string department= "Humanities";
//     string courseName, designation;
// public:
//     HumanitiesTeacher(): Teacher(), courseName(""), designation("") {}

//     void setCourseName(string CourseName){courseName = CourseName;}
//     void setDesignation(string Designation){designation = Designation;}

//     void displayInfo() const override {
//         Teacher::displayInfo();
//         cout << "Department: " << department << endl;
//         cout << "Course Name: " << courseName << endl;
//         cout << "Designation: " << designation << endl;
//     }
// };
// int main() {
//     vector<Teacher*> teachers;

//     HumanitiesTeacher* ht = new HumanitiesTeacher();
//     ScienceTeacher* st = new ScienceTeacher();
//     MathsTeacher* mt = new MathsTeacher();

//     string name, institute, courseName, designation;
//     int age;

//     // Humanities Teacher
//     cout << "Enter Humanities Teacher details:\n";
//     cout << "Name: "; getline(cin, name);
//     cout << "Age: "; cin >> age; cin.ignore();
//     cout << "Institute: "; getline(cin, institute);
//     cout << "Course Name: "; getline(cin, courseName);
//     cout << "Designation: "; getline(cin, designation);

//     ht->setName(name);
//     ht->setAge(age);
//     ht->setInstitute(institute);
//     ht->setCourseName(courseName);
//     ht->setDesignation(designation);
//     teachers.push_back(ht);

//     // Science Teacher
//     cout << "\nEnter Science Teacher details:\n";
//     cout << "Name: "; getline(cin, name);
//     cout << "Age: "; cin >> age; cin.ignore();
//     cout << "Institute: "; getline(cin, institute);
//     cout << "Course Name: "; getline(cin, courseName);
//     cout << "Designation: "; getline(cin, designation);

//     st->setName(name);
//     st->setAge(age);
//     st->setInstitute(institute);
//     st->setCourseName(courseName);
//     st->setDesignation(designation);
//     teachers.push_back(st);

//     // Maths Teacher
//     cout << "\nEnter Maths Teacher details:\n";
//     cout << "Name: "; getline(cin, name);
//     cout << "Age: "; cin >> age; cin.ignore();
//     cout << "Institute: "; getline(cin, institute);
//     cout << "Course Name: "; getline(cin, courseName);
//     cout << "Designation: "; getline(cin, designation);

//     mt->setName(name);
//     mt->setAge(age);
//     mt->setInstitute(institute);
//     mt->setCourseName(courseName);
//     mt->setDesignation(designation);
//     teachers.push_back(mt);

//     // Display all teachers using polymorphism
//     cout << "\n--- Teacher Information ---\n";
//     for (Teacher* t : teachers) {
//         t->displayInfo();
//         cout << "---------------------------\n";
//     }

//     // Clean up
//     for (Teacher* t : teachers) {
//         delete t;
//     }

//     return 0;
// }




#include <iostream>
#include <string>
using namespace std;

class Teacher{
    protected:
        string name, institute;
        int age;
    public:
        Teacher(): name(""), age(18), institute("") {}

        string getName(){return name;}
        string getInstitute(){return institute;}
        int getAge(){return age;}

        void setName(string Name){name = Name;}
        void setInstitute(string Institute){institute = Institute;}
        void setAge(int Age){age = Age;};

        void displayBaseInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Institute: " << institute << endl;}
};

class HumanitiesTeacher: public Teacher {
    private:
        const string department= "Humanities";
        string courseName, designation;
    public:
        HumanitiesTeacher(): Teacher(), courseName(""), designation("") {}

        string getCourseName(){return courseName;}
        string getDesignation(){return designation;}
        string getDepartment(){return department;}

        void setCourseName(string CourseName){courseName = CourseName;}
        void setDesignation(string Designation){designation = Designation;}

        void displayInfo(){
            Teacher::displayBaseInfo();
            cout << "Department: " << department << endl;
            cout << "Course Name: " << courseName << endl;
            cout << "Designation: " << designation << endl;
        }
};

class ScienceTeacher: public Teacher {
    private:
        const string department= "Science";
        string courseName, designation;
    public:
        ScienceTeacher(): Teacher(), courseName(""), designation("") {}

        string getCourseName(){return courseName;}
        string getDesignation(){return designation;}
        string getDepartment(){return department;}

        void setCourseName(string CourseName){courseName = CourseName;}
        void setDesignation(string Designation){designation = Designation;}

        void displayInfo(){
            Teacher::displayBaseInfo();
            cout << "Department: " << department << endl;
            cout << "Course Name: " << courseName << endl;
            cout << "Designation: " << designation << endl;
        }
};

class MathsTeacher: public Teacher {
    private:
        const string department= "Maths";
        string courseName, designation;
    public:
        MathsTeacher(): Teacher(), courseName(""), designation("") {}

        string getCourseName(){return courseName;}
        string getDesignation(){return designation;}
        string getDepartment(){return department;}

        void setCourseName(string CourseName){courseName = CourseName;}
        void setDesignation(string Designation){designation = Designation;}

        void displayInfo(){
            Teacher::displayBaseInfo();
            cout << "Department: " << department << endl;
            cout << "Course Name: " << courseName << endl;
            cout << "Designation: " << designation << endl;
        }
};

int main() {
    HumanitiesTeacher humT;
    ScienceTeacher sciT;
    MathsTeacher mathT;

    string name, institute, courseName, designation;
    int age;

    // Humanities Teacher
    cout << "Enter Humanities Teacher details:\n";
    cout << "Name: "; getline(cin, name);
    cout << "Age: "; cin >> age; cin.ignore();
    cout << "Institute: "; getline(cin, institute);
    cout << "Course Name: "; getline(cin, courseName);
    cout << "Designation: "; getline(cin, designation);

    humT.setName(name);
    humT.setAge(age);
    humT.setInstitute(institute);
    humT.setCourseName(courseName);
    humT.setDesignation(designation);

    cout << "\n!!! Humanities Teacher Info !!!\n";
    humT.displayInfo();

    // Science Teacher
    cout << "\nEnter Science Teacher details:\n";
    cout << "Name: "; getline(cin, name);
    cout << "Age: "; cin >> age; cin.ignore();
    cout << "Institute: "; getline(cin, institute);
    cout << "Course Name: "; getline(cin, courseName);
    cout << "Designation: "; getline(cin, designation);

    sciT.setName(name);
    sciT.setAge(age);
    sciT.setInstitute(institute);
    sciT.setCourseName(courseName);
    sciT.setDesignation(designation);

    cout << "\n!!! Science Teacher Info !!!\n";
    sciT.displayInfo();

    // Maths Teacher
    cout << "\nEnter Maths Teacher details:\n";
    cout << "Name: "; getline(cin, name);
    cout << "Age: "; cin >> age; cin.ignore();
    cout << "Institute: "; getline(cin, institute);
    cout << "Course Name: "; getline(cin, courseName);
    cout << "Designation: "; getline(cin, designation);

    mathT.setName(name);
    mathT.setAge(age);
    mathT.setInstitute(institute);
    mathT.setCourseName(courseName);
    mathT.setDesignation(designation);

    cout << "\n!!! Maths Teacher Info !!!\n";
    mathT.displayInfo();

    return 0;
}

