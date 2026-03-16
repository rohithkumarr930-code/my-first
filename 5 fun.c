#include <stdio.h>
int digit(int n) 
{
    int sum=0;
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    return sum;
}
int main()
{
    int N;
    scanf("%d",&N);
    printf("%d",digit(N));
    return 0;
}