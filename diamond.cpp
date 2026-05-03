/* WAP in c++ to implement and study the diamond problem and its solution using virtual base class.*/

#include <iostream>
using namespace std;

// Base class
class A {
public:
    int x;

    void getData() {
        cout << "Enter value of x: ";
        cin >> x;
    }
};

// Derived class B
class B : virtual public A {
};

// Derived class C
class C : virtual public A {
};

// Derived class D (inherits from B and C)
class D : public B, public C {
public:
    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    D obj;
    obj.getData();   // No ambiguity due to virtual base class
    obj.display();

    return 0;
}