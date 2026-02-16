//  WITH POLYMORPHISM
// class Item {
// protected:
//     string name;
//     int quantity;
// public:
//     Item(): name(""), quantity(0) {}
//     void setName(string n) { name = n; }
//     void setQuantity(int q) { quantity = q; }
//     string getName() const { return name; }
//     int getQuantity() const { return quantity; }

//     virtual double calculateBill() const = 0; // pure virtual
//     virtual void displayInfo() const = 0;     // polymorphic display
//     virtual ~Item() {}
// };

// class BakedGoods: public Item {
// protected:
//     double discount = 0.1; // 10%
// };

// class Cakes: public BakedGoods {
// protected:
//     int price = 600;
// public:
//     double calculateBill() const override {
//         double total = price * quantity;
//         return total - (total * discount);
//     }
//     void displayInfo() const override {
//         cout << "Item: Cake, Quantity: " << quantity
//              << ", Price per unit: " << price
//              << ", Bill: " << calculateBill() << endl;
//     }
// };

// class Breads: public BakedGoods {
// protected:
//     int price = 200;
// public:
//     double calculateBill() const override {
//         double total = price * quantity;
//         return total - (total * discount);
//     }
//     void displayInfo() const override {
//         cout << "Item: Bread, Quantity: " << quantity
//              << ", Price per unit: " << price
//              << ", Bill: " << calculateBill() << endl;
//     }
// };

// class Drinks: public Item {
// protected:
//     double discount = 0.05; // 5%
//     int price = 100;
// public:
//     double calculateBill() const override {
//         double total = price * quantity;
//         return total - (total * discount);
//     }
//     void displayInfo() const override {
//         cout << "Item: Drink, Quantity: " << quantity
//              << ", Price per unit: " << price
//              << ", Bill: " << calculateBill() << endl;
//     }
// };
// int main() {
//     vector<Item*> items;

//     int qty;

//     // Cakes
//     cout << "Enter quantity of cakes: ";
//     cin >> qty;
//     Cakes* c = new Cakes();
//     c->setQuantity(qty);
//     items.push_back(c);

//     // Breads
//     cout << "Enter quantity of breads: ";
//     cin >> qty;
//     Breads* b = new Breads();
//     b->setQuantity(qty);
//     items.push_back(b);

//     // Drinks
//     cout << "Enter quantity of drinks: ";
//     cin >> qty;
//     Drinks* d = new Drinks();
//     d->setQuantity(qty);
//     items.push_back(d);

//     cout << "\n--- Customer Bill ---\n";
//     double grandTotal = 0;
//     for (Item* i : items) {
//         i->displayInfo();
//         grandTotal += i->calculateBill();
//     }

//     cout << "Grand Total: " << grandTotal << endl;

//     for (Item* i : items) delete i;

//     return 0;
// }





#include <iostream>
#include <string>
using namespace std;

class Item{
    protected:
        string name;
        int quantity;
    public:
        Item(string n=""): name(n), quantity(0) {} 
        string getName() const { return name; } 
        int getQuantity() const { return quantity; }
        void setQuantity(int q) { quantity = q; } 
};

class BakedGoods: public Item{
    protected:
        const double discount = 0.1;
    public:
        BakedGoods(string n): Item(n){}
};

class Cakes: public BakedGoods{
    protected:
        int price = 600;
    public:
        Cakes(): BakedGoods("Cakes") {}
        double calculateBill(){
            double bill = (price * quantity) - discount;
            return bill - (bill * discount);
        }
        void displayInfo(){
            cout << "Item: " << getName() << endl;
            cout << "Quantity: " << quantity << endl;
            cout << "Bill: " << calculateBill() << endl;
        }
};

class Breads: public BakedGoods{
    protected:
        int price = 200;
    public:
        Breads(): BakedGoods("Breads"){}
        double calculateBill(){
            double bill = price * quantity;
            return bill - (bill * discount);
        }
        void displayInfo(){
            cout << "Item: " << getName() << endl;
            cout << "Quantity: " << quantity << endl;
            cout << "Bill: " << calculateBill() << endl;
        }
};

class Drinks: public Item{
    protected:
        const double discount = 0.05;
        int price = 100;
    public:
        Drinks(): Item("Drinks"){}
        double calculateBill(){
            double bill = price * quantity;
            return bill - (bill * discount);
        }
        void displayInfo(){
            cout << "Item: " << getName() << endl;
            cout << "Quantity: " << quantity << endl;
            cout << "Bill: " << calculateBill() << endl;
        }
};

int main(){
    Cakes C;
    Breads B;
    Drinks D;

    int quantity;

    cout << "Enter quantity of Cakes: " << endl;
    cin >> quantity;
    C.setQuantity(quantity);

    cout << "Enter quantity of Breads: " << endl;
    cin >> quantity;
    B.setQuantity(quantity);

    cout << "Enter quantity of Drinks: " << endl;
    cin >> quantity;
    D.setQuantity(quantity);

    C.displayInfo();
    B.displayInfo();
    D.displayInfo();

    double Total = 0; 
    Total += C.calculateBill();
    Total += B.calculateBill();
    Total += D.calculateBill(); 
    cout << "Total Bill: " << Total << endl;

    return 0;
}