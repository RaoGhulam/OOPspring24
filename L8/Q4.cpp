/*Rao Ghulam Mohi Uddin (23K-0001)*/

#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;
    person(string n, int a) : name(n), age(a) {}
};

class student : public person
{
public:
    string student_ID;
    int grade_level;
    student(string n, int a, string id, int gl) : person(n, a)
    {
        student_ID = id;
        grade_level = gl;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << student_ID << endl;
        cout << "Grade Level: " << grade_level << endl;
    }
};

class teacher : public person
{
public:
    string subject;
    int room_number;
    teacher(string n, int a, string sub, int rn) : person(n, a)
    {
        subject = sub;
        room_number = rn;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Room Number: " << room_number << endl;
    }
};

class graduate_student : public student, public teacher
{
public:
    graduate_student(string n, int a, string id, int gl, string sub, int rn) : student(n, a, id, gl), teacher(n, a, sub, rn) {}
    void display()
    {
        student::display();
        cout << "Subject: " << subject << endl;
        cout << "Room Number: " << room_number << endl;
    }
};

int main()
{
    graduate_student gs("Rao", 20, "1", 3, "Math", 10);
    gs.display();

    return 0;
}