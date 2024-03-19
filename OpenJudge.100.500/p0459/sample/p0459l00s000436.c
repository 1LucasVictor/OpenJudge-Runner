#include <stdio.h>

int main(void){
  int x, y, i, ans=0, a, b;
  scanf("%d %d", &x, &y);
  for(i=0; i<x+1; i++){
    a = x - i;
    if(2*i+4*a==y) ans = 1;
  }
  if(ans) printf("Yes");
  else printf("No");
}