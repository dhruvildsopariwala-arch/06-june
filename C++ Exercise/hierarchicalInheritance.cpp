/*
1 parent and multiple child
*/

#include <iostream>
using namespace std;

class employee
{
    public:
    string name;
    void login()
    {
        cout<<"name"<<"logged in" <<endl;
    }
};
class developer: public employee
{
    public:
    void write_code()
    {
        cout<<"Write code"<<endl;
    }
};

class tester:public employee
{
   public:
   void test_software()
   {
    cout<<"Test the software"<<endl;
   }
};

class manager:public employee
{
    public:
    void assign_task()
    {
        cout<<"Assign task"<<endl;
    }
};
int main()
{
    developer d1;
    tester t1;
    manager m1;

    d1.name="Dhruvil";
    d1.login();
    d1.write_code();

    t1.name+"Rahul";
    t1.login();
    t1.test_software();

    m1.name="Dhruv";
    m1.login();
    m1.assign_task();
    
    return 0;
}