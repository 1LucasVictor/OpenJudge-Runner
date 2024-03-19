#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a=a-b;
    if(a<=c)
    {
        printf("%d\n",c-a);
        return 0;
    }
    else
        printf("0\n");
    return 0;
}
