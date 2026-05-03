#include <iostream>
using namespace std;
class Area
{
    float area;
public:
    Area(float l, float b)
    {
        area = l * b;
        cout << "Area of Rectangle = " << area << endl;
    }

    Area(float r)
    {
        area = 4 * 3.14 * r * r;
        cout << "Surface area of Sphere = " << area << endl;
    }

    ~Area()
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    Area a1(5,4);
    Area a2(2);
    return 0;
}