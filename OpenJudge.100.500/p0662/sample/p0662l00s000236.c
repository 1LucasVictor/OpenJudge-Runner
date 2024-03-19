#include<stdio.h>
int main()
{   int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(b>=c&&c>=a&&b<=d)
        printf("%d\n",b-c);
    else if(d>=a&&a>=c&&b>=d)
        printf("%d\n",d-a);
    else if(c>=a&&b>=d)
        printf("%d\n",d-c);
    else if(a>=c&&d>=b)
        printf("%d\n",b-a);
    else
        printf("0\n");
    return 0;
}
