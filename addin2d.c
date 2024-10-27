#include<stdio.h>
int main()
{
    int rows=2;
    int columns=3;
    int add[2][3];
    int sum=0;

    printf("enter the value\n");

    for(int i=0;i<rows;i++)
 
    for(int j=0;j<columns;j++)
    {
        scanf("%d",&add[i][j]);
    

      sum+= add[i][j];
    }
 


    printf("the sum of element is=%d\n",sum);

}