#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

  int a,b;

  scanf("%d %d", &a, &b);

  if((a + b) % 2 == 1) printf("IMPOSSIBLE\n");

  else printf("%d\n", (a + b)/2);
  
  return 0;
}
