#include <stdio.h>

int main()
 {
    float totalCost, finalAmount;
    
    printf("Enter the total cost of items in the cart: ");
    scanf("%f", &totalCost);
    
    if (totalCost > 100)
    {
       printf( "finalAmount = 0.90 * totalCost \n"); 
    } 
    else
    {
        printf("finalAmount = totalCost");
    }
    
    printf("The final amount to be paid is: %f",finalAmount);
    return 0;
}