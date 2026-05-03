#include <iostream>
using namespace std;
class Student
{
private:
    int rollNo;
    string name;
public:
    void setData(int r, string n)
    {
        rollNo = r;
        name = n;
    }
    void showData()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};
int main()
{
    Student s1;         
    s1.setData(101, "Aman");   
    s1.showData();  
    Student s2;         
    s2.setData(102, "Raj");   
    s2.showData();            
    return 0;
}