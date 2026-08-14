#include<iostream>
using namespace std;
/*
one grandparent one parent one child
*/

class Person{
    public:
    string name;
};
class employee: public Person {
    public:
    int emp_id;
    double salary;
};

class Department : public employee{
    public:
    string dept_name;
};
int main(){
    Department d1;
    d1.name="Dhruvil";
    d1.emp_id=12345;
    d1.salary=45866656;
    d1.dept_name="IT";

    cout<<"Name is "<<d1.name<<endl;
    cout<<"emp id is "<<d1.emp_id<<endl;
    cout<<"salary is "<<d1.salary<<endl;
    cout<<"department is "<<d1.dept_name<<endl;
    return 0;
}