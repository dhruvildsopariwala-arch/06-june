/*
jene run kar vu to aena sivai na ma virtual lakh va nu
suppose dog bark kar u to animal na class ma void "virtual" lakh va nu
*/

#include <iostream>
using namespace std;
class Animal
{
    public:
    virtual void sound()
    {
        cout<<"Animal Sound"<<endl;
    }
};
class Dog: public Animal
{
    public:
    void sound()
    {
        cout<<"Dog barks"<<endl;
    }
};

int main()
{
    Animal *a;
    Dog d;
    a=&d;
    a->sound();
    return 0;
}