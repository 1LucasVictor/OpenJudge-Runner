#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/500;
    c=a%500;
    c=c/5;
    printf("%d\n",((b*1000)+(c*5)));
    return 0;
}
