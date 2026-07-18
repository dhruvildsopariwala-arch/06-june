#include <stdio.h>
/*
Array: Collection of data of same data type 
Structure: COllection of data of different data type
*/
struct Employee{
    int emp_id;
    float salary;
    char emp_name[50];

};
int main(){
    struct Employee emp;
    emp.emp_id=1;
    emp.salary=120000;
    strcpy(emp.emp_name,"Dhruvil");
    printf("\nemp id id %d",emp.emp_id);
    printf("\nsalary id id %.2f",emp.salary);
    printf("\nemp name id %s",emp.emp_name);
    
    return 0;
}


