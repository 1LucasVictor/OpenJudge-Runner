#include<stdio.h>
int main(void)
{
  int N,i;
  int a[200001];
  int ans[200001];

  scanf("%d",&N);

  for(i=2;i<=N;i++)
    scanf("%d",&a[i]);

  for(i=2;i<=N;i++){
    ans[a[i]]++;
  }

  for(i=1;i<=N;i++)
  printf("%d\n",ans[i]);

  return 0;
}