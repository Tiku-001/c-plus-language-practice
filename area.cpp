#include <iostream>
using namespace std;

class Area {
public:
    Area(int l, int b) {
        cout << "Area of Rectangle = " << l * b << endl;
    }

    Area(float r) {
        cout << "Surface Area of Sphere = " << 4 * 3.14 * r * r << endl;
    }

    ~Area() {
        cout << "Object destroyed";
    }
};

int main() {
    Area a1(10, 5);
    Area a2(5.0);
    return 0;
}