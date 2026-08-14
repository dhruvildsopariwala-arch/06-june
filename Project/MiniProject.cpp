#include<iostream>
#include<fstream>
#include<string>
using namespace std;


/*Mini Project 2: “Creator Dashboard Lite”Objective: Create a console app for digital creators to manage
 content ideas.Trainer Guidelines:Implement Content class (title, platform, views, status).Allow 
 user to add, edit, delete content items.Store data using file handling.
Pending
Task*/

class content{
 public:
string title;
string paltform;
int views;
string status;


};

    int main(){
        int choice;
        content c;
        while (true)
        {
        cout<<"======createor Dashboard Lite======\n";
        cout<<"1. Add      Content"<<endl;
        cout<<"2. View     Content"<<endl;
        cout<<"3. Edit     Content"<<endl;
        cout<<"4. delete   Content"<<endl;
        cout<<"5. exit     Content"<<endl;
        
        cout<<"select your choice   :"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"enter title:";
            cin.ignore();
            getline(cin,c.title);
            cout<<"enter platform:";
            getline(cin,c.paltform);
            cout<<"enter views:";
            cin>>c.views;
            cout<<"enter status:";
            cin>>c.status;
            ofstream fout("context.txt",ios::app);

            fout<<c.title<<" | "<<c.paltform<<" | "<<c.views<<" | "<<c.status<<endl;
            fout.close();
            
            break;
        }
        
        
    }
    
    


}
