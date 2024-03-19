#include<stdio.h>
int main(void)
{
    int a,b,c,i,n;
    //scanf("%d%d%d%d",&n,&a,&b,&c);
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a==b || a==c || b==c)
        printf("NO\n");
        else if(a*a+b*b==c*c)
        printf("YES\n");
        else if(a*a+c*c==b*b)
        printf("YES\n");
        else if(b*b+c*c==a*a)
        printf("YES\n");
        else printf("NO\n");

    }

    return 0;
}