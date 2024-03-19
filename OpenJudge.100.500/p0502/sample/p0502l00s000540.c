#include <stdio.h>
int x,y;
int i,n=0;
int num[100];
int main(void){
  scanf("%d",&x);
  for(i=0;i<x;i++){
    scanf("%d",&y);
    num[i]=y;
  }
  for(i=0;i<x;i++){
    if(num[i]%2==0){
    if(num[i]%3!=0&&num[i]%5!=0){
      n=0;
      break;
    }else if(num[i]%3==0||num[i]%5==0){
      n=1;
    }
    }
  }
  if(n==1) printf("APPROVED");
  else printf("DENIED");
  return 0;
}