#include <stdio.h>

#define TRUE 1
#define FALSE 0

int has3(int x) {
  while(x) {
    if(x%10 ==3) return TRUE;
    x /= 10;
  }
  return FALSE;
}

void call(int n) {
  int x;
  for(x=1;x<=n;x++) {
    if(x%3==0 || has3(x)) {
      printf(" %d",x);
    }
  }
  printf("\n");
}

int main(void) {
  int n;
  scanf("%d",&n);
  call(n);

  return 0;
}
