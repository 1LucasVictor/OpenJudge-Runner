#include <stdio.h>
#include <math.h>

int main() {
  int i, j;
  int n, flag, prime = 0;
  int a[10000];

  scanf("%d", &n);

  for(i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for(i = 0; i < n; i++) {
    flag = 0;
    if(a[i] == 2) flag = 0;
    else if ((a[i] != 2) && ((a[i] % 2) != 0)) {
      for(j = 3; j <= sqrt(a[i]); j+=2) {
	if((a[i] % j) == 0) {
	  flag = 1;
	  break;
	}
      }
    }
    else flag = 1;
    
    if (flag == 0) prime++;
  }

  printf("%d\n", prime);

  return 0;
}