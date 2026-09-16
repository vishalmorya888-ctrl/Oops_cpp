#include <bits/stdc++.h>
using namespace std;

class BankAccount {
    private:
    int accountnumber;
    string customerName;
    double balance;
    
    public:
    BankAccount(int accNum, string name, double bal) : accountnumber(accNum), customerName(name), balance(bal) {}
    friend void compareBalance(const BankAccount& a1, const BankAccount& a2);
};

void compareBalance(const BankAccount& a1, const BankAccount& a2) {
    if(a1.balance > a2.balance) {
        cout << a1.customerName << " has a higher balance ($" << a1.balance << ").\n";
    }
    else if(a2.balance > a1.balance) {
        cout << a2.customerName << " has a higher balance ($" << a2.balance << ").\n";
    }
    else{
        cout << "Both " << a1.customerName << " and " << a2.customerName << " have same balance ($" << a1.balance << ").\n";
    }
}

int main() {
	// your code goes here
	BankAccount acc1(1001, "Alice", 4500.50);
    BankAccount acc2(1002, "Bob", 7200.00);
    compareBalance(acc1, acc2);
    return 0;
}
