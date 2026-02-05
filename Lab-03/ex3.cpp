#include <iostream>
#include <string>
using namespace std;

class Toll_Booth{
    private:
        int total_num_cars;
        double total_amount_money;

    public:
        Toll_Booth(){
            total_num_cars = 0;
            total_amount_money = 0;
        }
        void payingCar(){
            total_num_cars++;
            total_amount_money += 0.50;
            cout << "A car has passed." << endl;
        }
        void display(){
            cout << "The total number of cars passed: " << total_num_cars << " and the total amount of money collected: " << total_amount_money << endl;
        }
};

int main(){
    Toll_Booth tollBooth;
    tollBooth.payingCar();
    tollBooth.payingCar();
    tollBooth.payingCar();
    tollBooth.payingCar();
    tollBooth.display();
    return 0;
}