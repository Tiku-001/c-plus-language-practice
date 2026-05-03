#include <iostream>
using namespace std;

class Student {
    int marks;

protected:
    int getMarks() {
        return marks;
    }

public:
    void setMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }
};

class Exam : public Student {
protected:
    char getGrade() {
        int m = getMarks();

        if (m >= 80)
            return 'A';
        else if (m >= 50)
            return 'B';
        else
            return 'C';
    }
};

class Result : public Exam {
public:
    void display() {
        char grade = getGrade();
        cout << "Grade = " << grade << endl;
    }
};

int main() {
    Result r;
    r.setMarks();
    r.display();

    return 0;
}