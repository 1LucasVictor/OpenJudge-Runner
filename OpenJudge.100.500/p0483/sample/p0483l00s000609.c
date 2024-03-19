#include<stdio.h>

int main(void){
  int n,n1,n2,n3;
  
  do{
    scanf("%d",&n);
  }while(n<100 || n>999);
  
  n1 = n/100;
  n = n%100;
  n2 = n/10;
  n = n%10;
  n3 = n;
  
  if(n1 == 7 || n2 == 7 || n3 == 7){
    printf("Yes");
  }
  else{
    printf("No");
  }
  
  return 0;
}