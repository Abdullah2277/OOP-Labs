#include <iostream>
using namespace std;
#include <string>

int main(){
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *ptr3 = &num3;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptr3;
    *ptr3 = temp;
    cout << "Numbers after being swapped using pointers: " << num1 << " " << num2 << " " << num3;
    return 0;
}