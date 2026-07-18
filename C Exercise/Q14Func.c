#include <stdio.h>

/*
Function : block of code that can be used multiple time anywhere

calculate_salary(){

}
A=150000+5000
B=
return_type func_name(parameter){
operation
}
*/
int calculate_salary(int salary){
    return salary+5000;

}
int main(){
    printf("\n Total salary is %d",calculate_salary(150000));
    printf("\n Total Salary is %d",calculate_salary(80000));
    return 0;
}
