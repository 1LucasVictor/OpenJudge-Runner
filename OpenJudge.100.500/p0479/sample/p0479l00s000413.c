#include<stdio.h>

int main(){
  int N;
  scanf("%d",&N);
  int a[200010];
  int ans[200010];
  
  for(int i=2;i<=N;i++)scanf("%d",&a[i]);
  for(int i=2;i<=N;i++)ans[a[i]]++;
  for(int i=1;i<=N;i++)printf("%d\n",ans[i]);

  return 0;
}
