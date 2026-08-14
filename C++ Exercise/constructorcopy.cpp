#include <iostream>
using namespace std;
/*
object as parameter
*/

class VolumeOfBox
{
    VolumeOfBox(VolumeOfBox &cc)
    {
        cout<<"inside copy constructor"<<endl;
        length=cc.length;
        width=cc.width;
        height=cc.height;
    }
    void show()
    {
        cout<<"voulme of box"<<length*width*height<<endl;

    }
}
int main()
{
    VolumeOfBox dc;
    dc.show();
    VolumeOfBox pc(10,20,30);
    pc.show();

    VolumeOfBox cc=dc;
    cc.show();
    return 0;
}