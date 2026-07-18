#include<stdio.h>
        void swap(int *a,int *b){
            int temp=*a;
            *a=*b;
            *b=temp;
        }
int main(){
    int x=10;
    int y=20;
    swap(&x,&y);

    printf("\n After swapping num 1 is %d and num 2 is %d",x,y);

    return 0;
}