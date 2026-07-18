#include<stdio.h>
/*Function with parameter without return type*/
    void EmployeDetails(int id,char name[]){
        printf("\nEmployee ID is %d",id);
        printf("\nEmployee Name is %s",name);
    }
int main(){
    EmployeDetails(1,"Velcy");
    EmployeDetails(2,"Qaid");
    EmployeDetails(3,"Haarish");
    return 0;
}