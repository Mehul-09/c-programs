#include <stdio.h>

int main() 
{
    int days, years, months;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;
    months = days / 30;
    days = days % 30;

    printf("%d years, %d months,  %d days\n", years, months, days);
    return 0;
}