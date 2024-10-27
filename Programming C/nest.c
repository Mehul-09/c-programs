#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the three numbers\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
  if(a>c)
   {
   printf("maximum is:%d\n",a);
   }
   else
   {
   printf("maximum is:%d\n",c);
   }
}
else
{
  if(b>c)
  {
  printf("maximum is:%d\n",b);
  }
  else
  {
  printf("maximum is:%d\n",c);
  }
}
return 0;
}
