/*
Constructor is a function which is called automatically when object is created 

Rules:
1. same name as class
2. no return typer
*/
#include <iostream>
using namespace std;

class Student {
    int roll_no;
    string name;

public:
    Student() {
        cout << "Inside constructor" << endl;
        roll_no = 1;
        name = "Dhruvil";
    }

    void getData() {
        cout << "Roll no: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }

    ~Student() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Student s1;
    s1.getData();
    return 0;
}