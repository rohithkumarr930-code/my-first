#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int rolls;
    int sum = 0;
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&rolls);
        sum+=rolls;
    }
    int expectedSum=n*(n+1)/2;
    int missing=expectedSum-sum;
    printf("%d",missing);
    return 0;
}