#include<stdio.h>
int main()
{
    int N;
    int error;
    int total_error=0;
    int critical_error=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&error);
        total_error+=error;
        
        if(error>50)
        {
            critical_error++;
        }
    }
    printf("Total Errors:%d\n",total_error);
    printf("Critical Errors:%d",critical_error);
    return 0;
    
}