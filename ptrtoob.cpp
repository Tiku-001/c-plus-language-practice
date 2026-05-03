#include <iostream>
using namespace std;

class Sum {
    int b;
public:
    void get_data(int x) {
        b = x;
    }

    int display() {
        return b;
    }
};

int main() {
    Sum obj;
    Sum* ptr;
    ptr = &obj;

    ptr->get_data(20);
    cout << "Value of b: " << ptr->display();

    return 0;
}