#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  n = n%10;
  if(n==2||n==4||n==5||n==7||n==9) puts("hon");
  if(n==0||n==1||n==6||n==8) puts("pon");
  else puts("bon");
}