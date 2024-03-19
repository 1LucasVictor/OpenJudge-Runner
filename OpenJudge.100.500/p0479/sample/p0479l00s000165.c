#include<stdio.h>
int main() {

  long int n,i,Ai;
  scanf("%ld",&n);
  int ans[n];
  for (i = 1;i <= n;i ++) {
    ans[i] = 0;
  }
  for (i = 1;i < n;i ++) {
    scanf("%ld",&Ai);
    ans[Ai] ++;
  }
  for(i = 1;i <= n;i ++) {
    printf("%d\n",ans[i]);
  }
}
