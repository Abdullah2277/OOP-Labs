#include <iostream>
using namespace std;

class Order {
private:
    const int orderID;   // constant attribute
    double totalAmount;

public:
    // constructor
    Order(const int id, double amount) : orderID(id) {
        totalAmount = amount;
    }

    void addItem(double price) {
        totalAmount += price;
    }

    // constant function to make sure they don't modify object's data
    void display() const {
        cout << "Order ID: " << orderID << endl;
        cout << "Total Amount: " << totalAmount << endl;
    }
};

int main() {
    Order o1(4001, 5500);

    o1.addItem(300);
    o1.display();

    return 0;
}
