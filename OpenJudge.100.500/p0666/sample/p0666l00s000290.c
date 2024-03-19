#include <stdio.h>

int main(void)
{
        int a,b,c;
        scanf("%d%d%d",&c,&a,&b);
        if(b-a<=0)printf("delicious\n");
        else if(b-a<=c)printf("safe\n");
        else printf("dangerous\n");
        return 0;
}
