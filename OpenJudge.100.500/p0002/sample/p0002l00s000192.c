#include<stdio.h>

int main(void) {
	int N, i;
	int a, b, c, max;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	return 0;
}