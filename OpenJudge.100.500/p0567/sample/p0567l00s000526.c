#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  int a,b,c;

  scanf("%d %d %d", &a, &b, &c);

  c -= a - b;

  if(c < 0) printf("0\n");

  else printf("%d\n", c);

  return 0;
}