#include <iostream>
using namespace std;
class Number {
public:
    int value;
    Number(int v) {
        value = v;
    }
    void operator++() {
        value++;
    }
};
int main() {
    Number n(14);
    ++n;
    cout << "Value: " << n.value;
}