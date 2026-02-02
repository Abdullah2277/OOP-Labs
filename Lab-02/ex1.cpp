#include <iostream>
#include <string>
using namespace std;

class student{
    private:
        char section;
        string name;
        int rollno, semester;
    
    public:
        student (string n, int rno, char sect, int sem){
            section = sect;
            name = n;
            rollno = rno;
            semester = sem;
        }
        string getname(){
            return name;
        }
        int getrollno(){
            return rollno;
        }
        int getsemester(){
            return semester;
        }
        char getsection(){
            return section;
        }
};

int main(){
    student std1("Ali", 52, 'A', 3);
    student std2("Ahmed", 55, 'A', 3);
    student std3("Ayesha", 42, 'B', 3);
    student std4("Sara", 57, 'A', 3);

    student students[] = {std1, std2, std3, std4};

    for (int x=0; x<4; x++){
        if (students[x].getsection() == 'A'){
            cout << students[x].getname() << " ";
            cout << students[x].getrollno() << " ";
            cout << students[x].getsection() << " ";
            cout << students[x].getsemester() << " ";
            cout << endl;
        }
    }

    return 0;
}