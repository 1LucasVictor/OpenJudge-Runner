#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)||(b+c>a)||(a+c>b))
    {
        if(((a*a)==(b*b)+(c*c)) || ((b*b)==(c*c)+(a*a)) || ((c*c)==(a*a)+(b*b)))
        printf("YES\n");
        else
        printf("NO\n");
    }
    else
    printf("NO\n");
}
    return 0;
}