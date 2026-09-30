#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;

    void display() {
        cout << "Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Toshi";
    s1.age = 20;
    s1.course = "B.Tech CSE";

    s1.display();

    return 0;
}