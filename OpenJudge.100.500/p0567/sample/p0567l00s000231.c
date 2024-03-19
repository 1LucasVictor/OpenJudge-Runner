#include<stdio.h>
int main()
{
    int a,b,c,p;
    scanf("%d %d %d",&a,&b,&c);
    p=a-b;
    if(p>=c) printf("0\n");
    else printf("%d\n",c-p);
}
