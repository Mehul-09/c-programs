#include <stdio.h>

int main() 
{
    float marks[5], total = 0.0, percentage;
    
    printf("Enter the marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5;

    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90) 
    {
        printf("Grade: A\n");
    } 
    else if (percentage >= 80) 
    {
        printf("Grade: B\n");
    } 
    else if (percentage >= 70) 
    {
        printf("Grade: C\n");
    } 
    else if (percentage >= 60) 
    {
        printf("Grade: D\n");
    } 
    else 
    {
        printf("Grade: F\n");
    }

    return 0;
}
