#include <stdio.h>

int main(void){
	int a;
	int ans;

	scanf("%d", &a);

	ans = a + a*a + a*a*a;

	printf("%d\n", ans);

	return 0;
}