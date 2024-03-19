#include<stdio.h>
main()
{
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    z=(a>b)?((a>c)?a:c):((b>c)?b:c);
    x=(a>b)?((b>c)?c:b):((a>c)?c:a);
    y=(z==a)?((b>c)?b:c):((x==a)?((b>c)?c:b):a);
    printf("%d %d %d\n",x,y,z);
    return 0;
}

