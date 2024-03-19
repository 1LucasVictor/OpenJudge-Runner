#include<stdio.h>
int main(){
  int n,mod;
  scanf("%d",&n);
  mod=n%10;
  if(mod==3)
    printf("bon\n");
  else if(mod==0 || mod==1 || mod==6 || mod==8)
    printf("pon\n");
  else
    printf("hon\n");
  return 0;
}
