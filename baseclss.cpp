#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class fun" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class fun" << endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;

    ptr = &obj;
    ptr->show();  // Calls Base class show() — static binding

    return 0;
}