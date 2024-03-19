#include<stdio.h>

int main(void){
  int n = 0;
  scanf("%d", &n);
  int m =0;
  scanf("%d", &m);
  int ans[n];
  int i = 0;
  for(i=0;i<n;i++){
    ans[i] = 0;
  }
  int x = 0;
  int y = 0;
  for(i=0;i<m;i++){
    scanf("%d", &x);
    scanf("%d", &y);
    if(ans[x-1] == 0 || ans[x-1] == y){
      ans[x-1] = y;
    }else{
      printf("-1");
      return 0;
    }
  }
  if(ans[0] == 0){
    printf("-1");
    return 0;
  }
  for(i=0;i<n;i++){
    printf("%d", ans[i]);
  }
}