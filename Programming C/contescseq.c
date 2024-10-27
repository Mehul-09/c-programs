#include<stdio.h>
int main()
{
unsigned int x;
short int y;
long int z;
long long int a;
unsigned long long int b;
float c;
double d;
long double e;
printf("Enter an unsigned integer value");
scanf("%u",&x);
printf("Enter an short integer value");
scanf("%hd",&y);
printf("Enter an long integer value");
scanf("%ld",&z);
printf("Enter an long long integer value");
scanf("%lld",&a);
printf("Enter an unsigned long long integer value");
scanf("%llu",&b);
printf("Enter an float value");
scanf("%f",&c);
printf("Enter an double value");
scanf("%lf",&d);
printf("Enter an long double value");
scanf("%Lf",&e);
printf("%u",x);
printf("%hd",y);
printf("%ld",z);
printf("%lld",a);
printf("%llu",b);
printf("%f",c);
printf("%lf",d);
printf("%Lf",e);
return 0;
}








