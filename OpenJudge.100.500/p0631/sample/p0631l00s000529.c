#include <stdio.h>
#include <stdlib.h>

int main()
{long long int n,a,b,x;
     while(~scanf("%lld%lld%lld",&a,&b,&x))
     {
        if(x<=a+b&&x>=a)
            printf("YES\n");
        else printf("N0\n");
     }

return 0;

}
