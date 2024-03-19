#include<stdio.h>
main()
{
    int n,i,j,k,m,l=0;
    scanf("%d%d%d",&i,&j,&k);
    n=i-j;
    m=k-n;
    if(m<0)
        printf("0");
    else
        printf("%d\n",m);
}
