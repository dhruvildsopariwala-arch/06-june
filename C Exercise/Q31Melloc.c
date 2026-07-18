#include<stdio.h>
#include<stdlib.h>
/*
Malloc : dynamic memory allocation
Room 1=?
Room 2=?
Room 3=?

calloc
Room 1=0
Room 2=0
Room 3=0
*/
int main(){
    int n;
    printf("enter number of students ?");
    scanf("%d",&n);

    int *marks =(int *) calloc( n , sizeof(int));
    // for(int i=0;i<n;i++){
    //     scanf("%d",&marks[i]);
    // }
    for(int i=0;i<n;i++){
        printf("\n%d",marks[i]);
    }
    
    return 0;
}