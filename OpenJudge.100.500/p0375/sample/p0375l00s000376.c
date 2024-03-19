#include<stdio.h>
int main(){
  int n,i,result[10000],amount=0,x;

  scanf("%d",&n);
  for(i=3;i<=n;i++){
    x = i;
    if(i % 3 == 0){
      result[amount] = i;
      amount++;
    }
    else if(i>=10){
      for(;;){
        if(x%10 == 3){
          result[amount] = i;
          amount++;
          break;
        }
        else{
          x /= 10;
          if(x == 0) break;
        }
      }

    }
  }
  for(i=0;i<amount;i++){
    printf(" %d",result[i]);
  }
  printf("\n");
  return 0;
}

