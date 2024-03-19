#include<stdio.h>
int main()
{
    int T,i;
    long long int a,b,c;
    scanf("%d",&T);
    for(i=1;i<=T;i++){

        scanf("%lld%lld%lld",&a,&b,&c);
        if((c*c)==((a*a)+(b*b))||(a*a)==((c*c)-(b*b))||(b*b)==((c*c)-(a*a)))
        printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}