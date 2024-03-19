#include <stdio.h>

int main(void) {
  int a,b,c;
  scanf("%d %d %d", &a,&b,&c);
  if((a==5 || a==7) && (b==5 || b==7) && (c==5 || c==7) && (a+b+c==17)) {
    printf("YES\n");
  }
  else {
    printf("NO\n");
  }
  return 0;
}