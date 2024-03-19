#include <stdio.h>
#define N 100000

int numcase(int a, int b);

int main(void){
  int n, x, ans[N];
  int i=0, j;

  while(scanf("%d %d", &n, &x), n!=0 || x!=0){
    ans[i] = numcase(n, x);
    i++;
  }
  for(j=0; j<i; j++)
    printf("%d\n", ans[j]);

  return 0;
}

int numcase(int a, int b){
  int num=0; // 個数カウント
  int j,k;

  for(j=1;j<=b/3-1;j++){
    for(k=j+1;;k++){
      if(k>=(b-j-k)){
        break;
      }
      if(a>=(b-j-k)){
        num++;
      }
    }
  }
  return num;
}

