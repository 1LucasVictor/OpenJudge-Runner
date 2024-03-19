#include<stdio.h>
int main()
{
    int n,p,q,j;
    scanf("%d %d %d",&n,&p,&q);
    if(p>q){j=q*n;}
    else j=p*n;
    if(j<=q) printf("%d\n",j);
    else printf("%d\n",q);
    return 0;
}