#include<stdio.h>

int main(){
  int a,b,t,cnt,x;
  scanf("%d%d%d",&a,&b,&t);
  cnt=0;
  x = 1;
  while(x*a < t+0.5){
    cnt += b;
    x ++;
  }
  printf("%d",cnt);
}
    
