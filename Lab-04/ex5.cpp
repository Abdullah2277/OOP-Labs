#include <iostream>
#include <string>
using namespace std;

class Customer_Hotel_Mercato{
    private:
        string name;
        int days;
        double rent;
        static const double rentPerDay;
    public:
        Customer_Hotel_Mercato(string name, int days){
            this->name = name;
            this->days = days;
            rent = 0.0;
        }
        void calculateRent(){
            if (days > 7){
                rent = rentPerDay * (days-1);
            }
            else{
                rent = rentPerDay * days;
            }
        }
        void displayDetails() const{
            cout << "Customer Name: " << name << endl;
            cout << "Total Days: " << days << endl;
            cout << "Total Rent: " << rent << endl;
        }
};

const double Customer_Hotel_Mercato::rentPerDay = 1000.85;

int main(){
    Customer_Hotel_Mercato customer1("Aisha", 2);
    Customer_Hotel_Mercato customer2("Ali", 10);
    Customer_Hotel_Mercato customer3("Ahmed", 14);

    customer1.calculateRent();
    customer2.calculateRent();
    customer3.calculateRent();

    customer1.displayDetails();
    customer2.displayDetails();
    customer3.displayDetails();

    return 0;
}