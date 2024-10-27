#include <stdio.h>

int main() 
{
    int arr[100], n, i, largest, smallest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];

    for (i = 1; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            largest = arr[i];
        }
        if (arr[i] < smallest) 
        {
            smallest = arr[i];
        }
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}