#include <iostream>
#include <string>
using namespace std;

class Dynamic_Array{
    private:
        int* arr;
        int size;

    public:
        Dynamic_Array(int Size): size(Size){
            arr = new int[size];
            for (int i=0; i<size; i++){
                arr[i] = 0;
            }
        }

        int  getSize() const{
            return size;
        }

        void push(int value){
            int* newArr = new int[size+1];
            for (int j=0; j<size; j++){
                newArr[j] = arr[j];
            }
            newArr[size] = value;
            delete[] arr;
            arr = newArr;
            size++;
        }

        void displayArray(){
            cout << "Array: ";
            for (int k=0; k<size; k++){
                cout << arr[k] << " ";
            }
        }
};

int main(){
    Dynamic_Array dArray(4);
    cout << "Array size: " << dArray.getSize() << endl;
    cout << "Default Array: " << endl;
    dArray.displayArray();
    cout << "Pushing a value in the array..." << endl;
    dArray.push(67);
    cout << "New Array: " << endl;
    dArray.displayArray();
    return 0;
}