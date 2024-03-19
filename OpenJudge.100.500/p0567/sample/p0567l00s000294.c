#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        d=a-b;
        if(d<c)
          printf("%d\n",c-d);
        else
            printf("0\n");

    }
    return 0;
}
