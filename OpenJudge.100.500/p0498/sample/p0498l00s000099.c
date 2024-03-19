#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c,ans,d;
    d=n/2;
    c=n%2;
    if(c!=0)
        printf("%d\n",d+c);
        else
            printf("%d\n",d);
        return 0;
}
