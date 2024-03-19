#include <stdio.h>
#include <stdlib.h>

int main()
{long int A,B,K;
scanf("%ld %ld",&A,&B);
    if((A%2!=0 && B%2==0)||(A%2==0 && B%2!=0))
{
     printf("IMPOSSIBLE\n");
}
else
{K=((A+B)/2);
   printf("%ld\n",K);
}

    return 0;
}
