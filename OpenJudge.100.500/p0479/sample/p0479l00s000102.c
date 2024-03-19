#include<stdio.h>
#include<math.h>
#define MOD 998244353
#define MAX 200005
#define MAX_DISTANCE 501
#define PRECISION 0.00000000001
#define INF 4000000000000000000
int boss[MAX];
int main()
{
    int n,m,i;
    scanf("%d",&n);
    int inp;
    for(i=1;i<n;i++)
    {
        scanf("%d",&inp);
        boss[inp]++;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\n",boss[i]);
    }
    return 0;
}
