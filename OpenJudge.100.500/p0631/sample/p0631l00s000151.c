#include <stdio.h>
#include <stdlib.h>

int main()
{long long int A,B,X;
     while(~scanf("%lld%lld%lld",&A,&B,&X))
     {
        if(X<=A+B&&X>=A)
            printf("YES\n");
        else printf("N0\n");
     }

return 0;

}
