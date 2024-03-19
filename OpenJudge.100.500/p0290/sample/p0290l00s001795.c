#include <stdio.h>
int main () {
  int a[10000], b=0, n, i, j, m=0;

  scanf("%d", &n);
  for(i = 0 ; i < n ; i++) {
    scanf("%d", &a[i]);
  }

  for(i = 0 ; i < n ; i++) {
    for(j = 2 ; j < a[i] ; j++) {
      if(a[i] % j == 0) {
	b++;
	break;
      } 
    }
    if(b == 0) m++;
    b = 0;
  }

  printf("%d\n", m);
  return 0;
}