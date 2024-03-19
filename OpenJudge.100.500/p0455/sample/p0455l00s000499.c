#include<stdio.h>

int main(void){
	int a;
	scanf("%d", &a);
	int ans = a + a*a + a*a*a;
	printf("%d\n", ans);

	return 0;
}