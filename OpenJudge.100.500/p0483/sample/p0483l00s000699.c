#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,t;
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    c=b%10;
    d=b/10;
    if(a==7 || c==7 || d==7)
    {
        printf("Yes\n");
    }
    else
        printf("No\n");
    return 0;
}

