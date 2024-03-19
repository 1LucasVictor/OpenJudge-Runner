#include<stdio.h>

int main(){
	int x;
	int ans = 0;

	scanf("%d", &x);

	ans = (x/500)*1000;
	x %= 500;
	ans += (x/5)*5;

	printf("%d", ans);

	return 0;
}
