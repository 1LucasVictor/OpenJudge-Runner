#include<stdio.h>
int main(void){
  int a,b,c,ans;
  scanf("%d %d %d",&a,&b,&c);
  a = a - b;
  ans = c - a;
  if (ans<=0){
      printf("0\n");
  }
  else{
      printf("%d\n",ans);
  }
  return 0;
}