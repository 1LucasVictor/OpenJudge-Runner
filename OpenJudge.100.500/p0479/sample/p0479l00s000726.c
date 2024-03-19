#include<stdio.h>
int main() {

  int n,Ai,i;
  scanf("%d",&n);
  int ans[n];
  for (i = 1;i <= n;i ++) {
    ans[i] = 0;
  }
  for (i = 1;i < n;i ++) {
    scanf("%d",&Ai);
    ans[Ai] ++;
  }
  for(i = 1;i <= n;i ++) {
    printf("%d\n",ans[i]);
  }
}
