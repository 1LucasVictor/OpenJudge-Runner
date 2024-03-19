#include<stdio.h>
int main()
{
    int a[100], b[100], c[100], i, n;
    scanf("%d",&i);
    for(n=0;n<i;n++)
    {
        scanf("%d %d %d",&a[n], &b[n], &c[n]);
    }
    for(n=0;n<i;n++)
    {
        if(a[n]*a[n]+b[n]*b[n]==c[n]*c[n])
        printf("YES\n");
        else if(b[n]*b[n]+c[n]*c[n]==a[n]*a[n])
        printf("YES\n");
        else if(c[n]*c[n]+a[n]*a[n]==b[n]*b[n])
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}