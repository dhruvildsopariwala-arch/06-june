#include<iostream>
using namespace std;
/*
length*width*height
*/
class VolumeOfBox{
    double length,width,height;
    public:
    VolumeOfBox(){
        cout<<"inside constructor"<<endl;
        length=1;
        width=2;
        height=3;

    }
    VolumeOfBox(double l,double w,double h){
       cout<<"inside parameter construtor"<<endl;
        length=l;
        width=w;
        height=h;
    }
    /*
    object as a parameter
    */
    VolumeOfBox(VolumeOfBox &cc){
        cout<<"inside copy constructor"<<endl;
        length=cc.length;
        width=cc.width;
        height=cc.height;

    }
    void show(){
        cout<<"volume of box "<<length
        *width*height<<endl;

    }
    
};
int main(){
    VolumeOfBox dc;
    dc.show();
    VolumeOfBox pc(10,20,30);
    pc.show();

    VolumeOfBox cc=dc;
    cc.show();
    return 0;
}