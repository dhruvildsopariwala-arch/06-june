/*
friend void display(class_name)
friend: A friend Function is an outside function that can access the private and protected data of a class
*/
#include <iostream>
using namespace std;
class student
{
    int marks=65;
    public:
    friend void display(student);

};
void display (student s1)
{
    cout<<"marks is :"<<s1.marks;;
}
int main()
{
    student s1;
    display(s1);
    return 0;
}