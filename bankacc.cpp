#include <iostream>
using namespace std;
class BankAccount
{
    long AccountNumber;
    string AccountHolderName;
    double Balance;
    string AccountType;

public:
    BankAccount(long accno, string name, double bal, string type)
    {
        AccountNumber = accno;
        AccountHolderName = name;
        Balance = bal;
        AccountType = type;
    }
    void display()
    {
        cout << "Account number:" << AccountNumber << endl;
        cout << "Account Holder name:" << AccountHolderName << endl;
        cout << "Balance:" << Balance << endl;
        cout << "Account type:" << AccountType << endl;
    }
    ~BankAccount()
    {
        cout << "Bank account closed" << endl;
    }
};
int main()
{
    BankAccount acc1(74349239, "Sumer Verma", 45000.5, "savings");
    acc1.display();
    return 0;
}
