#include <iostream>
using namespace std;

int main()
{
    double a, b;

    // Input
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

        cout << "Sum = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;
    if (b != 0)
    {
        cout << "Division = " << a / b << endl;
    }
    else
    {
        cout << "Division not possible (division by zero)" << endl;
    }

    return 0;
}
