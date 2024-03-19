#include<stdio.h>

int main() {
	int a,b,c,d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int i,j, sum = 0;
	for(i = a; i < b; ++i) {
		for(j = c; j < d; ++j) {
			if(i == j) sum++;
		}
	}
	printf("%d\n", sum);
	return 0;
}