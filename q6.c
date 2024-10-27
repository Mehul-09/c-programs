#include <stdio.h>

int main() 
{
    float principal, rate, time, simpleInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &rate);
    
    printf("Enter time (in years): ");
    scanf("%f", &time);
    
    simpleInterest = (principal * rate * time) / 100;
    
    printf("Simple interest is: %f\n", simpleInterest);
    return 0;
}