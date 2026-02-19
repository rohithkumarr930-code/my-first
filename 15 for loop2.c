#include<stdio.h>
int main()
{
    int N;
    int voltage;
    int minimum_voltage;
    int low_voltage_events=0;
    scanf("%d",&N);
    scanf("%d",&minimum_voltage);
    if(minimum_voltage<210)
    {
        low_voltage_events++;
    }
    for(int i=1;i<N;i++)
    {
        scanf("%d",&voltage);
        
        if(voltage<minimum_voltage)
        {
            minimum_voltage=voltage;
        }
        if(voltage<210)
        {
            low_voltage_events++;
        }
    }
    printf("Minimum voltage:%d\n",minimum_voltage);
    printf("Low voltade days:%d",low_voltage_events);
    return 0;
}