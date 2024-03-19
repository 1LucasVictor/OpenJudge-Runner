#include<stdio.h>
main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {

        if(a<=b && b<=c)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}
