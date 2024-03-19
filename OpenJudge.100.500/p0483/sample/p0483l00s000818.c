#include<stdio.h>

int main(void){
  int n;
  int a=0;
  scanf("%d", &n);
  if(n/100==7 || n%10==7 || (n/10)%10==7){
    a=1;
  }
  if(a==1){
    printf("Yes\n");
  }else{
    printf("No\n");
  }

  return 0;
}
