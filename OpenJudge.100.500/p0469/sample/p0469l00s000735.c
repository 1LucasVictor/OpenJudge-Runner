#include <stdio.h>
int main(void){
  int a,b,c,d;

  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  d=c-b;
  if(a<=d){
    printf("OK\n");
  }else
  if((b%a==0)||(c%a==0)){
    printf("OK\n");
  }else{
    printf("NG\n");
  }
  return 0;
}
