#include<stdio.h>
main()
{
    int X,B,T,i,c=0;
    scanf("%d%d%d",&X,&B,&T);
    for(i=X;i<=T;i=i+3)
    {
        c=c+B;
    }
    printf("%d",c);
}
