#include<stdio.h>
int main(){
  int a,y,n,money=10000;
  scanf("%d",&n);
  for(a=0;a<n;a++){
    money=money+money/100*5;
  }
  y=money%1000;
  money=money/1000;
  if(y>=5){
    money=money+1;
  }
  money=money*10000;
  printf("%d\n",money);
  return (0);
}