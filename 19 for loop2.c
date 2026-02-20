#include <stdio.h>

int main() {
   int N,i;
   int noise;
   int maxnoise;
   int noisycount=0;
   scanf("%d",&N);
   scanf("%d",&noise);
   maxnoise=noise;
   if(noise>70)
   {
       noisycount++;
   }
   for(i=1;i<N;i++)
   {
       scanf("%d",&noise);
       
       if(noise>maxnoise)
       {
           maxnoise=noise;
       }
       if(noise>70)
       {
           noisycount++;
       }
   }
   printf("Maximum Noise:%d\n",maxnoise);
   printf("Noisy periods:%d",noisycount);

    return 0;
}