#include <stdio.h>

int main(void)
{
        int a,b,s;
        double t;
        scanf("%d%d%lf",&a,&b,&t);
        s=(int)((t+0.5)/a)*b;
        printf("%d\n",s);
        return 0;
}
