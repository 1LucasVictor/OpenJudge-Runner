#include<stdio.h>
int main(void){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if (b+c-a < 0){
    printf("%d",0);
  }else{
  printf("%d",b+c-a);
  }
  return 0;
}