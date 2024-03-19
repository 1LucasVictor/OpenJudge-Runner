#include<stdio.h>
int main(){
  int a, b, c, i;
  scanf("%d %d %d", &a, &b, &c);
  i = c - a + b;
  if(i >= 0)
  	printf("%d", i);
  else
    printf("0");
  return 0;
}