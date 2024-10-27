#include <stdio.h>

int main() 
{
    int n, i, first, second;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1]) 
    {
        first = arr[0];
        second = arr[1];
    } else 
    {
        first = arr[1];
        second = arr[0];
    }

    for (i = 2; i < n; i++) 
    {
        if (arr[i] > first) 
        {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) 
        {
            second = arr[i];
        }
    }

    printf("Second largest number is: %d\n", second);
    return 0;
}