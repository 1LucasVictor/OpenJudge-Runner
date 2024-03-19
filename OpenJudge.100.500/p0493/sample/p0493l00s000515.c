#include <stdio.h>

int main(void) {
  	int n;
	scanf("%d", &n);
  
  	int ans = n / 500 * 1000;
  	ans += (n - n / 500 * 500) / 5 * 5;
  	printf("%d", ans);
  	return 0;
}
