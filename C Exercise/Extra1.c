#include <stdio.h>

int isPass(int marks)
{
    if (marks >= 35)
        printf(" Pass");
    else
        printf(" Fail");
}

int main()
{
    int marks = 50;   

    printf("%d\n", isPass(marks));

    return 0;
}