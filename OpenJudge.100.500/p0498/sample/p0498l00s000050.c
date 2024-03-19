#include <stdio.h>

int main(void)
{
        int n,s;
        scanf("%d",&n);
        if(n%2==0) s=n/2;
        else if(n%2==1) s=n/2+1;
        printf("%d\n",s);
        return 0;
}
