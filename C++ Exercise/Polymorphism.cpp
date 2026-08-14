/*
one name multiple form
    credit card
    netbanking
    upi payment
    wallet
notification
    sms
    email
    whatsapp
polymorphism
    function overloading:same function names but different parameter
*/

#include <iostream>
using namespace std;
class Calculator
{
    public:
    void add(int a,int b)
    {
        cout<<"1. Sum is"<<a+b<<endl;
    }
    void add(int a,int b,int c)
    {
        cout<<"2. Sum is"<<a+b+c<<endl;
    }
};
int main()
{
    Calculator calc;
    calc.add(15,6);
    calc.add(1,2,3);
    return 0;
}