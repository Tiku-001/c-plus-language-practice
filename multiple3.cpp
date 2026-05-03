#include <iostream>
using namespace std;

class A {
public:
    int a;

    void funA() {
        cout << "A = " << a << endl;
    }
};

class B : public A {
public:
    int b;

    void funB() {
        cout << "B = " << b << endl;
    }
};

class C : public A {
public:
    int c;

    void funC() {
        cout << "C = " << c << endl;
    }
};

class D : public B, public C {
public:
    int d;

    void funD() {
        cout << "D = " << d << endl;
    }
};

int main() {
    D obj;

    obj.B::a = 10;  // because A is inherited twice
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    obj.funD();
    obj.funC();
    obj.funB();
    obj.B::funA();

    return 0;
}