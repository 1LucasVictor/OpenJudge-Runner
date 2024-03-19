#include <stdio.h>

int main(void) {
  int a,b,c;
  int i, j;
  int asc[3];
  int v, m, n;
  
  scanf("%d %d %d", &asc[0], &asc[1], &asc[2]);

  for (i = 0; i < 3; i++) {
    v = asc[0];
    m = 0;
    for (j =1; j < 3-i; j++) {
      if (v < asc[j]) {
	v = asc[j];
	m = j;
      }
    }
    n = asc[2 - i];
    asc[2 - i] = asc[m];
    asc[m] = n;
    
  }

  for (i = 0; i < 3; i++) {
    if(i < 2)
    printf("%d ", asc[i]);
    else
      printf("%d", asc[i]);
  }
  puts("");
  return 0;
}
