#include <stdio.h>
int main()
{
    int  a,b,c,i,j,k;
    //char ch,ch1;
    scanf("%d %d %d",&a, &b, &c);
    if(a==c) printf("YES\n");
    else if(c>a && b>=(c-a)) printf("YES\n");
    else printf("NO\n");
    return 0;
}