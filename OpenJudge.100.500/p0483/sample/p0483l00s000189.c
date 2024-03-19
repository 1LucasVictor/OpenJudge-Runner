#include <stdio.h>

int main(){
  int x;
  scanf("%d", &x);
  if(x%10==7 || x% 100 /10 ==7 || x%1000 /100 ==7) printf("Yes\n");
  else printf("No\n");
}