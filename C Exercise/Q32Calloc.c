#include <stdio.h>
#include <stdio.h>
/*
Malloc : Dynamic memory allocation
Room 1=?
Room 2=?
Room 3=?

Calloc
Room 1=?
Room 2=?
Room 3=?
*/

int main(){
    int n;
    printf("enter number of students ?");
    scanf("%d",&n);

    int *marks =(int *) calloc( n *sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);

    }
    for(int i=0;i<n;i++){
        printf("\n%d",marks[i]);
    }
    return 0;
}
