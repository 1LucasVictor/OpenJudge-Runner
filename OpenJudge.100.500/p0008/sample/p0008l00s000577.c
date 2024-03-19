#include <stdio.h>
int main(void) {
  int a;
  while(scanf("%d", &a) != EOF) {
    printf("%d\n", prime(a));
  }
return 0;
}
int prime(int n) {
  int i, j, count = 0;
  for(i = 2;i <= n;i++) {
    for(j = 2;j*j <= i;j++) {
      if(i%j == 0)
	break;
    }
    if(j*j > i)
      count++;
  }
  return count;
}