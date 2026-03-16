#include <stdio.h>
void Perfect(int n) 
{
    int sum=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0) 
        {
            sum+=i;
        }
    }
    if(sum==n)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
}
int main()
{
    int N;
    scanf("%d",&N);
    Perfect(N);
    return 0;
}