#include<stdio.h>
int main()
{
    float grossSalary , allowance,deduction,netSalary;
    printf("enter gross salary: ");
    scanf("%f",&grossSalary);
    allowance=0.10 *grossSalary;
    deduction=0.03 *grossSalary;
    netSalary=grossSalary + allowance - deduction;
    printf("Net salary = %f ",netSalary);
}
