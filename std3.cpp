#include <iostream>
using namespace std;
class student
{
   private:
    string name;
    int age;

public:
    void getdata(string n, int a);
    void display()
    {
        cout << "student name: " << name  << " ,age:" << age << endl;
    }
};
 void student ::getdata(string n, int a)
{
    name = n;
    age = a;
}
int main()
{
    student s1;
    s1.getdata("sumer", 21);
    s1.display();
    return 0;
}