#include <stdio.h>

float deposit(float balance, float amount)
{
    balance = balance + amount;
    return balance;
}

float withdraw(float balance, float amount)
{
    if (amount > balance)
    {
        printf("Insufficient balance\n");
        return balance;
    }

    balance = balance - amount;
    return balance;
}

int main()
{
    float balance = 10000;
    float depositAmount = 5000;    
    float withdrawAmount = 3000;   

    balance = deposit(balance, depositAmount);
    printf("Balance after deposit: %.2f\n", balance);

    balance = withdraw(balance, withdrawAmount);
    printf("Final balance: %.2f\n", balance);

    return 0;
}
