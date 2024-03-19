#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef long long ll;

int main()
{

    int n=0;
    scanf("%d",&n);
    int a[n-1],b[n];

    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        b[i]=0;
    }
    b[n-1]=0;

    for(int i=0;i<n-1;i++)
    {
        b[a[i]-1]=b[a[i]-1]+1;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }

    return 0;
}