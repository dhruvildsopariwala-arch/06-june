/*
class: class is a collection of data member and member function

Object: gives permission to access functionality of class

employee 
class
id
name
salary
*/

#include<iostream>
using namespace std;
class employee{
    public:
    int emp_id;
    string emp_name;
    int salary;
};
int main(){
    employee e1;   //object created
    e1.emp_id=1;
    e1.emp_name="dhruvil";
    e1.salary=100000;

    cout<<"employee id is "<<e1.emp_id<<endl;
    cout<<"employee name is "<<e1.emp_name<<endl;
    cout<<"employee salary is "<<e1.salary;
return 0;

}
