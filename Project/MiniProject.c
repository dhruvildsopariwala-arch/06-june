#include <stdio.h>
int main()
{
    int choice,roll_no,marks;
    char name[50];

    while(1)
    {
        
        printf("\n1. Add Student : ");
        printf("\n2. View Student : ");
        printf("\n3. update marks : ");
        printf("\n4. Exit : ");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            printf("\n enter roll_no : ");
            scanf("%d", &roll_no);
            printf("\n enter name : ");
            scanf("%s",name);
            printf("\n marks : ");
            scanf("%d", &marks);
            break;

            case 2:
            printf("\n roll_no is : %d",roll_no);
            printf("\n Name is : %s",name);
            printf("\n marks is : %d\n",marks);
            break;

            case 3:
            printf("\n enter updated marks : ");
            scanf("%d", &marks);
            printf("\n marks updated Successfully. \n");
            break;

            case 4:
            printf("\n Succesfully exit.\n");
            return 0;

            default:
                printf("\n Invalid choice.\n ");
        }

    }
    return 0;
}