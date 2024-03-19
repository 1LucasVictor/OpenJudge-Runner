#include<stdio.h>
int main()
{
    int m,n,i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    n=i-j;
    m=k-n;
    if(m<0)
    printf("0");
    else
    printf("%d",m);

    return 0;
}
