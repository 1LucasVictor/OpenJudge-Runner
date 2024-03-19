#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,b;
    for(i=0;i<n;i++)
    a[i] = 0;
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&b);
        a[b-1]++;
    }
    a[n]=0;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}