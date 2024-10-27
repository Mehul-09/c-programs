#include <stdio.h>

int main() 
{
    int loaves;
    float cost;

    printf("Enter the number of loaves: ");
    scanf("%d", &loaves);

    cost = loaves * 3.0; 
    printf("Total cost: %f\n", cost);

    return 0;
}