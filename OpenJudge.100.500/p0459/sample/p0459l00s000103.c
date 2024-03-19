#include<stdio.h>
int main(void){
  int a,b;
  scanf("%d%d",&a,&b);
  int i;
  for(i=0;i<=a;i++){
    if((i*2+(a-i)*4)==b) return printf("Yes\n");
  }
  return printf("No\n");
}