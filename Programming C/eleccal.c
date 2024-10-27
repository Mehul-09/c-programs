#include<stdio.h>
int main()
{int x;
printf("enter the units");
scanf("%d",&x);
if(x<=100)
{
 int a;
  a=x*5;
  printf("%d",a);
 }
else if(x<=200)
 {
 int a;
 a=x*7;
 printf("%d",a);
 }
 if (x>200)
 
{
int a;
 a=x*10;
 printf("%d",a);
 }
 return 0;
 }
