#include<stdio.h>
#define MAX 50
#define NIL (-1)
int dp[MAX];

int dpcheck(int num){
  if(num == 0 || num == 1)return dp[num] = 1;
  else if(dp[num] != NIL)return dp[num];
  else{
    return dp[num] = dpcheck(num - 1) + dpcheck(num - 2);
  }
}

int main(){
  int num,i;
  for(i=0;i<MAX;i++){
    dp[i] = NIL;
  }
  scanf("%d",&num);
  printf("%d\n",dpcheck(num));

  return 0;
}

