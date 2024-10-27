#include <stdio.h>

int main() 
{
    float kilometers, miles;

    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    miles = kilometers * 0.621371;
    printf("Distance in miles: %f\n", miles);

    return 0;
}