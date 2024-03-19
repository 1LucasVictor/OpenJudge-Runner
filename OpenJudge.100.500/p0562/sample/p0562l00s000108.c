#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d",&a,&b);
    c=b/a;
    if(b>c*a)
    {
            printf("%d\n",c+1);
    }
    else
        printf("%d\n",c);
    return 0;
}
