#include<stdio.h>
main()
{
    int A,B,C,d,e,f=0;
    scanf("%d%d%d",&A,&B,&C);
    d=A-B;
    e=C-d;
    if(e>0)
        printf("%d",e);
    else printf("%d",f);
    return 0;
}
