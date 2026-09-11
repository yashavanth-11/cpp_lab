#include <iostream>
#include <string>
using namespace std;

class bankaccount {
private:
    string owner;
    double balance = 0;

public:
    void openaccount(const string& name, double initial)
    {
        owner = name;
        balance = initial > 0 ? initial : 0;
    }

    void deposit(double amount)
    {
        if (amount > 0) {
            balance += amount;
        }
    }

    bool withdraw(double amount)
    {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

    string get_owner() const
    {
        return owner;
    }

    double get_balance() const
    {
        return balance;
    }
};

int main()
{
    bankaccount account;
    string name;
    double initialdeposit;
    double depositamount;
    double validwithdrawal;

    cout << "Enter account holder name: ";
    getline(cin, name);

    cout << "Enter initial deposit amount: ";
    cin >> initialdeposit;
    account.openaccount(name, initialdeposit);

    cout << "Enter deposit amount: ";
    cin >> depositamount;
    account.deposit(depositamount);

    cout << "Enter valid withdrawal amount: ";
    cin >> validwithdrawal;
    if (account.withdraw(validwithdrawal)) {
        cout << "Withdrawal successful" << endl;
    } else {
        cout << "Insufficient funds" << endl;
    }

    cout << "\n=== Account Summary ===" << endl;
    cout << "Account Holder: " << account.get_owner() << endl;
    cout << "Current Balance: " << account.get_balance() << endl;

    return 0;
}
