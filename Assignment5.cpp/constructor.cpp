#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;

    Student(string n, int a, string c) {
        name = n;
        age = a;
        course = c;
    }

    void display() {
        cout << "Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s1("Toshi", 20, "B.Tech CSE");

    s1.display();

    return 0;
}