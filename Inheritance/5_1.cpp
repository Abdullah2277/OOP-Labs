#include <iostream>
using namespace std;
class complex{
	private:
		int real;
		int imaginary;
	public:
		complex() : real(0),imaginary(0){
		}
		complex(int x, int y) : real(x), imaginary(y){
		}
		void setReal(int x){
			real = x;
		}
		void setImaginary(int x){
			imaginary = x;
		}
		int getReal(){
			return real;
		}
		int getImaginary(){
			return imaginary;
		}
		void add(complex a, complex b){
			real = a.real + b.real;
			imaginary = a.imaginary + b.imaginary;
		}
		complex add(complex a){
			complex temp;
			temp.real = real + a.real;
			temp.imaginary = imaginary + a.imaginary;
			return temp;
		}
};

int main(void){
	complex c1, c2;
	return 0;
}