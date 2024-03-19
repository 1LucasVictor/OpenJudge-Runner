#include<stdio.h>
int main()
{
    int a[100],b[100],c,s,s1;
    scanf("%d%d",&a[100],&b[100]);
    c=(a[100]+b[100])/2;
    s=abs(a[100]-c);
    s1=abs(b[100]-c);
    if(s==s1&&a[100]!=b[100])
        printf("%d",c);
    else
        printf("IMPOSSIBLE");
    return 0;
}
