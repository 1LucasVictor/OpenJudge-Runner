#include <stdio.h>

int main() {
  int i, j, n, count = 0;
  int number[1000000] = {0};

  number[0] = 1;
  number[1] = 1;

  while ( scanf("%d", &n) != EOF) {
    count = 0;
    for(i = 2; i <= n; i++) {
      if(number[i] == 1) continue;;
      for(j = i+i; j <= n; j += i) {
	number[j] = 1;
      }
    }
    
    for(i = 0; i <= n; i++) {
      if(number[i] == 0) count++;
    }
    
    printf("%d\n", count);
  }
  
  return 0;
}