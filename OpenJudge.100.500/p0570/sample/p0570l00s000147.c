#include<stdio.h>

int main()
{
    int a,b,k,s,s1;

    scanf("%d%d",&a,&b);

    k=(a+b)/2;

    s=abs(a-k);
    s1=abs(b-k);

    if(s==s1&&a!=b)
    {
        printf("%d\n",k);
    }

      else
    {
        printf("IMPOSSIBLE\n");
    }

    return 0;
}