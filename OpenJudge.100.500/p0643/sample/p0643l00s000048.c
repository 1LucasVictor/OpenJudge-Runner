#include<stdio.h> 
 
int main(void){
	int a, b;
  scanf("%d,%d", &a, &b);
  int c = a * b;
  if(c % 2 == 0){
    printf("Even");
  }
  else{
    printf("0dd");
  }
      
   return 0;
}