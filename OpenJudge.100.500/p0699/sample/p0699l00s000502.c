#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==a&&c==a+2&&c==b+2)
        printf("YES");
    else
        printf("NO");
}

