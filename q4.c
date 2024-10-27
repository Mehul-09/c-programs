#include <stdio.h>

int main()
 {
    float monthlySalary, annualSalary;
    int yearsOfService;
    
    printf("Enter monthly salary: ");
    scanf("%f", &monthlySalary);
    
    printf("Enter years of service: ");
    scanf("%d", &yearsOfService);
    
    annualSalary = monthlySalary * 12;
    
    if (yearsOfService > 5)
    {
        annualSalary += annualSalary * 0.10;
    }
    
    printf("Final annual salary is: %f\n", annualSalary);
    return 0;
}