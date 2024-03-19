#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
    {
        if(b<=c||a>=d) printf("0\n");
        else if(c>=a&&d<=b) printf("%d\n",d-c);
        else if(a>=c&&b<=d) printf("%d\n",b-a);
        else if(b>=c&&b<=d&&a<=c) printf("%d\n",b-c);
        else if(d>=a&&d<=b&&c<=a) printf("%d\n",d-a);
    }
    return 0;
}