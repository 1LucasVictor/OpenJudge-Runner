#include <stdio.h>

int main(void)
{
	int n;
	int a, b, c;
	int i;
	int big, mi ,mu;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		scanf("%d %d %d", &a, &b, &c);
	if (a > b && a> c){
		big = a;
		mi = b;
		mu = c;
	}
	else if (b > a && b > c){
		big = b;
		mi = a;
		mu = c;
	}
	else {
		big = c;
		mi = b;
		mu = a;
	}
	if (big * big == mi * mi + mu * mu){
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	}
	
	return (0);
}