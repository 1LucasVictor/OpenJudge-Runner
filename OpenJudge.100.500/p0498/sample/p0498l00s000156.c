#include<stdio.h>
int main()
{
    int n,a,j,i;
    scanf("%d",&n);
    if(n%2!=0)
        a=n/2+1;
    else
        a=n/2;
    printf("%d\n",a);
    return 0;
}
