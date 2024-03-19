#include<stdio.h>
int main()
{
    int i,d,a,b,c;
    scanf("%d",&i);
    for(d=1;d<=i;d++)
    {
        scanf("%d%d%d",&a,&b,&c);
    if((a*a)+(b*b)==c*c||(a*a)+(c*c)==b*b||(b*b)+(c*c)==a*a)
        printf("YES");
    else
        printf("NO");
    }

}