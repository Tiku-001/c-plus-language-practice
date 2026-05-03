#include <iostream>
using namespace std;

class User {
public:
    string name, address;
};

class Order : public User {
public:
    int id;
    float amount;
};

class Payment {
public:
    string method;
};

class Summary : public Order, public Payment {
public:
    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Address: ";
        cin >> address;
        cout << "Enter Order ID: ";
        cin >> id;
        cout << "Enter Amount: ";
        cin >> amount;
        cout << "Enter Payment Method: ";
        cin >> method;
    }

    void display() {
        cout << "\nCustomer: " << name;
        cout << "\nAddress: " << address;
        cout << "\nOrder ID: " << id;
        cout << "\nAmount: " << amount;
        cout << "\nPayment: " << method;
    }
};

int main() {
    Summary s;
    s.input();
    s.display();
    return 0;
}