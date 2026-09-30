#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    Student s1, s2, s3;

    s1.name = "Toshi";
    s1.age = 20;
    s1.course = "B.Tech CSE";

    s2.name = "Ishika";
    s2.age = 21;
    s2.course = "B.Tech CSE";

    s3.name = "Saumya";
    s3.age = 20;
    s3.course = "B.Tech CSE";

    s1.display();
    s2.display();
    s3.display();

    return 0;
}