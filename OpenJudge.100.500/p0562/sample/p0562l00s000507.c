#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

  int a,b;
  int i;

  scanf("%d %d", &a, &b);

  i = 0;
  while(a*i - i + 1 < b) i++;

  printf("%d\n", i);

  return 0;
}
