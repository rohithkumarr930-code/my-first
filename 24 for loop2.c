#include <stdio.h>

int main() {
   int N,i;
   int calls,totalcalls=0;
   int overloadhours=0;
   scanf("%d",&N);
   
   for(i=0;i<N;i++)
   {
       scanf("%d",&calls);
       totalcalls+=calls;
       
       if(calls>40)
       {
           overloadhours++;
       }
   }
   printf("Total calls:%d\n",totalcalls);
   printf("Over loaded hours:%d",overloadhours);
   return 0;
}