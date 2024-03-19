#include<stdio.h>
int main()
{
    int a,b,x,k;
    scanf("%d%d",&a,&b);
    x=(a+b);


    if(x%2==0)
    {
        k=x/2;
        printf("%d\n",k);
    }
    else
        {
        printf("IMPOSSIBLE\n");
    }
    return 0;
}

