#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0) printf("%d\n",n/2);
    if(n%2==1) printf("%d\n",n/2+1);
    return 0;
}