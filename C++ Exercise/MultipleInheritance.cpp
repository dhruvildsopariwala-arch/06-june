/*
2 parent 1 child
*/

#include<iostream>
using namespace std;

class payment
{
    public:
    void process_payment()
    {
        cout<<"payment successfully"<<endl;
    }
};

class notification
{
    public:
    void send_email()
    {
        cout<<"notification email sent"<<endl;
    }
};

class order:public payment,public notification
{
    public:
    void order_placed()
    {
        cout<<"order successfully placed"<<endl;
    }
};


int main()
{
    order o1;
    o1.process_payment();
    o1.send_email();
    o1.order_placed();
    return 0;

}