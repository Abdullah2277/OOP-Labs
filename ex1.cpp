#include <iostream>
using namespace std;
#include <string>

int main(){

    int rollno;
    cout << "Enter your roll number: " << endl;
    cin >> rollno;

    float total_marks = 500;
    float marks_obtained = 0;

    for (int i=1; i<6; i++){
        int temp;
        cout << "Enter Marks for Course " << i << ": ";
        cin >> temp;
        marks_obtained += temp;
    }

    cout << "The Total Marks Obtained are: " << marks_obtained << endl;
    float percentage = (marks_obtained / total_marks) * 100;
    cout << "The Percentage Obtained is: " << percentage << "%" << endl;
    return 0;
}