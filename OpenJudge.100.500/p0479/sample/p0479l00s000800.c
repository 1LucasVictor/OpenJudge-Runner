#include<stdio.h>
int a[200010];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        a[x]++;
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
}
