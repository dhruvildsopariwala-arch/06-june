#include <stdio.h>

int main()
{
    float marks;

    printf("Enter your percentage: ");
    scanf("%f", &marks);

    if(marks < 0 || marks > 100)
    {
        printf("Error! Enter percentage between 0 and 100.");
        return 0;
    }

    if(marks >= 90)
    {
        printf("Grade: A\n");
        printf("Outstanding Performance!");
    }
    else if(marks >= 75)
    {
        printf("Grade: B\n");
        printf("Well Done! Keep Learning.");
    }
    else if(marks >= 60)
    {
        printf("Grade: C\n");
        printf("Good Job! Practice More.");
    }
    else if(marks >= 45)
    {
        printf("Grade: D\n");
        printf("You Passed. Work Hard.");
    }
    else
    {
        printf("Grade: F\n");
        printf("Better Luck Next Time.");
    }

    return 0;
}