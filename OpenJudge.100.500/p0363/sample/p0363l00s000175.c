#include<stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a<c)
    {if(b<c)
        printf("%d %d %d", a, b, c);
    else if(b>c)
        printf("%d %d %d", a, c, b);
    }
    else if(b<a&&b<c)
    {if(a<c)
        printf("%d %d %d", b, a, c);
    else if(a>c)
        printf("%d %d %d", b ,c, a);
    }
    else if(c<a&&c<b)
    {if(a<b)
        printf("%d %d %d", c, a, b);
    else if(b<a)
        printf("%d %d %d", c, b, a);
    }
    printf("\n");
    return 0;
}