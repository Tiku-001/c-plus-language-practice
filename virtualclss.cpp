#include <iostream>
using namespace std;

class A {
public:
    int x;
    void show() {
        cout << "Value of x: " << x << endl;
    }
};

class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {};

int main() {
    D obj;
    obj.x = 10;      // ✅ No ambiguity
    obj.show();      // ✅ Works fine
    return 0;
}