#include <stdio.h>
int main() 
{
    int salary;
    int absentDays;
    int deduction=0;
    scanf("%d",&salary);
    scanf("%d",&absentDays);
    for(int i=1;i<=absentDays;i++)
    {
        deduction+=100;
    }
    salary=salary-deduction;
    printf("Final salary:%d",salary);
    return 0;
}