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

    // Declare calculateArea as a friend function
    friend int calculateArea(Box b);
};

// Define the friend function outside the class
int calculateArea(Box b) {
    return b.length * b.breadth;
}

int main() {
    Box b;
    b.set(10, 20);

    // Call the friend function
    int area = calculateArea(b);

    // Display the result
    cout << "Area: " << area << endl;

    return 0;
}