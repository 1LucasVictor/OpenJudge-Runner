#include <stdio.h>
int memo[1000001] = {0};
int main(){
  int n;
  int i,j,k;
  int sum;
  for(i = 2;i <= 1000001;i++){
    if(memo[i] == 1)continue;
    for(k = i * 2;k <= 1000001;k += i)memo[k] = 1;
  }
  while(scanf("%d",&n) != EOF){
    sum = 0;
    for(i = 2;i <= n;i++){
      if(memo[i] == 1)continue;
      sum++;
    }
    printf("%d\n",sum);
  }
  return(0);
}