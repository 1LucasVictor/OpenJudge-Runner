#include<stdio.h>
int main() {
	int a, b, t;
	scanf("%d %d %d", &a, &b, &t);
	
	
	printf("%d ", b * (int)((double)(t + 0.5) / (double)a ));
	return 0;
}