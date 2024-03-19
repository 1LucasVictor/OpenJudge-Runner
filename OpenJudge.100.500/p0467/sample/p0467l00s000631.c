#include <stdio.h>

int main(void)
{
        int k,a,b,c,s;

        scanf("%d%d%d%d",&a,&b,&c,&k);
        if(k<=a) s=a;
        else {
                if((k-a)<=b) s=a;
                else s=a+(k-a-b)*(-1);
        }

        printf("%d\n",s);
        return 0;
}
