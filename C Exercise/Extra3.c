#include <stdio.h>

float calculationBill(int units)
{
    float bill = 0;

    if (units <= 100)
    {
        bill = units * 2;
    }
    else if (units <= 200)
    {
        bill = units * 3;
    }
    else
    {
        bill = units * 5;
    }

    return bill;
}

int main()
{
    printf("Your bill is %.2f\n", calculationBill(110));
    return 0;
}