#include <stdio.h>

int main() 
{
    float amount, finalAmount;
    
    printf("Enter the total purchase amount: ");
    scanf("%f", &amount);
    
    if (amount > 200) 
    {
        finalAmount = amount * 0.95; // 5% discount
    }
    else 
    {
        finalAmount = amount;
    }
    
    printf("Final amount to pay: %f\n", finalAmount);
    return 0;
}