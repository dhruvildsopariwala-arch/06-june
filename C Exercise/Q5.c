#include<stdio.h>
/*
Terenery Operation means if else
? etle if    : etle else
*/
int main(){
    int amount=4500;

    int discount=amount>5000?10:0;
    printf("discount is %d%%",discount);
    return 0;
}