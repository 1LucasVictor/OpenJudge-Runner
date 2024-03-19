#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
#define ll long long

int main(void)
{
    int i,j,n,m;
    ll sum;
    int arr[10001],ref[101];
    scanf("%d%d",&n,&m);
    for(i=0;i<n*m;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",ref+i);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum+=(ref[j]*arr[(i*m)+j]);
        }
        printf("%d\n",sum);
    }
    return 0;
}


