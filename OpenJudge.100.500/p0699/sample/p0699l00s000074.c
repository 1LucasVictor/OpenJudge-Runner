#include <stdio.h>

int main(void)
{
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);     /* 入力 */
        if(a*b*c == 5*5*7)      {printf("YES\n");}
        else                    {printf("NO\n");}
        return 0;
}

