#include <stdio.h>
int main(){
    int marks[]={80,90,78};

    int *ptr = marks;
    printf("Address \t Value");

    for(int i=0;i<3;i++)
    {
        
        printf("\n%p\t%d",ptr,*ptr);
        ptr++;
    }
}