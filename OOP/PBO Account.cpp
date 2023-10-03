#include <iostream>
#include <string>

using namespace std;

class Account {
public:
    Account(string accountNumber, double balance) : accountNumber(accountNumber), balance(balance) {}

    void display() {
        cout << "Nomor Akun : " << accountNumber << ", Saldo: " << balance << endl;
    }

private:
    string accountNumber;
    double balance;
};

int main() {
    Account myAccount("123456", 15000.0);

    cout << "Informasi Akun: ";
    myAccount.display();

    return 0;
}