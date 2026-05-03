#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int rollNo;
    float marks[5];
    float average;
public:
    void input()
    {
        cout << "enter Student Name: ";
        getline(cin, name);

        cout << "enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter marks of 5 subjects:\n";
        for(int i = 0; i < 5; i++)
        {
            cout << "Subject " << i+1 << ": ";
            cin >> marks[i];
        }
    }
    void calculateAverage()
    {
        float sum = 0;
        for(int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
        average = sum / 5;
    }
void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Average Marks: " << average << endl;
    }
};
int main()
{
    Student s;
    s.input();
    s.calculateAverage();
    s.display();
    return 0;
}