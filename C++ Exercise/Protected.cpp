#include <iostream>
using namespace std;
/*
person
student
employee
customer
public:accessible everywhere
private: accessible within the class
protected: accessible in child class
*/

class Peron{
    protected:
    string name="Dhruvil";
    public:
    void displayPerson()
    {
        cout<<"name is "<<name<<endl;
    }
};

class Student:public Peron
{
    public:
    int marks;

    void displayMarks()
    {
        cout<<"marks is"<<marks<<endl;
    }
};
int main(){
    Student s1;
   // s1.name="Dhruvil";
    s1.displayPerson();
    s1.marks=45;
    s1.displayMarks();
    return 0;
}
