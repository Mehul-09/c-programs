#include<stdio.h>
int main()
{
int principal, rate, time,interest;

printf("enter the principal amount: ");
scanf("%d",&principal);

printf("enter the rate of interest (in %): ");
scanf("%d",&rate);

printf("enter the time period (in years): ");
scanf("%d",&time);

interest= (principal*rate*time)/100 ;

printf("Simple interest: %d\n,interest");
return 0;
}
