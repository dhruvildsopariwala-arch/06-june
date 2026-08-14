/*
write
ofstream
read
*/


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;


    // step 1 : open and create file

    fout.open("student.txt",ios::app);

    // step 2: write into file
    fout<<"\n Dhruv";
    fout<<"\n marks :87";

    //step 3 : close file
    fout.close();

    return 0;
}
