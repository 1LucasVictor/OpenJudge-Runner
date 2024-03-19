#include<stdio.h>
int main()
{
    int n,p,q;
    scanf("%d %d %d",&n,&p,&q);
    if(p>q) printf("%d\n",q*n);
    else printf("%d\n",p*n);
    return 0;
}