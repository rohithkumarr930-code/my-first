#include <stdio.h>
int Digits(int n) 
{
    int count=0;
    while(n>0) 
    {
        n=n/10;
        count++;
    }
    return count;
}
int main() 
{
    int N;
    scanf("%d",&N);
    printf("%d",Digits(N));
    return 0;
}