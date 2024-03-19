/* 144b */
#include<stdio.h>
int main(void){
  int n,i,a;
  scanf("%d",&n);
  a=0;
  for(i=1;i<10;i++){
    if(n%i==0&&n/i<10){
      a++;
      break;
    }
  }
  if(a>0){
  printf("Yes\n");
  }
  if(a==0){
  printf("No\n");
  }
  return 0;
}
