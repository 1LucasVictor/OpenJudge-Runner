#include<stdio.h>
#include<stdlib.h>
 
int main(){

  int a, b;
  scanf("%d%d", &a, &b);
  if(a&1==1 && b&1==1)
    printf("Odd");
  else
    printf("Even");

}