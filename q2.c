#include <stdio.h>

int main() 
{
    float scores[5], sum = 0.0, average;
    
    printf("Enter the scores of 5 students:\n");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%f", &scores[i]);
        sum += scores[i];
    }
    
    average = sum / 5;
    printf("The average score is: %f\n", average);
    
    return 0;
}
