#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    while(n)
    {
        if(n%10==7) flag=1;
        n /= 10;
    }
    if(flag==1) printf("Yes\n");
    else printf("No\n");
    return 0;
}