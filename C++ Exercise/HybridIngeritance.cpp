#include<iostream>
using namespace std;
class employee{
    public:
   
    void login(){
        cout<<"employee Logged in "<<endl;
    }

};
class developer: public employee{
    public:

    void write_code(){
        cout<<"write code"<<endl;
    }
};

class tester: public employee{
    public:
    void test_software(){
        cout<<"Test the software"<<endl;
    }

};
class team_lead: public developer,public tester{
    public:
     void manage_team(){
        cout<<"Manage team"<<endl;
     }

};
int main(){
    team_lead t1;
    t1.login();
    t1.write_code();
    t1.test_software();

   

    return 0;
}