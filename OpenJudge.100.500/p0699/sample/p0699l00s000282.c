#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if((a==5 && b==5 &&c==7) ||(a==5 && b==7 &&c==5)|| (a==7 && b==5 &&c==5) )
        printf("YES");
    else printf("NO");
}
