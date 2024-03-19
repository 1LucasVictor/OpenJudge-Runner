#include<stdio.h>

int cal_gcd(int x, int y) {
	int r = x%y;
	while(r!=0) {
		x = y;
		y = r;
		r = x%y;
	}
	return y;
}

int main() {
	int a,b, gcd, lcm;
	while(scanf("%d %d", &a, &b) != EOF) {
		gcd = cal_gcd(a,b);
		lcm = (a/gcd)*b;
		printf("%d %d\n",gcd, lcm);
	}
	return 0;
}