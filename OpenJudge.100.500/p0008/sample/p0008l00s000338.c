#include <stdio.h>

int main() {
  int i,j,k,l,c,n;
  int sosu[999999], p;
  while(scanf("%d", &n) != EOF) {
    for(i = 0; i < 999999; i++) 
      sosu[i] = -1;
    c = 0;
    p = 0;
    for(i = 2; i <= n; i++) {
      for(j = 0; sosu[j] != -1; j++) {
	if(i % sosu[j] == 0) {
	  j = -1;
	  break;
	}
      }
      if(j != -1) {
	sosu[p] = i;
	p++;
	c++;
      }
    }
    printf("%d\n", c);
  }
}