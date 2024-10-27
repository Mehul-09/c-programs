#include<stdio.h>

void rotateArray(int arr[], int size, int k) 
{
    int temp[size];
    
    for (int i = 0; i < size; i++) 
    {
        temp[(i + k) % size] = arr[i];
    }

    for (int i = 0; i < size; i++) 
    {
        arr[i] = temp[i];
    }
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);  
    int k;

    printf("Enter rotation count: ");
    scanf("%d", &k);

    printf("Original array: \n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    rotateArray(arr, size, k);

    printf("\nRotated array: \n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}