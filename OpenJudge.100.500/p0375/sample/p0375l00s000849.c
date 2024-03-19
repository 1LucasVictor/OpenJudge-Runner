#include<stdio.h>
int main(){
  int n,i,result[10000],amount=0;

  scanf("%d",&n);
  for(i=3;i<=n;i++){
    if(i % 3 == 0){
      result[amount] = i;
      amount++;
    }
    else if(i % 10 == 3){
      result[amount] = i;
      amount++;
    }
    else if(i>=10 && i/10%3 == 0){
      result[amount] = i;
      amount++;
    }
  }
  for(i=0;i<amount;i++){
    printf(" %d",result[i]);
  }
  printf("\n");
  return 0;
}

