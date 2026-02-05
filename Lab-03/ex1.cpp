#include <iostream>
#include <string>
using namespace std;

class Complex_Numbers {
    private:
        double *real, *imaginary;
    
    public:
        Complex_Numbers(){
            real = new double; // real = new double(1.0)
            *real = 1.0;
            imaginary = new double;
            *imaginary = 2; 
        }

        Complex_Numbers(double Real, double Imaginary){
            real = new double(Real);
            imaginary = new double(Imaginary);
        }

        Complex_Numbers (const Complex_Numbers &obj){
            real = new double;
            imaginary = new double;
            *real = *(obj.real);
            *imaginary = *(obj.imaginary);
        }

        void setValue(double x, double y){
            *real = x;
            *imaginary = y;
        }

        void display(){
            cout << *real << " + " << *imaginary << "i" << endl;
        }
};

int main(){

    Complex_Numbers cnum1;
    Complex_Numbers cnum2(10, 55);
    Complex_Numbers cnum3 = cnum2;
    cout << "cnum1: ";
    cnum1.display();
    cout << "cnum2: ";
    cnum2.display();
    cout << "cnum3: ";
    cnum3.display();
    cnum2.setValue(22, 88);
    cout << "cnum2 after modification: ";
    cnum2.display();
    cout << "cnum3: ";
    cnum3.display();
    return 0;
}