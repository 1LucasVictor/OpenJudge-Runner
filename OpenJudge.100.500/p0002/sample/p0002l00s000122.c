#include <stdio.h>

int main(void)
{
	int N;
	int a[1000], b[1000], c[1000];
	int i;
	
	scanf("%d", &N);
	for(i = 0 ; i < N ; i++){
		scanf("%d %d %d", &a[i], &b[i], &c[i]);
	}
	for(i = 0 ; i < N ; i++){
		if( (a[i] * a[i]) + (b[i] * b[i]) == (c[i] * c[i]) ){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	printf("\n");
	
	return (0);
}