#include<stdio.h>
int main(void){
  int train[11]; //?????£???????????????train[0]??¨?????????
  int k,l=1,num,tail;
  int result[101];
  for(k=1;k<=10;k++){ //0??§?????????
    train[k]=0;
  }

  scanf("%d",&train[1]);
  tail=1;

  while(1){
    scanf("%d",&num);
    if(1<=num&&num<=10){
      tail++;
      for(k=tail;k>=2;k--){
        train[k]=train[k-1];
      }
      train[1]=num;
    }else if(num==0){
      result[l]=train[1];
      if(tail==1)break;
      else{
        for(k=1;k<=tail-1;k++){
          train[k]=train[k+1];
        }
        train[tail]=0;
        tail--;
      }
      l++;
    }
  }
  for(k=1;k<=l;k++){
    printf("%d\n",result[k]);
  }
 return 0;
}