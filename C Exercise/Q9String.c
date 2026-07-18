#include<stdio.h>
int main(){
    char address[100];

    printf("Enter your address :");
    // scanf("%s" ,address);
    fgets(address,sizeof(address),stdin);
   // printf("Address is %s",address);
    return 0;

}