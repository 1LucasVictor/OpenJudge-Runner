#include<stdio.h>
#include<math.h>
#include <limits.h>
#include<stdlib.h>


int main(void) {
	int a;
	int ans;
	scanf("%d", &a);
	ans = a + a * a + a * a * a;
	printf("%d\n", ans);
	return 0;
}