#include<stdio.h>
int a[200005];
int ans[200005];
int main()

{
    int N;
    scanf("%d",&N);

    for(int i=2;i<=N;i++)
    {
        scanf("%d",&a[i]);
        ans[a[i]]++;
    }
    for(int j=1;j<=N;j++)
    {
        printf("%d\n",ans[j]);
    }

    return 0;

}
