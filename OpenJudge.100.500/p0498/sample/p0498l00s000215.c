#include<stdio.h>

int main(){
  int n;
  
  scanf("%d", &n);
  
  if(n % 2 == 1){
	  n++;
  }
  
  printf("%d", n/2);
  return 0;
}