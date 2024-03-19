#include <stdio.h>
#include <stdlib.h>

int main(void){

	int *a, *b, *c;
	int n, i;

	scanf("%d", &n);
	a = (int *)malloc(n * sizeof(int));
	b = (int *)malloc(n * sizeof(int));
	c = (int *)malloc(n * sizeof(int));

	for(i = 0; i < n; i++) scanf("%d %d %d", &a[i], &b[i], &c[i]);
	for(i = 0; i < n; i++){
		if((a[i] * a[i] + b[i] * b[i] == c[i] * c[i]) ||
		   (c[i] * c[i] + a[i] * a[i] == b[i] * b[i]) ||
		   (b[i] * b[i] + c[i] * c[i] == a[i] * a[i])) 
		   printf("YES\n");
		else printf("NO\n");
	}

	free(a);
	free(b);
	free(c);

	return 0;
}