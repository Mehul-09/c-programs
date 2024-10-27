#include<stdio.h>
void reverseArray (int arr[],int size)
{
    int temp;
    int start=0;
    int end =(size-1);
    while (start<end)
    {
        int temp= arr [start];
         arr [start]=arr [end];
        arr [end]=temp;
        start++;
        end--;
    }
} 
int main()
{
    int arr[]={10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Original Array with indices\n");
    for (int i=0;i<size;i++)
    {
        printf("original value=%d,value:%d\n",arr[i]);
    }
  void  reverseArray(int arr[],int size);
    printf("\n reverse Array with with original and new index");
    for(int i=0;i<size;i++)
    {
        printf("%d %d",i,arr[i]);
    }

    return 0;
}