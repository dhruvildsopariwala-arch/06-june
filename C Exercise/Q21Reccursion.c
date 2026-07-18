#include<stdio.h>
/*
factorail : 5
5*4*3*2*1
*/
int factorial(int n)
{
    if(n==1){
        return 1;
    
    }
    return n*factorial(n-1);

}
int main(){
    printf("factorial of 5 is %d",factorial(5));

    return 0;
}