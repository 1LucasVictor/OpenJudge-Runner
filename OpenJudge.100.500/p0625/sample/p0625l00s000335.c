#include<stdio.h>
int main()
{
    int i,m,n,y,x;
    scanf("%d%d",&m,&n);
    if(m>n)x=m-n;
    else if(m<n)x=n-m;
    else x=0;
    y=16-(m+n);
    x=x-1;
    if(x<=y) printf("Yay!\n");
    else printf(":(\n");

   return 0;
}
