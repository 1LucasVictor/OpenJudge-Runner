#include<stdio.h>
        int main(void)
{
        long long int A,B,K;
        scanf("%ld",&A);
        scanf("%ld",&B);
 
        K = (A*A - B*B) / (2*A - 2*B);
        if((A*A - B*B) % (2*A - 2*B) != 0)
                printf("IMPOSSIBLE\n");
        else printf("%ld\n",K);
        return 0;
        }