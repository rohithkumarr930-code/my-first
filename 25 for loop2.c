#include <stdio.h>

int main() {
   int N,i;
   int rate,maxrate=0;
   int dangercount=0;
   scanf("%d",&N);
   
   for(i=0;i<N;i++)
   {
       scanf("%d",&rate);
       
       if(rate>maxrate)
       {
           maxrate=rate;
       }
       if(rate>140)
       {
           dangercount++;
       }
   }
   printf("Max heart rate:%d\n",maxrate);
   printf("Danger Reading:%d",dangercount);
   return 0;
}