#include <iostream>
#include <string>
using namespace std;
class teacher
{
    // property/attributes
    public:
    string name;
    string dept;

    // methods
    void changeDept(string newDept)
    {
        dept = newDept;
    }
};
int main()
{
    teacher t1;
    t1.name = "sumer verma";
    t1.dept = "computer science";
    cout << t1.name << endl;
    return 0;
}