#include <iostream>
#include <string>
using namespace std;

class AccountManageSys{
    private:
        double balance, interest;
        int numtransactions;
    
    public:
        AccountManageSys(){
            balance = 0.0;
            interest = 0.05;
            numtransactions = 0;
        }

        void deposit(double amount){
            if (amount > 0){
                balance += amount;
                numtransactions++;
                cout << "Deposit Successful!" << endl;
            }
            else{
                cout << "The deposit amount should be more than 0" << endl;
            }
            
        }
        
        void withdraw(double amount){
            if (amount > 0 && amount <= balance){
                balance += -amount;
                numtransactions++;
                cout << "Withdrawal Successful" << endl;
            }
            else{
                cout << "Invalid amount" << endl;
            }
        }

        double getbalance(){
            return balance;
        }
        int getnumtrans(){
            return numtransactions;
        }

        double getinterest(){
            return balance * interest;
        }

};


int main(){

    AccountManageSys account; 
    int choice; 
    double amount;

    do { 
        cout << "!!! ABC Bank Menu !!!\n"; 
        cout << "1. Display the account balance\n"; 
        cout << "2. Display the number of transactions\n"; 
        cout << "3. Display interest earned for this period\n"; 
        cout << "4. Make a deposit\n"; 
        cout << "5. Make a withdrawal\n"; 
        cout << "6. Exit the program\n"; 
        cout << "Please Enter your choice: "; 
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: " << account.getbalance() << endl; 
                break; 
            case 2: 
                cout << "Number of Transactions: " << account.getnumtrans() << endl; 
                break; 
            case 3: 
                cout << "Interest Earned: " << account.getinterest() << endl; 
                break;
            case 4: 
                cout << "Enter deposit amount: "; 
                cin >> amount; account.deposit(amount); 
                break; 
            case 5: 
                cout << "Enter withdrawal amount: "; 
                cin >> amount; account.withdraw(amount); 
                break; 
            case 6: 
                cout << "Exiting program. Thank you for choosing our service!\n"; 
                break; 
            default: 
                cout << "Invalid choice. Please try again.\n"; 
            }
        } while (choice != 6);
    
    return 0;
}