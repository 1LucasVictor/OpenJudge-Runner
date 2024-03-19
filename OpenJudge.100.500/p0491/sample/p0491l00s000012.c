#include <stdio.h>
#include <math.h>


  int main()
 {
     long long int N,K,i,j,l,m;

     scanf("%lld %lld",&N, &K);

     if(N<K && K<N/2)
     {
         printf("%lld\n",N);
     }
else if (N<K && K>N/2)
     {
         m=-(N-K);
         if(N>m)
         {
             printf("%lld\n",m);
         }
         else
         {
             printf("%lld\n",N);
         }
     }

    else if(N>=K && ((N%K)==0 || K==1))
     {
         printf("0\n");
     }
     else if(N>K && !(N%K)==0)
     {
        j = N%K;
        l= j-K;
        if(j<l)
         {
             printf("%lld\n",j);
         }
         else
         {
             printf("%lld\n",-l);
         }
     }


     }



