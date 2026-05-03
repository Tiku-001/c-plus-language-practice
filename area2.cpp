#include <iostream>
using namespace std;

class Box {
    int length;
    int breadth;

public:
    void set(int l, int b) {
        length = l;
        breadth = b;
    }

    int getArea() {
        return length * breadth;
    }
};

int main() {
    Box b;
    b.set(10, 20);

    int area = b.getArea();
    cout << area;

    return 0;
}