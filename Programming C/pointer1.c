#include<stdio.h>
int main()
{
int num =10;
int*x;
x= &num;
printf("%d\n",num);
printf("%d\n",&num);
printf("%d\n",x);
printf("%d\n",*x);
return 0;
}
