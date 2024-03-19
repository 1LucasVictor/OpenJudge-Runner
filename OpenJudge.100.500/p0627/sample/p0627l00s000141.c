#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d",&a,&b);

    d=(a+b);
    e=(a-b);
    f=(a*b);
    if(d>e && d>f) {c=d;}
    if(e>d && e>f) {c=e;}
    if(f>d && f>e) {c=f;}
    printf("%d",c);

    return 0;
}

