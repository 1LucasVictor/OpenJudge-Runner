#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==0)
    {
        printf("0\n");
    }
    else if(n==1)
    {
        printf("1\n");
    }
    else if(n%2==0)
    {
        printf("%d\n",n/2);
    }
    else if(n%2==1)
    {
        printf("%d\n",n/2+1);
    }
    return 0;
}
