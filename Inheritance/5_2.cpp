#include <iostream>
using namespace std;

class Counter{
	private:
		int count;
	public:
		Counter() : count(0){			
		}
		int getCount(){
			return count;
		}
		void setCount(int x){
			count = x;
		}
		void countUp(){
			count++;
		}		
};

class NewCounter : public Counter{
	public:
		void countDown(){
			setCount(getCount()-1);
		}	
};

int main(void){
	NewCounter c1;
	cout << "Initial Value: " << c1.getCount() << endl;
	for(int i=0;i<5;i++){
		c1.countUp();
	}
	cout << "After increments: " << c1.getCount() << endl;
	for(int j=0;j<3;j++){
		c1.countDown();
	}
	cout << "After decrements: " << c1.getCount() << endl;
	return 0;
}