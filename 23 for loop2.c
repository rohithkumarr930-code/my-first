#include <stdio.h>

int main() {
   int N,i;
   int units,total=0,spikecount=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&units);
       total+=units;
       
       if(units>5)
       {
           spikecount++;
       }
   }
   printf("Total units:%d\n",total);
   printf("Spike Hours:%d\n",spikecount);
   return 0;
}