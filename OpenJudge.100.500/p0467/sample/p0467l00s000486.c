#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A,B,C,K;
   scanf("%i %i %i %i",&A,&B,&C,&K);

   if(K<=A){
    printf("%i\n",(K*1));
   }
   else if((K>=A)&&(K<=A+B)){
     printf("%i\n",((A*1)+(K-A)*0));
   }
   else if((K>=A+B)&&(K<=A+B+C)){
    printf("%i\n",((A*1)+(B*0)+((K-A-B)*(-1))));
   }

    return 0;
}
