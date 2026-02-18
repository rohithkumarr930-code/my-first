#include<stdio.h>
int main()
{
    int N;
    int scores;
    int sum=0;
    int Failed_subject=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&scores);
        sum=scores+sum;
    
    if(scores<40)
    {
        Failed_subject++;
    }
    }
    int average=sum/N;
    printf("Average score:%d\n",average);
    printf("Failed subjects:%d",Failed_subject);
    
    
    
        return 0;
}