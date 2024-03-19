#include<stdio.h>
int main(void){
int n;
  scanf("%d",&n);
  if(n%2==0){
    int a=n/2;
    printf("%d",a);
  }
  
  else {
    int a=n/2+1;
  printf("%d",a);
  }
  return 0;
}