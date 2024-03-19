#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("0\n");
        return 0;
    }
    printf("%d\n",(b+(a-1))/a);
    return 0;
}
