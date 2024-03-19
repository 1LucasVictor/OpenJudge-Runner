#include <stdio.h>

int main(void)
{

        int a,b,c,d;
        int x,y;

        scanf("%d%d%d%d",&a,&b,&c,&d);

        if(b<c){ printf("0\n");
                return 0;
        }


        x=a;
        if(a<c) x=c;
        y=d;
        if(b<d) y=b;

        printf("%d\n",y-x);



        return 0;
}