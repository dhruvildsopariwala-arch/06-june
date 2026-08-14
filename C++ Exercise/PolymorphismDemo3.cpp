/*
    overrriding: same function same protocol use with inheritance
*/

#include <iostream>
using namespace std;
class Payment
{
    public:
    void pay()
    {
        cout<<"Payment Successful"<<endl;
    }
};
class UPI:public Payment
{
    public:
    void pay()
    {
        cout<<"UPI payment successfully"<<endl;
    }
};
int main()
{
    UPI u1;
    u1.pay();
    return 0;
}
