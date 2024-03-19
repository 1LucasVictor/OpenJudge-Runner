#include<stdio.h>
#include<string.h>
#define pi 3.1415926535
int main()
{
    int n,a;
    scanf("%d",&n);
    int ans[n+1];
    memset(ans,0,(n+1)*sizeof(ans[0]));
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&a);
        ans[a]++;
    }
    for(int i=0;i<n;i++)
    printf("%d\n",ans[i+1]);
}
