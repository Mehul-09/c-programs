#include <stdio.h>

int main() 
{
    int list1[100], list2[100], merged[200], n1, n2, i, j;

    printf("Enter the number of elements in the first list: ");
    scanf("%d", &n1);
    printf("Enter the elements of the first list: ");
    for (i = 0; i < n1; i++) 
    {
        scanf("%d", &list1[i]);
    }

    printf("Enter the number of elements in the second list: ");
    scanf("%d", &n2);
    printf("Enter the elements of the second list: ");
    for (i = 0; i < n2; i++) 
    {
        scanf("%d", &list2[i]);
    }

    for (i = 0; i < n1; i++) 
    {
        merged[i] = list1[i];
    }
    for (j = 0; j < n2; j++) 
    {
        merged[i + j] = list2[j];
    }

    printf("Merged list: ");
    for (i = 0; i < n1 + n2; i++) 
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}