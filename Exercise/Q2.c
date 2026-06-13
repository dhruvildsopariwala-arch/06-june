#include <stdio.h>  //Standard input output
#include <stdlib.h> //standard library
/*
variable : it is a container
*/
int main(){
    int id=2147483647; //-2147483648 to 2147483647
    long long population=9223372036854775807;
    char grade='A';
    float pi=3.14;
    printf("\n%d",id);
     printf("\n%lld",population);
     printf("\n%c",grade);
     printf("\n%f",pi);
    return 0;
}