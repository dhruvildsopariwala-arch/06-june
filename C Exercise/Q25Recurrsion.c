#include<stdio.h>
void printNumber(int i){
    if(i>5){
        return;
    }
    printf("\n%d",i);
    printNumber(i+1);
}
int main(){
    // for(int i=1;i<=5;i++){
    //     printf("%d",i);
    // }
    printNumber(1);
    /*
    printNumber(1) 1 
    printNumber(2) 2
    printNumber(3) 3
    printNumber(4) 4
    printNumber(5) 5
    printNumber(6) 
    */
    return 0;
}