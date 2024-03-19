#include <stdio.h>

int main(void)
{
        int a,b,c,d;
        int x,y;

        scanf("%d%d%d%d",&a,&b,&c,&d);

        if(b<=c){ printf("0\n");
                return 0;
        }
//77 88 34 96
        x=c;
        if(a>c) x=a;
        y=d;
        if(b<d) y=b;

        if(y-x<0) printf("0\n");
        else printf("%d\n",y-x);

        return 0;
}