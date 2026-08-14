#include <iostream>
using namespace std;

class Print_polymorphism
{
    public:
    void print(int x)
    [
        cout<<"Integer Value is"<<x<<endl;
    ]
    void print(string b)
    {
        cout<<"Name is "<<b<<endl;
    }
};
int main()
{
    Print_polymorphism pp;
    pp.print(774);
    pp.print("Qaid");
    return 0;
}