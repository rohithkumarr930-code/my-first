#include <stdio.h>
void LeapYear(int year)
{
    if ((year%4==0&&year%100!=0)||(year%400==0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}
int main() 
{
    int Year;
    scanf("%d",&Year);
    LeapYear(Year);
    return 0;
}