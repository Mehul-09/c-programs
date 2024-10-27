#include <stdio.h>

int main() 
{
    float length, breadth, area;

    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    printf("Area of the rectangle is: %f\n", area);

    return 0;
}