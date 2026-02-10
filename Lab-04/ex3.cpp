#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
        static int objectsCount;
        int account_no, security_code;
        double account_bal;
    
    public:
        static void displayObjectsCount(){
            cout << "The total accounts created: " << objectsCount << endl;
        }

        Account(int accountNum, double accountBalance, int securityCode){    
            account_no = accountNum;
            account_bal = accountBalance;
            security_code = securityCode;
            objectsCount++;       
        }

        void displayAccountInformation(){
            cout << "Account number: " << account_no << endl;
            cout << "Account balance: " << account_bal << endl;
            cout << "Security Code: " << security_code << endl;
        }

};

int Account::objectsCount = 0;

int main(){
    Account::displayObjectsCount();
    cout << "Creating Account 1: " << endl;
    Account account1(1, 10000, 380);
    account1.displayAccountInformation();
    cout << "Creating Account 2: " << endl;
    Account account2(2, 25000, 123);
    account1.displayAccountInformation();    
    Account::displayObjectsCount();

    return 0;
}