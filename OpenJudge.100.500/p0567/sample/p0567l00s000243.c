#include <stdio.h>

int main(void)
{
        int a,b,c;

        scanf("%d%d%d",&a,&b,&c);

        if((b+c)-a>0)printf("%d\n",(b+c)-a);
        else printf("0\n");
        return 0;
}
