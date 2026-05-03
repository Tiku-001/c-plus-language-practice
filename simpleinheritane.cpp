#include <iostream>
using namespace std;

class Student {
public:
    int marks;

    void setMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }
};

class Exam : public Student {
public:
    void display() {
        cout << "Marks = " << marks << endl;
    }
};

int main() {
    Exam e1;
    e1.setMarks();
    e1.display();

    return 0;
}