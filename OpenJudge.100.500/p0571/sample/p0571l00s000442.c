#include<stdio.h>
main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    if(n*a>b)
        printf("%d\n",b);
    else
        printf("%d\n",n*a);

}
