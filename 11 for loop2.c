#include<stdio.h>
int main()
{
    int N;
    int patients;
    int Totalpatients=0;
    int overcrowded_days=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&patients);
        Totalpatients+=patients;
        if(patients>100)
        {
            overcrowded_days++;
        }
    }
    printf("Total patients:%d\n",Totalpatients);
    printf("Over crowded days:%d",overcrowded_days);
    return 0;
}