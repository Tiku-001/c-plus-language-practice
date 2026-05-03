#include <iostream>
using namespace std;
class A {
private:
    int a;
public:
    A(int x) {
        a = x;
        cout << "Constructor of A called\n";
    }
    void displayA() {
        cout << "Value of a: " << a << endl;
    }
    ~A() {
        cout << "Destructor of A called\n";
    }
};
class B {
private:
    int b;
public:
    B(int y) {
        b = y;
        cout << "Constructor of B called\n";
    }
    void displayB() {
        cout << "Value of b: " << b << endl;
    }
    ~B() {
        cout << "Destructor of B called\n";
    }
};
class C : public A, public B {
private:
    int c;
public:
    C(int x, int y, int z) : A(x), B(y) {
        c = z;
        cout << "Constructor of C called\n";
    }
    void displayC() {
        cout << "Value of c: " << c << endl;
    }
    void displayAll() {
        displayA();
        displayB();
        displayC();
    }
    ~C() {
        cout << "Destructor of C called\n";
    }
};
int main() {
    int x, y, z;
    cout << "Enter values for a, b, c: ";
    cin >> x >> y >> z;
    C obj(x, y, z);
    cout << "\nDisplaying values:\n";
    obj.displayAll();
    return 0;
}