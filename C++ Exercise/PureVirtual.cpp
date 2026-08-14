/*
1 parent and multiple child
abstraction : details are hidden only essential information is shown
*/
#include <iostream>
using namespace std;

class Form
{
public:
    virtual void submit() = 0;   // Pure virtual function
};

class AdmissionForm : public Form
{
public:
    void submit() override
    {
        cout << "Admission Form Submitted!!!" << endl;
    }
};

class JobForm : public Form
{
public:
    void submit() override
    {
        cout << "Job Form Submitted!!!" << endl;
    }
};

int main()
{
    AdmissionForm a1;
    JobForm j1;

    Form *f1 = &a1;
    Form *f2 = &j1;

    f1->submit();
    f2->submit();

    return 0;
}