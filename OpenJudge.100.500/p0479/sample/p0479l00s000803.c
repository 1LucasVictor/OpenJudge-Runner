#include<stdio.h>
int a[200010];
int ans[200010];
int main(void)
{
  int n,i;


  scanf("%d",&n);

  for(i=2;i<=n;i++)
    scanf("%d",&a[i]);

  for(i=2;i<=n;i++)
    ans[a[i]]++;

  for(i=1;i<=n;i++)
  printf("%d\n",ans[i]);

  return 0;
}
