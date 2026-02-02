#include <iostream>
using namespace std;

int main(){
    char accountType;
    double accountNumber, withdrawalAmount;
    double Balance = 200000;

    cout << "Please enter your Account Type (Savings or Current), S for Savings, C for Current: ";
    cin >> accountType;
    cout << "Now please enter your Account Number: ";
    cin >> accountNumber;
    cout << "Please enter the Withdrawal Amount: ";
    cin >> withdrawalAmount;

    if (withdrawalAmount > 100000){
        while (withdrawalAmount > 100000){
            cout << "Withdrawing more than 100,000 at a time is not allowed." << endl << "Please enter valid withdrawal amount: ";
            cin >> withdrawalAmount;
        }
    }

    Balance += -withdrawalAmount;

    if (accountType == 'S'){
        double fee = withdrawalAmount * 0.02;
        Balance += -fee;
        cout << fee << " (2% of the withdrawal amount) have been deducted from the remaining balance." << endl;
        if (withdrawalAmount > 50000){
            double tax = Balance * 0.05;
            Balance += - tax;
            cout << "Additional " << tax << " (5% tax) have been deducted from the remaining balance since withdrawal amount is more than 50,000" << endl;    
        }
        cout << "Remaining Balance: " << Balance << endl;
    }
    else{
        double fee = 100;
        Balance += -fee;
        cout << fee << " have been deducted from the remaining balance." << endl;
        if (withdrawalAmount > 50000){
            double tax = Balance * 0.05;
            Balance += - tax;
            cout << "Additional " << tax << " (5% tax) have been deducted from the remaining balance since withdrawal amount is more than 50,000" << endl;    
        }
        cout << "Remaining Balance: " << Balance << endl;
    }

    return 0; 
}