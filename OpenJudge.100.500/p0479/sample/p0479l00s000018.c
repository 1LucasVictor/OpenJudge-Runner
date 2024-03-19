#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],s[n];
    s[n-1]=0;
    for(int i=0;i<n-1;i++)
    {
        s[i]=0;
        scanf("%d",&a[i]);
    }
    for( i=0;i<n-1;i++)
    {
        s[a[i]-1]++;

    }
    for( i=0;i<n;i++)
    {
        printf("%d\n",s[i]);
    }
    return 0;


}
